#include <iostream>
#include <string>
using namespace std;

class Account{
private:    
    string name;
    int balance;

public:

void  set_Name(string n)
{
    name=n; 
}
void set_balance(int b)
{
    balance=b;
}
void deposit_Amount(int deposit)
{
    cout<<"Old balance: "<<balance<<endl;
    balance +=deposit;
    cout<<"New balance: "<<balance<<endl;

    return ;
}
void withdrawl_Amount(int amount)
{
   if(amount<=balance){
    balance =balance - amount;
    cout<<"Amount withdrawl successfully"<<endl;
    cout<<"New balance : "<<balance<<endl;
   }
   else{
    cout<<"\n\nWithdrawl Cancel.Balance insufficeint...\n\n"<<endl;
   }
   
}
string get_Name()
{
   return name;
}
int get_balance()
{
    return balance;
}

};

void createAccount(Account *a)
{
    string naam;
    int paisay;

    cout<<"Enter name :"<<endl;
    getline(cin,naam);
    a->set_Name(naam);

    cout<<"Enter amount: "<<endl;
    cin>>paisay;
    a->set_balance(paisay);
}
int main(){
    Account a;
    int option;
    int deposit;
    int withdraw;
  
  //function call
  createAccount(&a);

  while(1)
  {
    cout<<"Choose among : \n1.Display Balance\n2.Deposit Amount\n3.Withdraw Amount\n4.Exit"<<endl;
    cin>>option;

    if(option==1){
      cout<<"Current Balance: "<<a.get_balance()<<endl;
    }
    else if(option==2){
        cout<<"Enter amount to deposit: "<<endl;
        cin>>deposit;
        a.deposit_Amount(deposit);
    }
    else if(option==3){
        cout<<"Enter the amount you want to withdraw: "<<endl;
        cin>>withdraw;
        a.withdrawl_Amount(withdraw);
    }
    else if(option==4){
        cout<<"ThankYou for using our services."<<endl;
        break;
    }
    else{
        cout<<"Kindly Enter a valid option. "<<endl;
    }

  }


    return 0;
}