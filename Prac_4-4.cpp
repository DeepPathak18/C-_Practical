#include <iostream>
#include <string>
using namespace std;

const int MAX_TRANSACTIONS = 100;

class BankAccount {
private:
    string accountNumber;
    double balance;
    double transactionHistory[MAX_TRANSACTIONS];
    int transactionCount;

public:
    void create(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
        transactionCount = 0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount.\n";
            return;
        }

        balance += amount;
        if (transactionCount < MAX_TRANSACTIONS) {
            transactionHistory[transactionCount++] = amount; // Positive amount for deposit
        }

        cout << "Deposited $" << amount << " to " << accountNumber
             << ". Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
            return;
        }

        if (balance >= amount) {
            balance -= amount;
            if (transactionCount < MAX_TRANSACTIONS) {
                transactionHistory[transactionCount++] = -amount; // Negative for withdrawal
            }
            cout << "Withdrew $" << amount << " from " << accountNumber
                 << ". Balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance.\n";
        }
    }

    void showBalance() {
        cout << "Current balance for " << accountNumber << " is $" << balance << endl;
    }

    void showTransactionHistory() {
        cout << "Transaction history for " << accountNumber << ":\n";
        for (int i = 0; i < transactionCount; ++i) {
            if (transactionHistory[i] > 0)
                cout << "Deposit: $" << transactionHistory[i] << endl;
            else
                cout << "Withdrawal: $" << -transactionHistory[i] << endl;
        }
    }
};

int main() {
    BankAccount myAccount;

    myAccount.create("ACC001", 1000.0);
    myAccount.deposit(300);
    myAccount.withdraw(150);
    myAccount.withdraw(2000); // Should say insufficient balance
    myAccount.showBalance();
    myAccount.showTransactionHistory();

    return 0;
}
