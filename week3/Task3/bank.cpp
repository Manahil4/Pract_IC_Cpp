#include <iostream>
using namespace std;
// .Create a base class Account
class Account {
    private:
    int accountNumber;
    double balance;

public:
Account(int accNum = 0, double bal = 0.0) {
    accountNumber = accNum;
    balance = bal;
}
// •Data members: accountNumber, balance
// •Functions: deposit(), withdraw(), displayBalance()

// 2.Encapsulation
// •Make data members private.
// •Access them via public functions.

virtual void deposit(double amount){
    cout<<"Deposit requested: " << amount << endl;  
    if(amount > 0){
        balance += amount;
cout<<"Deposited: " << amount << ", New Balance: " << balance << endl;
    } else {
        cout << "Deposit amount must be positive." << endl;
    }
}
void withdraw(double amount){
    cout<<"Withdrawal requested: " << amount << endl;
    if(balance>=amount){

        balance -= amount;
        cout<<"Withdrew: " << amount << ", New Balance: " << balance << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }
}
void displayBalance() {
    cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
}
virtual ~Account() {};
};
// 3.Inheritance
// •Create derived classes:
// •SavingsAccount
// •CurrentAccount
// •Each has its own version of withdraw() (for example, apply limits or charges).

class SA : public Account {
    private:
    double interestRate;
    public:
    void withdraw(double amount){
        cout<<"Savings Account withdrawal requested: " << amount << endl;
        if(amount <= 1000){ // Example limit for savings account
            Account::withdraw(amount);
        } else {
            cout << "Withdrawal limit exceeded for Savings Account." << endl;
        }
    }
    
// 4.Polymorphism
// •Use a virtual void withdraw() in the base class.
// •Override it in derived classes.


    // Override deposit to add interest, by Virtual void deposit() in Account
void deposit(double amount){
    cout<<"Savings Account deposit requested: " << amount << endl;
    double bonus = amount * 0.01; // 1% bonus on deposits
    Account::deposit(amount + bonus);
}};
class CA : public Account {
    private:
    double overdraftLimit;
    public:
    void withdraw(double amount){
        cout<<"Current Account withdrawal requested: " << amount << endl;
        if(overdraftLimit >= amount){
        Account::withdraw(amount); // For simplicity, not implementing overdraft logic here
    } else {
        cout << "Overdraft limit exceeded for Current Account." << endl;
}}};
// 5.Abstraction
// •Use a pointer of type Account* to refer to derived objects.

// 6.Object Creation
// •Create multiple account objects and use them to deposit, withdraw, and display balances.
int main(){
    Account *aac1;
    SA sa1;
    aac1 = &sa1;
    aac1->deposit(500);//SavingsAccount's deposit called
    aac1->withdraw(800);//Account's withdraw called as not used virtual method in base class
    aac1->withdraw(2000);//Account's withdraw called as not used virtual method in base class
    CA ca1;
    aac1 = &ca1;
    aac1->deposit(1000);//Account's deposit called because not overridden in CA
}