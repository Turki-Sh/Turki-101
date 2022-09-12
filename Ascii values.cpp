#include <iostream>
using namespace std;
int main()
{
 char x;
 
 cout<<"Enter your x: ";
 cin>>x;
 
 
 if (x>=65 && x<= 90)
 {cout<<"Character is a Large letter";}
 
 else if (x>=97 && x<= 122)
 {cout<<"Character is a Small letter";}
 
 else if (x>= 48 && x<= 57)
 {cout<<"Character is a Number";}
 
 else if (x>=0 || x<=47 || x>=58 || x<=64 || x>=91 || x<=96 || x>=123 || x<=127)
 {cout<<"character is a special symbol";}
 
 else{cout<<"Error";}
 
	return 0;
}
