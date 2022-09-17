#include<iostream>
using namespace std;
int main()
{float total_km_of_driven,cost_of_petrol,avg_km_pet_L,parking_fee,tolls_fee,driving_cost_per_day,total_cost_of_driving; string username;
cout<<"username:";
cin>>username;
cout<<"Enter total killometers driven per day:";
cin>>total_km_of_driven;

cout<<"Enter cost per litter of petrol:";
cin>>avg_km_pet_L;

cout<<"Enter parking fee per day:";
cin>>parking_fee;

cout<<"Enter tolls per day:";
cin>>tolls_fee;

driving_cost_per_day=(total_km_of_driven/avg_km_pet_L)*cost_of_petrol;

total_cost_of_driving=driving_cost_per_day+parking_fee+tolls_fee;

cout<<"\n"<<username<<"cost per day of driving work:"<<"total cost of driving"<<endl;
}