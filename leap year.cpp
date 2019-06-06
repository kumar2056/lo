#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	if((a%400==0)||(a%4==0))
	{
		cout<<"yes";
	}
	else if(a%100==0)
	{
		cout<<"no";
	}
	else
	{
		cout<<"no";
	}
	// your code goes here
	return 0;
}
