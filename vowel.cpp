#include<iostream>
 
using namespace std;
 
 
int main () {
 
cout<<"Enter a string "<<endl;
string test;

getline(cin,test);
 
for(int i = 0; i < test.size(); i++){
  if(test[i] == 'a' || test[i] == 'e' || test[i] == 'i' ||
   test[i] == 'o' || test[i] == 'u' || test[i] == 'A'||
  
    test[i] == 'E'|| test[i] == 'I'|| test[i] == 'O'||
  
   test[i] == 'U )
  
  cout<<test[i;
 
}
return 0;
}