#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

	int skey, rkey, oknf;
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
		cout << "                     ----------------------------------"<<endl;


		wybor = getch();

		switch (wybor)
		{
			case 's':
			system("cls");
			goto L1;
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

    L1:

        Sleep (100); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		Sleep (100); cout << "+     _     __  __   _  _   ___   ___   ___   _   _   __  __      /------------+" << endl;
		Sleep (100); cout << "+    /_\\   |  \\/  | | \\| | | __| / __| |_ _| | | | | |  \\/  |    /-------------+" << endl;
		Sleep (100); cout << "+   / _ \\  | |\\/| | | .` | | _|  \\__ \\  | |  | |_| | | |\\/| |   /--------------+" << endl;
		Sleep (100); cout << "+  /_/ \\_\\ |_|  |_| |_|\\_| |___| |___/ |___|  \\___/  |_|  |_|  /---------------+" << endl;
		Sleep (100); cout << "+                                                             /----------------+" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+         ___ _  _   _   ___ _____ ___ ___      _           /------------------+" << endl;
		Sleep (100); cout << "+        / __| || | /_\\ | _ \\_   _| __| _ \\    / |         /-------------------+" << endl;
		Sleep (100); cout << "+       | (__| __ |/ _ \\|  _/ | | | _||   /    | |        /--------------------+" << endl;
		Sleep (100); cout << "+        \\___|_||_/_/ \\_\\_|   |_| |___|_|_\\    |_|       /---------------------+" << endl;
		Sleep (100); cout << "+                                                       /----------------------+" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+                           __.--|~|--.__                               ,,;/;  +" << endl;
		Sleep (100); cout << "+                         /~     | |    ;~\\                          ,;;;/;;'  +" << endl;
		Sleep (100); cout << "+                        /|      | |    ;~ \\                      ,;;;;/;;;'   +" << endl;
		Sleep (100); cout << "+                       |/|      \\_/   ;;;| |                    ,;;;;/;;;;'   +" << endl;
		Sleep (100); cout << "+                       |/ \\          ;;;/  )                 ,;;;;/;;;;;'     +" << endl;
		Sleep (100); cout << "+                   ___ | ______     ;_____ |___....__      ,;;;;/;;;;;'       +"<< endl;
		Sleep (100); cout << "+              ___.-~ \\(| \\  \\.\\ \\__/ /./ /:|)~   ~   \\   ,;;;;/;;;;;'         +" << endl;
		Sleep (100); cout << "+         /~~~    ~\\    |  ~-.     |   .-~: |//  _.-~~--,;;;;/;;;;;'           +" << endl;
		Sleep (100); cout << "+        (.-~___     \\.'|    | /-.__.-\\|::::| //~     ,;;;;/;;;;;'             +" << endl;
		Sleep (100); cout << "+        /      ~~--._ \\|   /          `\\:: |/      ,;;;;/;;;;;'               +" << endl;
		Sleep (100); cout << "+     .-|             ~~|   |  /V----V\\ |:  |     ,;;;;/;;;;;' \\               +" << endl;
		Sleep (100); cout << "+    /                   \\  |  ~`^~~^'~ |  /    ,;;;;/;;;;;'    ;              +" << endl;
		Sleep (100); cout << "+   (        \\             \\|`\\._____./'|/    ,;;;;/;;;;;'      '\\             +" << endl;
		Sleep (100); cout << "+  / \\        \\                             ,;;;;/;;;;;'     /    |            +" << endl;
		Sleep (100); cout << "+ |            |                          ,;;;;/;;;;;'      |     |            +" << endl;
		Sleep (100); cout << "+ |`-._          |                       ,;;;;/;;;;;'              \\           +" << endl;
		Sleep (100); cout << "+ |             /                      ,;;;;/;;;;;'  \\              \\          +" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+  _______                                                                     +" << endl;
		Sleep (100); cout << "+ |       |                                                                    +" << endl;
		Sleep (100); cout << "+ |   ^   |  --- Chowanie sie przed przeciwnikami, ktorych nie mozesz pokonac  +" << endl;
		Sleep (100); cout << "+ |_______|                                                                    +" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+     >>> >>> >>>   NACISNIJ DOWOLNY KLAWISZ ABY ZACZAC GRE   <<< <<< <<<      +" << endl;
		Sleep (100); cout << "+                                                                              +" << endl;
		Sleep (100); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

        getch();

        P1:
        Sleep(250);
        system("cls");

		// LVL 1 //

		cout <<endl<< ">------------------------------{ AMNESIUM LVL1 }-------------------------------<"<<endl<<endl;
		cout << " Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli,\n a obraz poczatkowo wydaje"
			" sie byc jakby przez mgle. Chwila lezenia pomaga \n w koncu dojsc do siebie. Pokoj nie jest duzy \n dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi";

		cout<<endl<<endl;
		cout << " Drzwi <1>" << endl;
		cout << " Stary Obraz <2>" << endl;
		cout << " Biurko <3>" << endl;
		cout << " Szafa <4>" <<endl;
		cout << " Instrukcja gry <I>";

        cout<<endl<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;

            wybor = getch();
            switch (wybor)
            {
			case '1':
				cout << " > Podchodzisz do drzwi"; // PRZYPADEK DRZWI 1//

				DR:

				cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'a':

                    cout << " > Bardzo stare drzwi wydaja sie byc zamkniete";
                    goto DR;
                    break;

                    case 's':
                        if (skey==1)
                        {
                        cout << " > Uzyto klucza drzwi sie otwieraja, czy chcesz przejsc do LVL2 (Y/N) ?";

                        KA:

                        cout<<endl<<endl;

                            wybor = getch();
                            switch (wybor)
                            {

                            case 'y':
                            cout << " > Idziesz do LVL2";
                            goto LVL2;
                            break;

                            case 'n':
                            cout<< " > Odchodzisz od drzwi  ";
                            goto P1;
                            break;


                            default: cout<< " ! Nie ma takiej opcji !";
                            goto KA;
                            }
                            } else
                            cout<< " > Nie mozna otworzyc drzwi";
                            goto DR;
                            break;

                    case 'd':
                    cout << " > Nie ma tutaj nic do zebrania";
                    goto DR;
                    break;

                    case 'w':
                    cout << " > Odchodzisz od przedmiotu";
                    goto P1;
                    break;

                    default: cout<< " ! Nie ma takiej opcji !";
                    goto DR;
                    }


				case '2':
				cout << " > Podchodzisz do starego obrazu"; // PRZYPADEK OBRAZU 1 //

				OB:

                cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'a':
                    cout << " > Obraz wydaje sie tak jakby dziwnie na ciebie spogladac, ale ciezko powiedziec czy to tylko"
                    " wymysl twojej wyobrazni czy rzeczywiscie tak jest";
                    goto OB;
                    break;

                    case 's':
                    cout<< " > Dotykasz ramki obrazu z ktorego wypada cos na podloge zawinietego w zgnity material";
                    goto OB;
                    break;

                    case 'd':
                        if(rkey!=1)
                        {
                        cout << " > Znajdujesz zardzewialy klucz";
                        rkey = 1;
                        }
                        else cout<<" > Wzioles juz zardzewialy klucz";
                    goto OB;
                    break;

                    case 'w':
                    cout << " > Odchodzisz od przedmiotu";
                    goto P1;
                    break;

                    default: cout<< " ! Nie ma takiej opcji !";
                    goto OB;
                    }

                case '3':
                cout << " > Podchodzisz do biurka"; // PRZYPADEK BIURKA 1 //

				BI:

				cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                        case 'a':
                        cout << " > Cale pognite i paskudne biurko, pasuje do tego mrocznego wystroju.";
                        goto BI;
                        break;

                        case 's':

                        cout<< " > Przeszukujac biurko odnajdujesz ukryty schowek w szufladzie";
                        goto BI;
                        break;

                        case 'd':
                            if(skey!=1)
                            {
                            cout << " > Bierzesz srebrny klucz";
                            skey = 1;
                            }
                            else cout<<" > Wzieto juz srebrny klucz";
                        goto BI;
                        break;

                        case 'w':
                        cout << "> Odchodzisz od przedmiotu";
                        goto P1;
                        break;

                        default: cout<< " ! Nie ma takiej opcji !";
                        goto BI;
                    }

                case '4':
                cout << "> Podchodzisz do szafy"; // PRZYPADEK SZAFY 1 //

				SZ:

				cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'a':

                    cout << " Szafa ma wyrwane drzwi i jest w tragicznym stanie."
                    "Okazuje sie jednak ze w podlodze ukryty jest schowek zamkniety jakims kluczem";
                    goto SZ;
                    break;

                    case 's':
                        if (rkey==1)
                        {
                        cout << " > Uzyto klucza, schowek sie otwiera i znajdujesz na jego dnie cos ostrego";
                        } else
                        cout<< " > Nie mozna otworzyc schowka";
                        goto SZ;
                        break;

                    case 'd':
                    cout << " > Wzieto stary pordzewialy noz";
                    oknf = 1;
                    goto SZ;
                    break;

                    case 'w':
                    cout << "> Odchodzisz od przedmiotu";
                    goto P1;
                    break;

                    default: cout<< " ! Nie ma takiej opcji !";
                    goto SZ;
                    }

                case 'i':
					cout << endl << endl <<endl;
					cout << "                                _______ "<<endl;
					cout << "                               |       |"<<endl;
					cout << "                               |   W   | --- Powrot"<<endl;
					cout << "                               |_______|"<<endl;

					cout << "                        _______   _______   _______ "<<endl;
					cout << "                       |       | |       | |       |"<<endl;
					cout << "                       |   A   | |   S   | |   D   |"<<endl;
					cout << "                       |_______| |_______| |_______|"<<endl;
					cout << "                         /           |           \\" <<endl;
					cout << "                        /  Uzyj/przeszukaj rzecz  \\" <<endl;
					cout << "                       /                         Wez przedmiot " << endl;
					cout << "      Inspekcja przedmiotu" << endl << endl << endl << endl;
					goto P1;
                    break;

                    default: cout<< "! Nie ma takiej opcji !";
                    goto P1;
		}

    // LVL 2 //

	LVL2:
		system ("CLS");
		cout <<endl<< ">------------------------------{ AMNESIUM LVL2 }-------------------------------<"<<endl<<endl;
		cout <<" Tu zaczynie sie nowy poziom";


		return (0);
}
