#include <vector>

#include "account.h"
#include "user.h"

using namespace std;

class Bank {
    private:
        vector<Account*> accounts;
        vector<User*> clients;
};