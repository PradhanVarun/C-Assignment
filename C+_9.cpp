/*Create a class account that stores customer name, account number and type of account. From this derive classes curr_acc and sav_acc to make them more specific to their  requirements. Include necessary  member function in order to achieve the following tasks:
a) Accepts deposit from a customer and update balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdraws and updates the balance.
e) Check for the minimum balance, impose penalty, necessary and update the balance.*/


#include <iostream>
#include <string>
using namespace std;


class Account   // Base class
{
protected:
    string customerName;
    string accountNumber;
    string accountType;
    double balance;

public:
   
    Account(const string& name, const string& number, const string& type, double initialBalance)     // Constructor to initialize account data
        : customerName(name), accountNumber(number), accountType(type), balance(initialBalance) 
		{
		}

   
    void displayAccountInfo() const     // Function to display account information
	{
        cout << "Customer Name: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }

    
    void deposit(double amount)    // Function to accept deposit and update balance
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "Deposit of $" << amount << " successful." << endl;
        } else 
		{
            cout << "Invalid deposit amount." << endl;
        }
    }

    
    void displayBalance() const   // Function to display the balance
	{
        cout << "Current Balance: $" << balance << endl;
    }

    
    virtual void computeInterest() = 0;    // Virtual function to compute and deposit interest

    
    virtual void withdraw(double amount) = 0;     // Virtual function to permit withdrawals and update balance

    
    virtual void checkMinimumBalance() = 0;    // Virtual function to check minimum balance, impose penalty, and update balance
};


class Curr_Account : public Account   // Derived class for Current Account
{
private:
    double penaltyAmount;

public:
    
    Curr_Account(const string& name, const string& number, double initialBalance)   // Constructor to initialize current account data
        : Account(name, number, "Current", initialBalance), penaltyAmount(20.0) 
		{
		}

    
    void computeInterest() override {
        cout << "Interest computation not applicable for Current Account." << endl;   // Function to compute and deposit interest (not applicable for current account)
    }

    
    void withdraw(double amount) override    // Function to permit withdrawals and update balance
	{
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else 
		{
            cout << "Withdrawal failed. Insufficient funds." << endl;
        }
    }

   
    void checkMinimumBalance() override     // Function to check minimum balance, impose penalty, and update balance
	{
        if (balance < 1000.0) {
            balance -= penaltyAmount;
            cout << "Minimum balance not maintained. Penalty of $" << penaltyAmount << " imposed." << endl;
        }
    }
};


class Sav_Account : public Account    // Derived class for Savings Account
{
public:
    
    Sav_Account(const string& name, const string& number, double initialBalance)     // Constructor to initialize savings account data
        : Account(name, number, "Savings", initialBalance) {}

    
    void computeInterest() override    // Function to compute and deposit interest
	{
        double interestRate = 5.0;    // Assuming an interest rate of 5%
        double interest = (balance * interestRate) / 100.0;
        balance += interest;
        cout << "Interest of $" << interest << " deposited." << endl;
    }

    
    void withdraw(double amount) override   // Function to permit withdrawals and update balance
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else 
		{
            cout << "Withdrawal failed. Insufficient funds." << endl;
        }
    }

    
    void checkMinimumBalance() override    // Function to check minimum balance, impose penalty, and update balance (not applicable for savings account)
	{
        cout << "Minimum balance check not applicable for Savings Account." << endl;
    }
};

int main() 
{
   
    Curr_Account currentAccount("Varun Pradhan", "CA789", 1500.0);    // Create objects of Curr_Account and Sav_Account
    Sav_Account savingsAccount("Versen Max", "SA456", 3000.0);

    
    cout << "Current Account Information:" << endl;   // Display initial account information
    currentAccount.displayAccountInfo();
    cout << endl;

    cout << "Savings Account Information:" << endl;
    savingsAccount.displayAccountInfo();
    cout << endl;

   
    cout << "Depositing into Current Account:" << endl;     // Deposit and display balance
    currentAccount.deposit(500.0);
    currentAccount.displayBalance();
    cout << endl;

    cout << "Depositing into Savings Account:" << endl;
    savingsAccount.deposit(1000.0);
    savingsAccount.displayBalance();
    cout << endl;

   
    cout << "Computing interest for Savings Account:" << endl;
    savingsAccount.computeInterest();
    savingsAccount.displayBalance();
    cout << endl;

    
    cout << "Withdrawing from Current Account:" << endl;    // Withdraw and display balance
    currentAccount.withdraw(300.0);
    currentAccount.displayBalance();
    cout << endl;

    cout << "Withdrawing from Savings Account:" << endl;
    savingsAccount.withdraw(800.0);
    savingsAccount.displayBalance();
    cout << endl;

    
    cout << "Checking minimum balance for Current Account:" << endl;    // Check minimum balance and display balance
    currentAccount.checkMinimumBalance();
    currentAccount.displayBalance();
    cout << endl;

    cout << "Checking minimum balance for Savings Account:" << endl;
    savingsAccount.checkMinimumBalance();
    savingsAccount.displayBalance();
    cout << endl;

    return 0;
}

