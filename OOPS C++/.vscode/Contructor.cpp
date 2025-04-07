#include <bits/stdc++.h>
using namespace std;

class Account
{
private:
    string password;

public:
    string name;
    double AccountId;
    double balance;

    Account(string name, double AccountId, double balance, string password)
    {
        this->name = name;
        this->AccountId = AccountId;
        this->balance = balance;
        this->password = password;
    }

    Account(Account &orgObj){//custom copy constructure 
        this->name = orgObj.name;
        this->AccountId = orgObj.AccountId;
        this->balance = orgObj.balance;
        this->password = orgObj.password;
    }
    void getInfo()
    {
        cout << "Name :" << name << endl;
        cout << "AccountId :" << AccountId << endl;
        cout << "Balance :" << balance << endl;
        cout << "Password :" << password << endl;
    }
};
int main()
{
    Account a1("Abhishek", 12345, 35000, "Gupi");
    // a1.getInfo();
    Account a2("Sourav", 23456, 34000, "sourav");
    // a2.getInfo();
    Account a3(a1);//Copy the properties of a1 into a3(Copy Constructor)
    // a3.getInfo();

    Account a4(a2);//custom copy constructor
    a4.getInfo();
    return 0;
}