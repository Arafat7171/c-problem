#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int a, i, x, y, c;
         cout<<"Number of Students: ";
          cin>>a;
           cout<<"Enter marks of them: "<<endl;
            int number[a];
      for ( i=0; i<a; i=i+1)
    {
        cin>>number[i];
    }
    if (number[0]<number[1])
    x=number[0], y=number[1];

    else x=number[1], y=number[0];

    for ( i=2; i<a; i=i+1)
    {
        if (number[i]<a)
            y=x, x=number[i];
                   else if (number[i]<y)
                   x=number[i];

    }
    cout<<"Lowest Mark is: "<<x<<endl;
    cout<<"Second Lowest Mark is: "<<y;
    return 0;

}