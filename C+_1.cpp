#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    long accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(const std::string& name, long accNumber, const std::string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Member function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
            } else {
                std::cout << "Insufficient balance for withdrawal." << std::endl;
            }
        } else {
            std::cout << "Invalid withdrawal amount. Please enter a positive amount." << std::endl;
        }
    }

    // Member function to display name and balance
    void display() {
        std::cout << "Account Holder: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Account Balance: $" << balance << std::endl;
    }
};

int main() {
    // Example usage:
    BankAccount account("John Doe", 123456789, "Savings", 1000.0);
    account.display();

    account.deposit(500.0);
    account.withdraw(200.0);

    account.display();

    return 0;
}

