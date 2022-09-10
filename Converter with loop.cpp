#include <iostream>
 using namespace std;
 int main()
 {
int U=0,G=0,B=0;
char Type;
double Amount;
cout<<"\nWelocme to Moon's currency converter\n";    
for (int i = 1; i <= 3; i=i+1) {

cout<<"\nAmount: ";
cin>>Amount;

cout<<"(We have Us=U Gb=G Bh=B)";
cout<<"\nFrom: ";
cin>>Type;


if(Type=='U'){

cout<<"Gb= "<<Amount*0.87<<" GiB"; 
cout<<"\nBh= "<<Amount*0.37<<" BD";break;
}


else if(Type=='G'){
cout<<"Us= "<<Amount*1.14<<" $";
cout<<"\nBh= "<<Amount*0.43<<" BD";break;}

else if(Type=='B'){
cout<<"Gb= "<<Amount/82.29<<" GiB";
cout<<"\nUs= "<<Amount*2.65<<" $";break;
}

else{
cout<<"Nope Nope Nope! you need to use (We have Us=U Gb=G Bh=B) ";
}




    }
    
cout<<"\nThanks for using Moon's Converter.";


return 0;
 }
