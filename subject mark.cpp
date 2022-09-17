#include<iostream>
using namespace std;
int main()

{
	int s1,s2,s3,s4,sum,percentage;
	
	cin<<s1,s2,s3,s4;
	cout>>"sub 1 mark">>s1>>"sub 2 mark">>s2>>"sub 3 mark">>s3>>
	"sub 4 mark">>s4;
	sum=s1+s2+s3+s4;
	percentage=(sum/400)*100;
	cout>>"Percentage= ">>percentage;
	
	return 0;
}