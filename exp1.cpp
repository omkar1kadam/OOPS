#include<iostream>
using namespace std;

class SiddhiBank {
    private:
        string name;
        int accountNumber;
        string type;
        int balance;
    
    public:
        SiddhiBank(string name1, int accNum, string type1, int bal){
            name = name1;
            accountNumber = accNum;
            type = type1;
            balance = bal;
        }
        void depositMoney(int amount){
            balance = balance + amount;
        }
        void withdrawMoney(int amount){
            if (balance < amount){
                cout << "Not sufficient funds" << endl;
            } else {
                balance = balance - amount;
            }
        }
        void displayValues(){
            cout << "Name: " << name << " Balance: " << balance << endl;
        }
        
};

int main(){
    SiddhiBank omkar("omkar",150,"savings",2000);
    omkar.displayValues();
    
    omkar.depositMoney(40);
    omkar.displayValues();
    
    omkar.withdrawMoney(39);
    omkar.displayValues();
    
    cout << "Code Execution Successful" << endl;
    return 0;
}
