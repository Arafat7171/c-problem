#include<iostream>
 using namespace std;
 int main()
 { float product1,product2,product3,product4,product5;
 int product1_q1,product2_q2,product3_q3,product4_q4,product5_q5;
 
 double total_retail_value;
 
 product1=200.75;
    product2=345.50;
       product3=775.75;
          product4=400.35;
             product5=1200.75;
             
cout<<"Enter the quantity sold of product1:";
cin>>product1_q1;
cout<<"Enter the quantity sold of product2:";
cin>>product2_q2;
cout<<"Enter the quantity sold of product3:";
cin>>product3_q3;
cout<<"Enter the quantity sold of product4:";
cin>>product4_q4;
cout<<"Enter the quantity sold of product5:";
cin>>product5_q5;

total_retail_value=(product1*product1_q1)
+(product2*product2_q2)+(product3*product3_q3)+(product4*product4_q4)+(product5*product5_q5);

cout<<"total retail value of products sold:"<<total_retail_value<<endl;

 }