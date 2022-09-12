#include <iostream>
using namespace std;
int main()
{
 double x,y;
 char operation;
 int con=1;
 
 while(con == 1)
 {
 	cout<<"Welcome to The best cal moon cal!!\n";
 	cout<<"our operations are (x+y,x-y,x*y,x/y)\n";
 	cout<<"Please enter your x: ";
 	cin>>x;
 	cout<<"Please enter your y: ";
 	cin>>y;
 	
 	cout<<"What operation you want to do: ";
 	cin>>operation;
 	
 	cout<<"------------------------------";
 	
 	if(operation=='+')
 	{cout<<"\nx+y: "<<x+y;
	  	cout<<"\n------------------------------";}
 	
	 else if(operation=='-')
	 {cout<<"\nx-y: "<<x-y;
	  	cout<<"\n------------------------------";}
	 
	 else if(operation=='*')
	 {cout<<"\nx*y: "<<x*y;
	  	cout<<"\n------------------------------";}
	 
	else if(operation=='/')
	{cout<<"\nx/y: "<<x/y;
	 	cout<<"\n------------------------------";} 
	
	 else{cout<<"\nError";}
	 
	 cout<<"\nDo you want to go on? 1 for yes 0 for no: ";
	 cin>>con;
	 
 }
 cout<<"Thanks for using moon's cal' app.";
	return 0;
}
