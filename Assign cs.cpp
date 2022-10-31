#include <iostream>
#include <string>
using namespace std;
int main(){
	int row=4,col=5;
	string list[row][col] = {{"A+","A+","-","A","-"},{"A","B","A","F","B"},{"C","F","D+","C","-"},{"A","B+","DN","F","-"}};
	
	cout<<"This is the list for the students grades"<<endl;
	
	cout<<"               CS211 |CS221|  CS311| Math301|  CIS321";
	for(int i=0;i<row;i++)
	{
	cout<<"\nStudent#"<<i+1<<"\t";
	for(int j=0;j<col;j++)
	{cout<<list[i][j]<<"\t";}
	}
	
	int choice;
	
	cout<<"\nEnter the student you want to know his/her registration eligibility: ";
	cin>>choice;
	choice-=1;
	
	cout<<"Student#"<< choice+1 << " can register:\t";
	for(int i=0;i<col;i++)
	{
	
	if(i==0)
	{
	if(list[choice][i]=="DN" || list[choice][i]=="F" || list[choice][i]=="-")
	{cout<<"CS211 \t";}
	}
	else if(i==1)
	{
	if(list[choice][i]=="DN" || list[choice][i]=="F" || list[choice][i]=="-")
	{cout<<"CS221 \t";}
    }
	else if(i==2)
	{
	if(list[choice][i]=="DN" || list[choice][i]=="F" || list[choice][i]=="-")
	{cout<<"CS311 \t";}
	}
	else if(i==3)
	{
	if(list[choice][i]=="DN" || list[choice][i]=="F" || list[choice][i]=="-")
	{cout<<"Math301 \t";}
}
	else if(i==4)
	{
	if(list[choice][i]=="DN" || list[choice][i]=="F" || list[choice][i]=="-")
	{cout<<"CIS321 \t";}
}
	}
	
	cout<<"\nEnter the student you want to know his registered credit: ";
	cin>>choice;
	choice-=1;
	
	int Creditr=0;
	for(int i=0;i<col;i++)
	{
	
	if(list[choice][i]=="A+" || list[choice][i]=="A" || list[choice][i]=="B+" || list[choice][i]=="B" || list[choice][i]=="C+" || list[choice][i]=="C" || list[choice][i]=="D+" || list[choice][i]=="D" ||  list[choice][i]=="F"  || list[choice][i]=="DN")
	{Creditr+=3;}

	}
	cout<<"He registered for "<<Creditr<<" Credit"<<endl;
	
	cout<<"\nEnter the student you want to know his registered credit: ";
	cin>>choice;
	choice-=1;
	
	int Credit=0;
	for(int i=0;i<col;i++)
	{
	
	if(list[choice][i]=="A+" || list[choice][i]=="A" || list[choice][i]=="B+" || list[choice][i]=="B" || list[choice][i]=="C+" || list[choice][i]=="C" || list[choice][i]=="D+" || list[choice][i]=="D")
	{Credit+=3;}

	}
	cout<<"He finished with a "<<Credit<<" Credit"<<endl;
	
	int course1A=0,course2A=0,course3A=0,course4A=0,course5A=0;
	int course1P=0,course2P=0,course3P=0,course4P=0,course5P=0;
	int course1F=0,course2F=0,course3F=0,course4F=0,course5F=0;
	int course1R=0,course2R=0,course3R=0,course4R=0,course5R=0;

for(int i=0;i<row;i++)
{
		
for(int j=0;j<col;j++)
{
		
	if(j==0)
	{
	if(list[i][j] == "+A" || list[i][j] == "A")
	{course1A+=1;}
	
	if(list[i][j] == "+A" || list[i][j] == "A" || list[i][j] == "B+" || list[i][j] == "B" || list[i][j] == "C+" || list[i][j] == "C" || list[i][j] == "D+" ||  list[i][j] == "D")
	{course1P+=1;}
	
	if(list[i][j] == "F")
	{course1F+=1;}
	
	if(list[i][j] == "-")
	{course1R+=1;}
	
	}
	
	if(j==1)
	{
		
	if(list[i][j] == "+A" || list[i][j] == "A")
	{course2A+=1;}
	
	if(list[i][j] == "+A" || list[i][j] == "A" || list[i][j] == "B+" || list[i][j] == "B" || list[i][j] == "C+" || list[i][j] == "C" || list[i][j] == "D+" ||  list[i][j] == "D")
	{course2P+=1;}
	
	if(list[i][j] == "F")
	{course2F+=1;}
	
	if(list[i][j] == "-")
	{course2R+=1;}
	
	
	}
	
	if(j==2)
	{
	if(list[i][j] == "+A" || list[i][j] == "A")
	{course3A+=1;}
	
	if(list[i][j] == "+A" || list[i][j] == "A" || list[i][j] == "B+" || list[i][j] == "B" || list[i][j] == "C+" || list[i][j] == "C" || list[i][j] == "D+" ||  list[i][j] == "D")
	{course3P+=1;}
	
	if(list[i][j] == "F")
	{course3F+=1;}
	
	if(list[i][j] == "-")
	{course3R+=1;}
	
	
	}
	
	if(j==3)
	{
	if(list[i][j] == "+A" || list[i][j] == "A")
	{course4A+=1;}
	
	if(list[i][j] == "+A" || list[i][j] == "A" || list[i][j] == "B+" || list[i][j] == "B" || list[i][j] == "C+" || list[i][j] == "C" || list[i][j] == "D+" ||  list[i][j] == "D")
	{course4P+=1;}
	
	if(list[i][j] == "F")
	{course4F+=1;}
	
	if(list[i][j] == "-")
	{course4R+=1;}
	
	}
	
	if(j==4)
	{
	if(list[i][j] == "+A" || list[i][j] == "A")
	{course5A+=1;}
	
	if(list[i][j] == "+A" || list[i][j] == "A" || list[i][j] == "B+" || list[i][j] == "B" || list[i][j] == "C+" || list[i][j] == "C" || list[i][j] == "D+" ||  list[i][j] == "D")
	{course5P+=1;}
	
	if(list[i][j] == "F")
	{course5F+=1;}
	
	if(list[i][j] == "-")
	{course5R+=1;}
	
	
	}

	
	
	
	
	
}
		
}
   
  
    
	cout<<"\nThe course with most A+ or A: ";
	if(course1A > course2A && course1A > course3A && course1A > course4A && course1A > course5A)
	{cout<<"CS211";}
	else if(course2A > course1A && course2A > course3A && course2A > course4A && course2A > course5A)
	{cout<<"CS221";}
	else if(course3A > course2A && course3A > course1A && course3A > course4A && course3A > course5A)
	{cout<<"CS311";}
	else if(course4A > course2A && course4A > course3A && course4A > course1A && course4A > course5A)
	{cout<<"Math301";}
	else
	{cout<<"CIS321";}
	
	
		
	

   
  
    
	cout<<"\nThe course with most Pass: ";
	if(course1P > course2P && course1P > course3P && course1P > course4P && course1P > course5P)
	{cout<<"CS211";}
	else if(course2P > course1P && course2P > course3P && course2P > course4P && course2P > course5P)
	{cout<<"CS221";}
	else if(course3P > course2P && course3P > course1P && course3P > course4P && course3P > course5P)
	{cout<<"CS311";}
	else if(course4P > course2P && course4P > course3P && course4P > course1P && course4P > course5P)
	{cout<<"Math301";}
	else
	{cout<<"CIS321";}
	
	cout<<"\nThe course with most Fail: ";
	if(course1F > course2F && course1F > course3F && course1F > course4F && course1F > course5F)
	{cout<<"CS211";}
	else if(course2F > course1F && course2F > course3F && course2F > course4F && course2F > course5F)
	{cout<<"CS221";}
	else if(course3F > course2F && course3F > course1F && course3F > course4F && course3F > course5F)
	{cout<<"CS311";}
	else if(course4F > course2F && course4F > course3F && course4F > course1F && course4F > course5F)
	{cout<<"Math301";}
	else
	{cout<<"CIS321";}
	
	 cout<<"\nThe course with most NON-Registered: ";
	if(course1R > course2R && course1R > course3R && course1R > course4R && course1R > course5R)
	{cout<<"CS211";}
	else if(course2R > course1R && course2R > course3R && course2R > course4R && course2R > course5R)
	{cout<<"CS221";}
	else if(course3R > course2R && course3R > course1R && course3R > course4R && course3R > course5R)
	{cout<<"CS311";}
	else if(course4R > course2R && course4R > course3R && course4R > course1R && course4R > course5R)
	{cout<<"Math301";}
	else
	{cout<<"CIS321";}
	
	int students;
	cout<<"\nEntert the student you want to change grade: ";
	cin>>students;
	students-=1;
	
	int studentcr;
	cout<<"Entert the course you want to change grade CS211=1 |CS221=2|  CS311=3| Math301=4|  CIS321=5: ";
	cin>>studentcr;
	studentcr-=1;
	
	string grades;
	cout<<"Entert the new grade: ";
	cin>>grades;
	
	list[students][studentcr] = grades;
	
	
	
	cout<<"               CS211 |CS221|  CS311| Math301|  CIS321";
	for(int i=0;i<row;i++)
	{
	cout<<"\nStudent#"<<i+1<<"\t";
	for(int j=0;j<col;j++)
	{cout<<list[i][j]<<"\t";}
	}
   
   
   

	
	
	
	
	return 0;
}
