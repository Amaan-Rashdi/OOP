#include<iostream>
//#include<windows.h>
#include<fstream>
#include<conio.h>
#include<string>
#include<string.h>
#include<time.h>
#include<exception>
//#include"pattern.h"

using namespace std;

class login
{
	
	protected:
	char name[20];
	char pass[20];
	int check=0,check1=0;
	public:
		void print()
		{
			cout<<"\033[1;34m";
//		s();
		cout<<"\033[1;34m";
		}
	bool password()
	{
		int k,j=0,count=60,i=2;
		char a;
	   // gotoxy(50,20);
	    cout<<"USERNAME: ";
	    cin>>name;
	   // gotoxy(50,21);
	    cout<<"PASSWORD: ";	
	   // gotoxy(50,21);
	    memset(pass,0,20);
	    for(k=0,j=0;a!=13;i++)
	{
	 //  gotoxy(count,21);
		a=getch();
		 if(a!=8 && a!=13)
		 {
		pass[j]=a;
		cout<<"*";
		count++;
		j++;
		}
		 else if(a==8&&count!=60)
		{	pass[j-1]=0; //memory
		count--;  
	//	gotoxy(count,21);
			cout<<" ";//on screen
			j--;
	
}
    }
    ifstream obj;
    obj.open("password.txt");
    	int lm=2;
		 check=0;
		 check1=0;
	while(!obj.eof())
	{
		int x,z;
		string a;
		getline(obj,a);
		x=a.size();
		char *ptr=new char[x];
		
		for(z=0;z<x;z++)
		{
			ptr[z]=a[z];
		}
		ptr[z]='\0';
		
		if(lm%2==0&&strcmp(ptr,name)==0)
		{
			check=1;
		}
		else if(lm%2!=0 && strcmp(ptr,pass)==0)
		{
			check1=1;
		}
		if(lm==3)
		{
			if(check==1&&check1==1)
			{
				break;
			}
			else
			{
				check=0;
				check1=0;
			    lm=1;	
			}
			
		}
		lm++;
		
	}
	obj.close();
	
		if(check==1&&check1==1)
		{
	//		gotoxy(40,23);
			cout<<"CORRECT PASSWORD !"<<endl;
			system("cls");
			char bar=219;char barr=177;
    cout<<"\n\n\n\t\t\t\t\tLOADING...PLEASE WAIT\n\n\n\t\t\t\t\t";
    int percent=0;
    for(int i=1;i<=25;i++)
    {

        cout<<barr;

    }
    //gotoxy(67,6);
    cout<<percent<<" %";

    //gotoxy(40,6);
int cursor=41;
    for(int i=1;i<=25;i++)
    {

        cout<<bar;
        if(i>18&&i!=25)
        {
      //     gotoxy(67,6);
        percent+=1;
        cout<<percent<<" %";



        }
        else if(i%2==0&&i<=18)
        {
        //gotoxy(67,6);
        percent+=10;
        cout<<percent<<" %";

        }
        else if(i==25)
        {
          //  gotoxy(67,6);
        percent=100;
        cout<<percent<<" %";
        }
        //gotoxy(cursor,6);
        cursor++;
    delay(50);
    }
			return 1;
		}
		else
		{
			//gotoxy(40,23);
			cout<<"INCORRECT PASSWORD OR USERNAME !"<<endl;
			cout<<"\n\n\t\t\tEnter any key to continue ";
			getch();
			system("cls");
			//obj.seekg(ios::beg);
			password();
	    }
	
}
virtual void delay(unsigned int mseconds)=0; //abstract class
string admin_check()
{
	return name;
}
string pass_check()
{
return pass; }
};
