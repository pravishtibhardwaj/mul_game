#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;
void generate_question(int n1,int n2)
{
	cout<<"\nHOW MUCH IS  "<<n1<<" TIMES "<<n2<<" ??";
	
}
int main()
{   
    int level=1;
    
    cout<<"\n\t\t------WELCOME USER-------"<<endl;
    cout<<"\nThis is a simple multiplication quiz game containing 3 levels.\nYou need a minimum of 75 % score to access the next level!! "<<endl;
    cout<<"\n\t\tHOPE YOU'LL ENJOY :)\n\tHERE YOU GO WITH YOUR FIRST LEVEL..... !!"<<endl;
    zz:
     int no_of_wrongans=0,no_of_rightans=0;
	int i=0;
    int percentage=0;
   
     int n1,n2;
    
    xx:
    	 srand(time(0));
    	  int j=0;
    	if(level==1)
    	{
    	 n1=rand()%10;
	     n2=rand()%10;	
		}
    else
		if(level==2)
		{
			 n1=(rand()%(100-10+1))+1; 
	    	 n2=(rand()%(100-10+1))+1;
		}
    else
		if(level== 3)
		{
	     	n1=(rand()%(1000-100+1))+1;
	    	n2=(rand()%(1000-100+1))+1;
		}
  
    
    
	int correct_ans=0;
	correct_ans=n1*n2;
	int answer;
	
	generate_question(n1,n2);
    
yy:
    int res=(rand()%(4-1+1))+1;
	cout<<"\nenter your answer here  :  ";
	cin>>answer;
	if(answer==correct_ans)
	{
		switch(res)
		{
			case 1:
				cout<<"\nVERY GOOD!!"<<endl;
				break;
			case 2:
				cout<<"\nEXCELLENT !!"<<endl;
				break;
			case 3:
				cout<<"\nNICE WORK !!"<<endl;
				break;
			case 4:
				cout<<"\nKEEP UP THE GOOD WORK !!"<<endl;
				break;
		}
		
		while(i<9)
		{
		cout<<"\n\t-TRY THE NEXT QUESTION:\n";
	  i++;
        goto xx;
}
	}
	else
	{
		switch(res)
		{
			case 1:
				cout<<"NO PLEASE TRY AGAIN."<<endl;
				break;
			case 2:
				cout<<"WRONG! TRY ONCE MORE."<<endl;
				break;
		    case 3:
		    	cout<<"DONT GIVE UP."<<endl;
		    	break;
		    case 4:
		    	cout<<"NOPES ! KEEP TRYING."<<endl;
		    	break;
		}
		
        if(j<10)
        {j++;
		goto yy;
    }
      else{ no_of_wrongans++;
        cout<<"\nchance is over for this question\n try next one\n";
        goto xx;}
	}
   no_of_rightans=10-no_of_wrongans;
	cout<<"\nwrong ans = "<<no_of_wrongans<<endl;
    cout<<"correct ans = "<<no_of_rightans<<endl;
    
	percentage=(no_of_rightans*10);
	if(percentage<75)
	{
	cout<<"percentage = "<<percentage<<"\n\t\tPLEASE ASK YOUR TEACHER FOR EXTRA HELP!"<<endl;	
	cout<<"\tprogram reset for next student...\n";
     }
     else
     {
     cout<<"\npercentage = "<<percentage<<"\nCONGRATULATIONS ! YOU ARE READY FOR THE NEXT LEVEL."<<endl;
        if(level<3)
        {
        	level++;
        	goto zz;	
		}
		
		cout<<"\n\tEND OF QUIZ !\n";
		cout<<"\n\nprogram reset for next student..........................\n";
   
 }
 getch();
}
