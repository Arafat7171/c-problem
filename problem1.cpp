#include<iostream>
using namespace std;
class Account{
private:
  string Acnam="nO NAME";
  int Acno=0;
  float Balance=0.0;
 string Actype="Type not set";
public:

     void setAcnam(string a){Acnam=a;}
     void setAcno(int b){Acno=b;}
     void setBalance(float c){Balance=c;}
     void setActype(string d){Actype=d;}
     string getAcname(){return Acnam;}
     int getAcno(){return Acno;}
     float getBalance(){return Balance;}
     string getActype(){return Actype;}
      void deposit(float amount){


            Balance=Balance+amount;
            cout<<"Deposited Amount:"<<endl;
            cout<<Balance<<endl;

      }
      float withdraw(float amount){

         Balance=Balance-amount;
          cout<<"Withdrawed Amount:"<<endl;
            cout<<Balance<<endl;
         ;}
        Account Transfer(float amount, Account a  ){
             a.deposit(amount);
             a.withdraw(amount);
             return a;

         }
         Account(){
         cout<<""<<endl;
         }
         Account(string Acnam, int Acno,float Balance,string Actype){
         Acnam=Acnam;
         Acno=Acno;
         Balance=Balance;
         Actype=Actype;
         }
         ~Account(){
         cout<<"Account destroyed"<<endl;
         }
         void ShowAccount(){
         cout<<"Name:"<<"No:"<<"Balance:"<<"Type:"<<endl;
         cout<<Acnam <<" "<<" "<<Acno<<" "<<Balance<<" "<<Actype<<" "<<endl;

}

  };
  int main(){
      Account a1,a2;
      a2.ShowAccount();
      a1.setAcnam("ABC");
      a1.setAcno(200);
      a1.setBalance(2000.00);
      a1.setActype("Savings");
       a1.ShowAccount();

       a2.setAcnam("ABCD");
      a2.setAcno(201);
      a2.setBalance(3000.00);
      a2.setActype("Non Savings");
      a2.ShowAccount();



      a1.deposit(1000);
      a1.withdraw(222);
      a2.deposit(155);
      a2.withdraw(12);
      a1.Transfer(2000,a2);
      a2.Transfer(10,a1);


  }