#include<iostream>
using namespace std;
class Mobile{
private:
string name;
string num;
float bal;
string os;
string ls;
public:
Mobile(string a,string b,float c,string d,string e){
name=a;
num=b;
bal=c;
os=d;
ls=e;
}
Mobile(){cout<<""<<endl;}
//Setter Method
void setname(string a){name=a;}
void setnumber(string b){num=b;}
void setbalance(float c){bal=c;}
void setosname(string d){os=d;}
void setls(string e){ls=e;}

//Getter Method
string getname(){return name;}
string getnumber(){return num;}
float getbalance(){return bal;}
string getosname(){return os;}
string getls(){return ls;}

//Calculating current balance
float Recharge(float Add){return bal=bal+Add;}
float timeduration(float td){cout<<"Input your talk time honestly in minute:"<<td<<endl;return bal=bal-(td*1);}
};

int main(){
//Object Creation
Mobile m;
m.setname("Realmenx2");
m.setnumber("01988871627");
m.setbalance(0);
m.setosname("Android Pie");
m.setls("Available");
m.Recharge(100);
m.timeduration(10);

//call all the getter value
cout<<"Name:"<<m.getname()<<endl;
cout<<"Mobile Number:"<<m.getnumber()<<endl;
cout<<"OS:"<<m.getosname()<<endl;
cout<<"Balance:"<<m.getbalance()<<endl;
cout<<"Lock system:"<<m.getls()<<endl;

return 0;
}
