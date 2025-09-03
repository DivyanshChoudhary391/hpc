// 3. Create a bank account class containing account number,name and current  balance. Define
// the following methods:

// a.getaccount number/setaccountnumber

// b.getaccountholder/setaccountholder

// c.getcurrentbalance

// d.deposit

// e.withdrawal

# include <iostream>
using namespace std;

class bank_account{
    private:
    int account_number;
    string name;
    int current_balance=1000;

    public:
    void get_account_number(){
        cout<<"enter the account number "<<endl;
        cin>>account_number;

    }
    void set_account_number(){
        cout<<"account number is "<<account_number<<endl;
    }
    void get_account_holder(){
        cout<<"enter the account holder name "<<endl;
        cin>>name;

    }
    void set_account_holder(){
        cout<<"name is"<<name<<endl;
    }
    void get_current_balance(){
        cout<<"current balance is"<<current_balance<<endl;
    }

    void deposit(int depo){
        current_balance=current_balance+depo;
        cout<<"current balance is "<<current_balance<<endl;
    }
    void withdrawal(int with){
        current_balance=current_balance-with;
        cout<<"current balance is"<<current_balance<<endl;
    }



};

int main(){
    bank_account account1;
    account1.get_account_number();
    account1.set_account_number();
    account1.get_account_holder();
    account1.set_account_holder();
    account1.get_current_balance();
    account1.deposit(500);
    account1.withdrawal(100);


    return 0;
}