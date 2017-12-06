#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <conio.h>
#include <windows.h>

using namespace std;
int k, yup1, yup2, yup3, yup4;
char z1='0', z2, z3, z4, kolo;
int main()
{
	if (k!=1) 
				{
					for (int i=1; i<=5; i++)
					{
						cout<<"     ---"<<endl;
						cout<<"    | ";cout<<z1;cout<<" |"<<endl;
						cout<<" ---     ---"<<endl;
						cout<<"|";cout<<z2;cout<<"         ";cout<<z4;cout<<"|"<<endl;
						cout<<" ---     ---"<<endl;
						cout<<"    | ";cout<<z3;cout<<" |"<<endl;
						cout<<"     ---"<<endl;
							
						if(i==1)
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';yup1=1;break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						}
						if(i==2) 
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';yup2=1;break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						}
						if(i==3)
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';yup3=1;break;
						}
						} 
						if(i==4)
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';yup4=1;break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						} 
						if(i==4) 
						{
						if(yup1==1 && yup2==1 && yup3==1 && yup4==1)
						{
							cout<<endl<<endl;	
						}
						else
						{
							cout<<endl<<"Zle";
							Sleep(900);
							i=0;
							yup1=0,yup2=0,yup3=0;
							z1='0', z2='\0', z3='\0', z4='\0';
						}
						}
						system("cls");
					
					}
					
					cout<<"Brawo";
					getch();
					
}					
	return(0);
}
