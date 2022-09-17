
#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Input Marks:  ";
    cin>>mark;

    if (mark>100)
    {
        cout<<"Invalid Mark";
    }
     else if (mark<0)
    {
        cout<<"Invalid Mark";
    }
     else if (mark>=90)
    {
        cout<<"Your Grade is: A+"<<endl;
        cout<<"Your Grade Point is: 4" ;
    }
     else if(mark>=85)
    {
        cout<<"Your Grade is: A"<<endl;
        cout<<"Your Grade Point is: 3.75" ;
    }
     else if(mark>=80)
    {
        cout<<"Your Grade is:  B+"<<endl;
        cout<<"Your Grade Point is: 3.50";
    }
     else if(mark>=75)
    {
        cout<<"Your Grade is: B"<<endl;
        cout<<"Your Grade Point is: 3.25" ;
    }
     else if(mark>70)
    {
        cout<<"Your Grade is: C+"<<endl;
        cout<<"Your Grade Point is: 3.00" ;
    }
     else if(mark>=65)
    {
        cout<<"Your Grade is: C"<<endl;
        cout<<"Your Grade Point is: 2.75" ;
    }
      else if(mark>=60)
    {
        cout<<"Your Grade is: D+"<<endl;
        cout<<"Your Grade Point is: 2.50" ;
    }
      else if(mark>=50)
    {
        cout<<"Your Grade is: D"<<endl;
        cout<<"Your Grade Point is: 2.25" ;
    }

     else
    {
        cout<<"Your Grade is: F" <<endl ;
        cout<<"Your Grade Point is: 0.00";
        cout<<endl ;
        
   cout<<"best of luck for next time" <<endl;
 }
    return0;
