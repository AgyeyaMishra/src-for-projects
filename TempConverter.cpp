//Temperature Converter program - TempConverter
#include<iostream.h>
#include<conio.h>
#include<process.h>
int main()
{
 float tempC, tempF;
 int i, choice;
 while(1)
 {
  clrscr();
  cout<<"\t \t";
  cout<<"WELCOME TO TEMPERATURE CONVERTER MENU";
  cout<<"\n";
  for(i=0;i<80;i++)
  {
   cout<<"*";
  }
  cout<<"\t 1:-> Temperature in Celsius to Temperature in Fahrenheit \n \t 2:-> Temperature in Fahrenheit to Temperature in Celsius \n \t 3:-> Exit \n";
  for(i=0;i<80;i++)
  {
  cout<<"*";
  }
  cout<<"Please enter your choice : ";
  cin>>choice;
  switch(choice)
  {
   case 1:   {
	      cout<<"Enter the temperature in Celsius scale : ";
	      cin>>tempC;
	      tempF=(9*tempC)/5+32;
	      cout<<"Temperature in Fahrenheit scale is "<<tempF;
	      getch();
	     }
	     break;
   case 2:  {
	     cout<<"Enter the temperature in Fahrenheit scale : ";
	     cin>>tempF;
	     tempC=(5*(tempF-32))/9;
	     cout<<"Temperature in Celsius scale is "<<tempC;
	     getch();
	    }
	    break;
   case 3:  exit(0);
	    break;
   default: cout<<"Sorry! Wrong choice entered.";
	    getch();
  }
 }
}

  
