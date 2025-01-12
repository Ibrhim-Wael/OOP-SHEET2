/*Imagine you are building a banking system. You are tasked with creating a class 
`BankAccount` that models a simple bank account. 
The class should have the following attributes: - Account holder's name - Account number - Balance 
Methods: - `deposit`: Adds a specified amount to the account balance - `withdraw`: Deducts a specified amount from the account balance (if there are 
sufficient funds) - `display`: Displays account information (name, number, and balance) */

class BankAccount {
    private:
    string AccountHolderName;
    int AccountNumber;
    int Balance;
    
    public:
     void getBankAccInfo(string EAccountHolderName, int EAccountNumber, int EBalance) {
        AccountHolderName = EAccountHolderName;
        AccountNumber = EAccountNumber;
        Balance = EBalance;
    }
    void deposit(int Amount) {
         Balance += Amount;
     }
    void withdraw(int Amount) {
         Balance -= Amount;
     }
    void display() {
         cout << AccountHolderName << " " << AccountNumber << " " << Balance << endl;
     }
};

int main() {
BankAccount User1;
    User1.getBankAccInfo("Ibarhim",730,8000);
    User1.deposit(100);
    User1.display() ;//Ibrahim 730 8100
    User1.withdraw(500);
    User1.display();//Ibrahim 730 7600

    return 0;
}
