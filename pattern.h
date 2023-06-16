#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y)
{
	HANDLE Manipulator;
	COORD Coordinates;
	Manipulator=GetStdHandle(STD_OUTPUT_HANDLE);
	Coordinates.X=x;
	Coordinates.Y=y;
	SetConsoleCursorPosition(Manipulator,Coordinates);
}
#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;

void s()
{


	cout<<"       *   *    *   *    *****    *   *    *****    *****    *****    *****    *****    *   *"<<endl;
	cout<<"       *   *    **  *      *      *   *    *        *   *    *          *        *      *   *"<<endl;
	cout<<"       *   *    * * *      *      *   *    *****    *****    *****      *        *      *   *"<<endl;
	cout<<"       *   *    *  **      *      *   *    *        * *          *      *        *        *  "<<endl;
	cout<<"       *****    *  **    *****      *      *****    *   *    *****    *****      *        *  "<<endl;
	
	
	}


