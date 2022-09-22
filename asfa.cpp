#include <iostream>
#include <string>
using namespace std;

int main()
{
 string word = "PROGRAMMING";
  string mask = "-----------";
  string letters;
  char letter;
  
  while (word != mask) //loop while mask != PROGRAMMING
  {
  	cout<<"\n\n\t"; //space
  	
  	for(int i = 0;i<mask.length();i++)
  	cout << mask[i] <<"   "; //while i is less than the mask length show the letters of the mask
  	
  	cout<< "\tGuess a letter: "; //tell the user to enter a letter
  	cin>>letter; //get the letter
  	letter = toupper(letter); //toupper(letter) convert to uppercase so it match the word
  	
  	//check if the letter match the word if{yes add it} else if {ignore}
  	 for(int i=0;i < word.length();i++) 
  	   if(word[i] == letter) //while i is lless than the word length check if the letter entered match the i of the word if yes than add it to mask
  	     mask[i] = letter;
  }
  
  
  	//word is redisplayed 
  	cout<<"\n\n\t"; //space
  	for(int i=0;i < word.length();i++)
     cout << word[i] <<"   ";  	//while i is less than the word length display the letter i from "word"
  	
  	return 0; //done success = 0 errorss

  }

