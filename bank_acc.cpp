// Create two classes: BankAccount and TransactionLogger. Your program should: Store account holder’s name and balance inside the BankAccount class. Use a friend function of both BankAccount and TransactionLogger classes to:
//     1. Access the private balance of the account.
//     2. Log and display details of a withdrawal or deposit, depending on user input.
//     3. Prevent the balance from becoming negative during withdrawals.

class TransactionLogger; // Forward declaration

class BankAccount {
    string name;
    double balance;
public:
    BankAccount(string n, double b) : name(n), balance(b) {}
    friend void logTransaction(BankAccount &, TransactionLogger &, double, char);
};

class TransactionLogger {
public:
    friend void logTransaction(BankAccount &, TransactionLogger &, double, char);
};

void logTransaction(BankAccount &acc, TransactionLogger &, double amount, char type) {
    if(type=='W') {
        if(amount > acc.balance) { cout << "Insufficient funds\n"; return; }
        acc.balance -= amount; cout << "Withdrawn: " << amount << ", Balance: " << acc.balance << endl;
    }
    else if(type=='D') {
        acc.balance += amount; cout << "Deposited: " << amount << ", Balance: " << acc.balance << endl;
    }
}
