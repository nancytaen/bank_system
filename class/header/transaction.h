#include <vector>

using namespace std;

// record all transactions
// manage the balance
class Book {
    private:
        double _balance;
        // use linked list **
        vector<Transaction*> _book; 

    public:
        void add_transaction();
        void remove_transaction();
        
        void print_book();

};

class Transaction {
    private:
        int _transaction_id;
        double _amount;
        int _user_id;
        int _account_from_id;
        int _account_to_id;
        // date

    public:
        Transaction(int _transaction_id, double amount, int account_from_id, int account_to_id);

        void printTransaction();

}