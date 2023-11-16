/*Assume that bank maintains two kinds of accounts for customers, one called as saving account and other as current accounts provides
Simple interest and withdraw facilities but no book facility.

a) The current account provides Cheque book facility but no interest.
b) Current account holders should maintain a minimum balance and if the balance falls below this level a service charges is imposed.*/


#include <iostream>
#include <string>
using namespace std;


class Account   // Base class
{
protected:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    
    void initializeAccount(const string& number, const string& holder, double initialBalance)   // Function to initialize account data
	{
        accountNumber = number;
        accountHolder = holder;
        balance = initialBalance;
    }

    
    void displayAccountInfo() const   // Function to display account information
	{
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }

    
    virtual void withdraw(double amount) = 0;   // Function to perform withdrawal  // Pure virtual function
};


class SavingAccount : public Account   // Derived class for Saving Account
{
private:
    double interestRate;

public:
    
    void initializeSavingAccount(const string& number, const string& holder, double initialBalance, double rate)     // Function to initialize saving account data
	{
        initializeAccount(number, holder, initialBalance);
        interestRate = rate;
    }

    
    void displaySavingAccountInfo() const   // Function to display saving account information
	{
        cout << "Account Type: Saving Account" << endl;
        displayAccountInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    
    void withdraw(double amount) override   // Function to perform withdrawal for saving account
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
};


class CurrentAccount : public Account    // Derived class for Current Account
{
private:
    double minimumBalance;
    double serviceCharge;

public:
    
    void initializeCurrentAccount(const string& number, const string& holder, double initialBalance, double minBalance, double charge) // Function to initialize current account data
	{
        initializeAccount(number, holder, initialBalance);
        minimumBalance = minBalance;
        serviceCharge = charge;
    }

    
    void displayCurrentAccountInfo() const    // Function to display current account information
	{
        cout << "Account Type: Current Account" << endl;
        displayAccountInfo();
        cout << "Minimum Balance: $" << minimumBalance << endl;
        cout << "Service Charge: $" << serviceCharge << endl;
    }

    
    void withdraw(double amount) override   // Function to perform withdrawal for current account
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else 
		{
            cout << "Withdrawal failed. Insufficient funds." << endl;
        }

        
        if (balance < minimumBalance)   // Check if balance falls below minimum, impose service charge
		{
            balance -= serviceCharge;
            cout << "Service charge of $" << serviceCharge << " imposed due to low balance." << endl;
        }
    }
};

int main() 
{
    
    SavingAccount savingAccount;    // Create objects of SavingAccount and CurrentAccount
    CurrentAccount currentAccount;

    
    savingAccount.initializeSavingAccount("SA123", "Varun Pradhan", 28000.0, 3.5);    // Initialize account data
    currentAccount.initializeCurrentAccount("CA456", "Versen Max", 32000.0, 1000.0, 10.0);

    
    cout << "\nSaving Account Information:" << endl;    // Display account information
    savingAccount.displaySavingAccountInfo();

    cout << "\nCurrent Account Information:" << endl;
    currentAccount.displayCurrentAccountInfo();

    
    cout << "\nPerforming withdrawals:" << endl;    // Perform withdrawals
    savingAccount.withdraw(4000.0);
    savingAccount.displaySavingAccountInfo();

    currentAccount.withdraw(800.0);
    currentAccount.displayCurrentAccountInfo();

    return 0;
}

