#include<iostream>
#include<windows.h>
using namespace std;
void showMenu()
{
  cout<<"*****************************************************************"<<endl;
  cout<<"====================  WELCOME TO QUIZ GAME ======================"<<endl;
  cout<<"******************************************************************"<<endl;
  cout<<"\n\n\n";
  cout<<"1) Start Quiz"<<endl;
  cout<<"2) Highest Score"<<endl;
  cout<<"3) Quit Game\n\n";	
}


int main()
{
	system("COLOR 72");
	string questions[8]=
	{
		"1)The programming language that has the ability to create new data types is called___",
        "2)Which of the following is the correct syntax to read the single character to console in the C++ language?",
        "3)Which of the following refers to characteristics of an array?",
        "4)Which type of memory is used by an Array in C++ programming language?",
        "5)In C++, can a for loop statement contain another for loop statement?",
        "6)How to access and edit data in data file handling using structures",
        "7)Can a Structure contain pointer to itself?",
        "8)How many Access specifier are there in C++?"

	};
	
	string options[8] = 
	{
		"1)Encapsulated   2)Reprehensible    3)Extensible    4)Overloaded",
        "1)Read ch()      2)Getline vh()     3)get(ch)       4)Scanf(ch)",
        "1)An array is a set of similar data items  2)An array is a set of distinct data item  3)An array can hold different types of datatypes  4)None of the above",                         
        "1)Contiguous     2)None-contiguous   3)Both A and B     4)Not mentioned",
        "1)No             2)Yes               3)Runtime error    4)None of the abo",
        "1)read()         2)write()           3)bothAandB         4)without read()",
        "1)Yes            2)No               3)Compilation Error  4)Runtime Error",
        "1)One            2)Two              3)Three             4)Four"


	};
	
	
	int ans[8]= {3,3,1,1,2,3,1,3};
	
	string PlayerName = "NIKHIL";
	int highestScore= 0 ;
	
	char ch='z';
	
	while(ch=='z')	
	{
        int currentResult=0;
        string currentPlayer;
		system("CLS");
		showMenu();
		int menu;
		cin>>menu;
		
		switch(menu)
		{
			
			case 1:
				system("color  72");
				system("CLS");
				  cout<<"***********************************************"<<endl;
			      cout<<"*************** Playing Quiz   ****************"<<endl;
			      cout<<"********************************************\n\n"<<endl;
			      cout<<"Enter your Name: ";
			
			    cin>>currentPlayer;
			    cout<<"\n\n";
			    
			    for(int i=0;i<7;i++)
			    {
			      
			    	int op;
			    	cout<<"\n\n"<<questions[i]<<endl;
			    	cout<<options[i]<<endl<<endl;
			    	cout<<"Enter Option: ";
			    	cin>>op;
			    	if(op==ans[i])
			    	{
			    		currentResult++;
			    		if(currentResult>highestScore)
			    		{
			    			highestScore=currentResult;
			    			PlayerName = currentPlayer;
						}
					}
				}
				cout<<"\n\n Your score: "<<currentResult<<endl;
			break;
			case 2:
				system("color 21");
				system("CLS");
				cout<<"***********************************************"<<endl;
			    cout<<"*************** Highest score******************"<<endl;
			    cout<<"***********************************************"<<endl;
			    cout<<"\n\n Highest Score is "<<highestScore<<"  By "<<PlayerName<<endl;
			break;    
			case 3:
			    cout<<"Thank you for using Quiz App!.... ";
			    exit(0);
			break;
			default:
			    cout<<"Wrong selection";			
		}
		cout<<"\n\nDo you want to continue press 'z' for yes & 'n' for No ?";
		cin>>ch;
	}
}
