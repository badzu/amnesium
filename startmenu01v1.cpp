#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
#include<ctype.h>
using namespace std;

	char wybor;
	

	int main()

	{
			
		cout << "  |              __  __   _   _   ______    _____   _____   _    _   __  __   |" << endl;
		cout << "  |      /\\     |  \\/  | | \\ | | |  ____|  / ____| |_   _| | |  | | |  \\/  |  |" << endl;
		cout << "  |     /  \\    | \\  / | |  \\| | | |__    | (___     | |   | |  | | | \\  / |  |" << endl;
		cout << "  |    / /\\ \\   | |\\/| | | . ` | |  __|    \\___ \\    | |   | |  | | | |\\/| |  |" << endl;
		cout << "  |   / ____ \\  | |  | | | |\\  | | |____   ____) |  _| |_  | |__| | | |  | |  |" << endl;
		cout << "  |  /_/    \\_\\ |_|  |_| |_| \\_| |______| |_____/  |_____|  \\____/  |_|  |_|  |" << endl;
		cout << "  |___________________________________________________________________________|"<<endl;
		cout << "   \\                                                                         /"<<endl;
		cout << "    \\             Bartlomiej Ciolkosz All Rights Reserverd 2017.            /"<<endl;
		cout << "     \\_____________________________________________________________________/"<<endl<<endl<<endl;
		cout << "                     |   Nacisnij S, aby zaczac gre   |"<<endl;
		cout << "                     |   Nacisnij L, aby wczytac gre  |"<<endl;
		cout << "                     |   Nacisnij Q, aby wyjsc z gry  |"<<endl;
		
		
		wybor = getch();
			
		switch (wybor)
		{
			case 's':
				cout << " # Tutaj ma sie zaczynac gra";
			break;
				case 'l':
					cout << "# proste menu wczytywania gry";
			break;	
					case 'q':
						exit(0);
			break;
			
							getchar();
		    default: cout<< "nie ma takiej opcji";
		}


		return (0);
	}
