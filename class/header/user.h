#include <string>

using namespace std;


class User {
    private:
        int _user_id;

        string _last_name;
        string _first_name;
        // birthday date
        string _addr;
        string _password;

    public:
        // autogenerate user_id
        User();
        ~User();

        string get_name();
        string get_user_info();

        void set_name(string last, string first);
        void set_addr(string addr);
        void set_birthday();
        void set_password();
};