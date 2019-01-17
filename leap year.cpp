#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	if((a%400==0)||(a%4==0))
	{
		cout<<"leap year"<<a;
	}
	else if(a%100==0)
	{
		cout<<"not a leap year"<<a;
	}
	else
	{
		cout<<"not a leap year"<<a;
	}
	// your code goes here
	return 0;
}
