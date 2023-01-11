#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void playGround(char menu[]); //print the playground 
void fill(char menu[]); //fill the playground

int round=0;

int main()
{
	int row=3,col=3,x=0,y=0;
	char ground[9];
	bool in=false;
	bool xWin = false,oWin = false;
	
	cout<<"                                               TIC TAC TOE GAME "<<endl;
	
	fill(ground);
	playGround(ground);
	while(round<9 || xWin == false || oWin == false)
	{
	
	
	
	
	
	// Check if one won??
	if( (ground[0] == 'X' && ground[3]  == 'X' && ground[6]  == 'X' ) || (ground[1] == 'X' && ground[4]  == 'X' && ground[7]  == 'X' )  || (ground[2] == 'X' && ground[5]  == 'X' && ground[8]  == 'X' ))
	{xWin = true; break;}
	if( (ground[0] == 'O' && ground[3]  == 'O' && ground[6]  == 'O' ) || (ground[1] == 'O' && ground[4]  == 'O' && ground[7]  == 'O' )  || (ground[2] == 'O' && ground[5]  == 'O' && ground[8]  == 'O' ))
	{oWin = true; break;}
	
	
	
	while(round%2 == 0) //X turn
	{
		in=false;
		cout<<"Player X turn choose (1-9): "; //recive which place you want to place
		cin>>x; //1
		x--; //2
	
		if(ground[x] == 'X' || ground[x] == 'O')
		{in=true;}
			
		if(in == false)
		{
		 ground[x] = 'X';
		 in=false;
		 round++;
		 	
		}
	
	}
	
	// Check if one won??
	if( (ground[0] == 'X' && ground[3]  == 'X' && ground[6]  == 'X' ) || (ground[1] == 'X' && ground[4]  == 'X' && ground[7]  == 'X' )  || (ground[2] == 'X' && ground[5]  == 'X' && ground[8]  == 'X' ))
	{xWin = true; break;}
	if( (ground[0] == 'O' && ground[3]  == 'O' && ground[6]  == 'O' ) || (ground[1] == 'O' && ground[4]  == 'O' && ground[7]  == 'O' )  || (ground[2] == 'O' && ground[5]  == 'O' && ground[8]  == 'O' ))
	{oWin = true; break;}
	
	cout<<"___________________________________________________________________________________________";
	playGround(ground);

	while(round%2 != 0) //O turn
	{
		in=false;
		cout<<"Player O turn (1-9): "; //recive which place you want to place
		cin>>x; //1
		x--; //2
	
		if(ground[x] == 'X' || ground[x] == 'O')
		{in=true;}
	
		if(!in)
		{
		 ground[x] = 'O'; 
	     in=false; 
		 round++;
		}
		
	} 
	
	
	
		cout<<"___________________________________________________________________________________________";
	playGround(ground);
	
	
	
	
	// Check if one won??
	if( (ground[0] == 'X' && ground[3]  == 'X' && ground[6]  == 'X' ) || (ground[1] == 'X' && ground[4]  == 'X' && ground[7]  == 'X' )  || (ground[2] == 'X' && ground[5]  == 'X' && ground[8]  == 'X' ))
	{xWin = true; break;}
	if( (ground[0] == 'O' && ground[3]  == 'O' && ground[6]  == 'O' ) || (ground[1] == 'O' && ground[4]  == 'O' && ground[7]  == 'O' )  || (ground[2] == 'O' && ground[5]  == 'O' && ground[8]  == 'O' ))
	{oWin = true; break;}
	
	
	}
	
	
	if(xWin)
	{cout<<"\nX won!!"<<endl; }
	else if(oWin)
	{cout<<"\nO won!!"<<endl;}
	else
	{cout<<"\nTie -_- "<<endl;}





 return 0;
}


//Function [list]

void playGround(char menu[])
{
	int rows=3,cols=3;
	int xx=0;
	
	cout<<"\n\n";
	cout<<"                 X & O PLAYGROUND"<<" Round ("<<round<<")"<<endl;
	for(int i=0;i<rows;i++)
	{
		if(i>=1) 
		{cout<<"\n                  _____________"<<endl;}
		else                      //-------------
		{cout<<"\n";}
		cout<<"                   ";
		
		for(int j=0;j<cols;j++)
		{
		cout<<menu[xx]<<" | ";
		xx++;
		}
	}
	
	cout<<"\n\n";
}


void fill(char menu[])
{
	int count=1; 
	for(int i=0;i<9;i++)
	{
		menu[i]= 48+count;
		count++;
	}	
	
}
