#include<conio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

/*
    Mini Project- ATM
    -> Check Balance
    -> Cash Withdraw
    -> User details
    -> Update Mobile No
*/

class atm{
private:
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;
public:
    void setData(long int account_No, string name, int PIN, double balance, string mobile_No){
        this-> account_No = account_No;
        this->name = name;
        this->PIN = PIN;
        this->balance = balance;
        this->mobile_No = mobile_No;
    }
    long int getAccountNo(){
        return account_No;
    }
    string getName(){
        return name;
    }
    int getPIN(){
        return PIN;
    }
    double getBalance(){
        return balance;
    }
    string getMobileNo(){
        return mobile_No;
    }
    void cashWithdraw(int amount){
        if(amount>0 && amount <=balance){
            balance -=amount;
            cout<< endl << "Collect your cash";
            _getch();
            cout<< endl << "Your new balance is: " << balance;
            _getch();
        }
        else{
            cout<< endl << "Invalid amount or Insufficient Balance";
            _getch();
        }
    }
    void setMobile(string oldmobile, string newmobile){
        if(oldmobile == mobile_No){
            mobile_No=newmobile;
            cout<< endl << "Successfully Updated mobile No.";
        }
        else{
            cout<< endl << "Wrong Old mobile No.";
            _getch();
        }
    }

};
int main()
{
    long int enterAccountNo;
    int Choice=0, enterPIN;

    atm user1;
    user1.setData(1234567, "Pritam GOlder", 1234, 17500, "01516000000");

    do{
        system("cls");

        cout<< "****  Welcome to ATM  ****" << endl;
        cout<< "Enter your account NO: ";
        cin>> enterAccountNo;
        cout<< endl << "Enter PIN: ";
        cin>> enterPIN;

        if(enterAccountNo==user1.getAccountNo() && enterPIN==user1.getPIN()){
            do{
                int amount=0;
                string oldmobile, newmobile;

                system("cls");
                cout<< endl << "****  Welcome to ATM  ****";
                cout<< endl << "Select Option: ";
                cout<< endl << "1. Check Balance";
                cout<< endl << "2. Cash Withdraw";
                cout<< endl << "3. Show User Details";
                cout<< endl << "4. Update Mobile No.";
                cout<< endl << "5. Exit";
                cout<< endl << endl << "-> ";
                cin>> Choice;

                switch(Choice){
                case 1:
                    cout<< endl << "Your Balance is: " << user1.getBalance();
                    _getch();
                    break;
                case 2:
                    cout<< endl << "Enter the amount: ";
                    cin>> amount;
                    user1.cashWithdraw(amount);
                    break;
                case 3:
                    cout<< endl << "User details are: ";
                    cout<< endl << "Account No: " << user1.getAccountNo();
                    cout<< endl << "Name: " << user1.getName();
                    cout<< endl << "Balance: " << user1.getBalance();
                    cout<< endl << "Mobile No: " << user1.getMobileNo();
                    _getch();
                    break;
                case 4:
                    cout<< endl << "Enter old Mobile No: ";
                    cin>> oldmobile;
                    cout<< endl << "Enter new Mobile No: ";
                    cin>> newmobile;
                    user1.setMobile(oldmobile, newmobile);
                    break;
                case 5:
                    exit(0);
                default:
                    cout<< endl << "Enter valid Data";
                }
            }while(1);
        }

    }while(1);
    return 0;
}
