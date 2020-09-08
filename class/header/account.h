#include <vector>

#include "transaction.h"

using namespace std;


// An abstract class for account
class Account {
    private:
        int _account_id;
        int _user_id;
        

    protected:
        double fee;
        Book* book_ptr;
        
        // an array of transactions?
        // date of 1 month

        // protected constructor; delete_account must be called to delete
        ~Account();

        int get_account_id();
        int get_user_id();

        
    public:
        // constructor: set user_id, generate account id, and the reg date
        // instantiate book
        Account(int user_id);
        
        // get balance
        double get_balance();

        // update the balacne
        virtual void update_balance() = 0;

        // delete account
        virtual void delete_account() = 0;

        // create a summary of most recent transactions
        virtual vector<int> create_summary() = 0;

};


// Chequing account
class Chequing: public Account {
    private:
        int _transaction_limit;

    public:
        Chequing(int user_id): Account(user_id){};

};

// Savings account
class Saving: public Account {
    public:
        Saving(int user_id): Account(user_id){};

};

// Credit Card account
class Credit: public Account {
    private:
        double _credit_balance;
        double _credit_limit;
        double _interest;
        double _score;
        // date

        void evaluate_score();
        double evaluate_possible_limits();

    public:
        Credit(int user_id): Account(user_id){};
        double get_credit_limit();
        double get_interest();
        double get_score();
        

        void increase_credit(double limit);
        void credit_transaction(double limit);
        void pay_credit_card(double amount);
};