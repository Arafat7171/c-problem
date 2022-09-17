#include<iostream>

#include<math.h>

using namespace std;

double areaC(double R ){
    double areaC= 3.1416*R*R;
return areaC;
}

 double areaS(double A ) 
 {
    double areaS = A*A;
  
  return areaS;
 }
 
 double areaT(double B, double H){
    
    double areaT = 0.50*B*H;

return areaT;
   }

double areaR(double W,double L){
    
    double areaR = W*L;
  
  return areaR;
  }
  int main ()

{ int n;
    cout<<"(1) Area of circle"<<endl;
    
 
   cout<<"(2) Area of rectangle"<<endl;
  
    cout<<"(3) Area of triangle"<<endl;
    
    cout<<"(4) Area of square"<<endl;
   
   cout<<endl;
   
  cout<<"Enter the what you want to "
        "calculate:- ";
    cin>>n;
     
       if (n==1)
       
         {
            double R;
             
                   cout<<"\nProgramme to "
        "calculate the area of circle....."<<endl;
            
   cout<<"\nEnter the  Radius:- ";
       cin>>R;
                cout<<"\nCalculating area of "
                      "circle........."<<endl;
             
                   cout<< "\nArea of circle="<<areaC(R)<<endl;
        }
       
         else if (n==2)
        {
            double W,L;
            
       cout<<"\nProgramme to calculate the  area of Rectangle....."<<endl;
               
          cout<<"\nEnter the Width:- ";  cin>>W;
         
               cout<<"\nEnter the Length:- ";
            
                    cin>>L;
              
                  cout<<"\nCalculating area of Rectangle........."<<endl;
           
                     cout<< "\nArea of rectangle= "<<areaR(W,L)<<endl;
                     
        }
      
          else if (n==3)
        {
           
             double B,H;
           
              cout<<"\nProgramme to calculate the area of Triangle....."<<endl;
              
                  cout<<"\nEnter the Base:- ";
                cin>>B;
                cout<<"\nEnter the Height:- ";
                cin>>F;
                cout<<"\nCalculating area of Triangle........."<<endl;
                cout<< "\nArea of Triangle= "<<areaT(B,H)<<endl;
        }

       else if (n==4)
        {
            double A;
              cout<<"\nProgramme to calculate the area of Square....."<<endl;
                cout<<"\nEnter the side:- ";
                cin>>A;
                cout<<"\nCalculating area of Square........."<<endl;
                cout<< "\nArea of Square= "<<areaS(A)<<endl;
        }
        else{
            cout <<"\nError.......................";
            cout<<"\nPlease enter between the given option(1-4)..... "<<endl;
        }



return 0;
}