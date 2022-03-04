#include <iostream>
using namespace std;
class Account
{

private:
    int account_no;
    string name;
    float amount;

public:
    void dataupload()
    {
        cout << "enter the bank account no " << endl;
        cin >> account_no;
        cout << "Enter the bank account holder name " << endl;
        cin >> name;
    }
    void depositMoney()
    {
        int depo_amount;
        cout << "Enter the amount you want to deposite" << endl;
        cin >> depo_amount;
        amount = amount + depo_amount;
    }
    void withdrawMoney()
    {
        int with_amount;
        cout << "Enter the amount to withdraw  " << endl;
        cin >> with_amount;
        if (amount >= with_amount)
        {
            amount = amount - with_amount;
        }
        else
            cout << "Insufficient balance" << endl;
    }
    void calcuteIntrest()
    {
        float rate;
        int time;
        float intrest;
        cout << "Enter the time period  " << endl;
        cin >> time;
        cout << "Enter the rate of intrest  " << endl;
        cin >> rate;
        intrest = (amount * rate * time) / 100;
        cout << "Total intrest=" << intrest << endl;
        cout << "Total amount after intrest =" << endl;
        amount = intrest + amount;
        cout << "Total amount = " << amount << endl;
    }
    void displayDetail()
    {
        cout << "Account no = " << account_no << endl;
        cout << "Account holder name =" << name << endl;
        cout << "Total amount in the acccount = " << amount << endl;
    }
};

int main(int argc, char const *argv[])
{
    Account anish;
    int x = 1;
    do
    {
        int y;
        cout << "welcome to banking" << endl;
        cout << "choose what you want to do" << endl;
        cout << "1. deposit money " << endl;
        cout << "2. withdraw  money " << endl;
        cout << "3. calculate intrest " << endl;
        cout << "4. Display details  " << endl;
        cout << "5. exit " << endl;
        cin >> y;
        switch (y)
        {
        case 1:
            anish.dataupload();
            anish.depositMoney();
            anish.displayDetail();
            break;
        case 2:
            anish.dataupload();
            anish.withdrawMoney();
            anish.displayDetail();

            break;
        case 3:
            anish.dataupload();
            anish.calcuteIntrest();
            anish.displayDetail();

            break;
        case 4:
            anish.dataupload();
            anish.displayDetail();
            break;
        case 5:
            x = 5;
            cout << "Thank you for  " << endl;

            break;
        default:
            cout << "No option choosen  " << endl;
            break;
        }
    }while( x!=5);

    return 0;
}
