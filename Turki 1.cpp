#include <iostream>
using namespace std;
int main()
{
	double x,y,z;
	
	cout<<"Enter x: ";
	cin>>x;
	cout<<"\nEnter y: ";
	cin>>y;
	cout<<"\nEnter z: ";
	cin>>z;
	if (x>y&&z)
	{
		cout<<"X is bigger.";
	}
	else if(y>x&&z)
	{
		cout<<"Y is bigger.";
	}
	else
	{
		cout<<"Z is bigger.";
	}
	return 0;
}
