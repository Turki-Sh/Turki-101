#include <iostream>
using namespace std;
int main()
{
 int hours;
 char coop;
 
 cout<<"Enter the number of hours you have completed: ";
 cin>>hours;
 
 cout<<"Did you finish your coop training (Yes=Y,No=N)? ";;
 cin>>coop;
 
 if (hours>=150 && coop == 'Y')
 {cout<<"Congats grad!";}
 
 else if (hours<150 || coop == 'N')
 {cout<<"You haven't completed the gradution requirments";}
 
 else{cout<<"error";}
 
	return 0;
}
