#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <conio.h>
#include <windows.h>

using namespace std;
int k;
char a='0', b='0', c='0';
int main()
{
	if (k!=1) 
				{
					for (int i=1; i<=4; i++)
					{
						cout<<"           .------------."<<endl;
						cout<<"          / .----------. \\"<<endl;
						cout<<"         / /            \\ \\"<<endl;
						cout<<"         | |            | |"<<endl;
						cout<<"  _______| |____________| |_______"<<endl;
						cout<<".'       |_|            |_|        '."<<endl;
						cout<<"'._________________________________.' "<<endl;
						cout<<"|     .'_'.     .'_'.     .'_'.     | "<<endl;
						cout<<"'.__.'.' '.'._.'.' '.'._.'.' '.'. __' "<<endl;
						cout<<"'.__  | ";cout<<a;cout<<" |  _  | ";cout<<b;cout<<" |  _  | ";cout<<c;cout<<" |  '__' "<<endl;
						cout<<"|   '.'._.'.' '.'._.'.' '.'._.'.'   | "<<endl;
						cout<<"'.____'._.'_____'._.'_____'._.'____.' "<<endl;
						cout<<"'._________________________________.' "<<endl;
						if(i==1) a=getch();
						if(i==2) b=getch();
						if(i==3) c=getch();
						if(i==4) 
						{
						if(a=='2' && b=='5' && c=='2')
						{
							cout<<endl<<endl;	
						}
						else
						{
							cout<<endl<<"Nie poprawny szyfr";
							Sleep(900);
							i=0;
							a='0',b='0',c='0';
						}
					}
						system("cls");
					
					}
					
					cout<<"brawo";
					getch();
					
}					
	return(0);
}
