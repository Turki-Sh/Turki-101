#include <iostream>
 using namespace std;
 int main()
 {
 	std::string Name;
 	double salary,sales,Commission;
 	cout<<"Hello to the Porsche site please write your name: ";
 	cin>> Name;
 	cout<<"Welcome: "<<Name;
 	cout<<"\nSo i heard you want to know what you will get this month ;)";
 	cout<<"\nPlease enter your salary: ";
 	cin>> salary;
 	cout<<"So How Much money did you make for us? you know we will kick you if you don't do will: ";
 	cin>>sales;
 	cout<<"Now depending on your job title your Commission may differ so enter your comission in : ";
 	cin>> Commission;
 	cout<<"You will get this month: ";
 	cout<< salary+sales*(Commission/100);
 	return 0;
 }
