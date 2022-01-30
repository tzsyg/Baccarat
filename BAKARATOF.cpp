#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <random>
#include <ctime>
#include <stdio.h>
#include<windows.h>



using namespace std;
mt19937 generator(time(nullptr));



void karty()
{


	char karta;
	int m = 0;//pomocnicza
	char x, y, z, v, q, w;
	char kontynuacja;
	char bet{};
	string imie{};
	double depozyt = 0;
	double kwota = 0;
	double bank = 0;
	cout << "Wprowad\253 swoje imi\251! " << endl;
	cout << "Imie: ";
	cin >> imie;

	system("cls");

	cout << "Witam ci\251 " << imie << " przy moim stole, wprowad\253 ilo\230\206 jak\245 chcesz wp\210aci\206 do depozytu." << endl;

	cout << "Kwota ktor\245 dzisiaj wp\210acasz to: " << endl;
	cout << "Kwota: ";

	//wprowadzanie oraz sprawdzanie poprawnosci depozytu
	do
	{
		cin >> depozyt;
		if (depozyt > 1)
		{
			m++;
		}
		else
		{
			cout << "Wprowadz poprawna ilosc srodk\242w" << endl;
			cout << "Kwota: ";
		}


	} while (m != 1);

	//glowna petla do powtarzania rozgrywki

	do
	{
		int betK = 0, betG = 0, betR = 0;
		int licznik = 0;
		system("cls");
		cout << "Ile chcesz postawi\206? " << endl;
		//sprawdzanie poprawnosci wprowadzonej kwoty
		do
		{
			cout << "Kwota: ";
			cin >> kwota;

			if (kwota > depozyt)
			{
				cout << "Nie masz wystarczaj\245cych srodk\242w!" << endl;
			}
			else if (kwota <= depozyt && kwota > 0)
			{
				depozyt = depozyt - kwota;

				cout << "Tw\242j stan konta to: " << depozyt << endl;
				cout << "Na kogo chcesz postawi\206?" << endl;
				cout << "(K) Na krupiera" << endl;
				cout << "(G) Na gracza " << imie << endl;
				cout << "(R) Na remis" << endl;
				cout << endl;
				cout << "Wybor: ";
				cin >> bet;
				if (bet == 'k' || bet == 'K')
				{
					betK++;
				}
				if (bet == 'g' || bet == 'G')
				{
					betG++;
				}
				if (bet == 'r' || bet == 'R')
				{
					betR++;
				}
				licznik++;

			}
			else
			{
				cout << "Wprowadz poprawna ilosc srodkow! ";
			}
		} while (licznik != 1);


		//symbole
		const char* serce = "\3";
		const char* diam = "\4";
		const char* pik = "\5";
		const char* trefl = "\6";



		//czyszczenie ekranu
		system("cls");
		
		int a, b, c, d;
		int e = 0;
		int f = 0;
		int sumaG = 0;
		int sumaK = 0;
		int wynikG = 0;
		int wynikK = 0;
		string znakA;
		int znakAP;
		string znakB;
		int znakBP;
		string znakC;
		int znakCP;
		string znakD;
		int znakDP;
		int znakEP;
		string znakE;
		int znakFP;
		string znakF;
		int wygranaG = 0, wygranaK = 0, wygranaR = 0;
		//losowanie dla wartosci kart
		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 14);
			a = distribution(generator);
		}
		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 14);
			b = distribution(generator);
		}
		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 14);
			c = distribution(generator);
		}
		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 14);
			d = distribution(generator);
		}


		//losowanie znaku kart 
		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 4);
			znakAP = distribution(generator);
		}
		//DLA A
		if (znakAP == 1)
		{
			znakA = serce;
		}
		if (znakAP == 2)
		{
			znakA = pik;
		}
		if (znakAP == 3)
		{
			znakA = diam;
		}
		if (znakAP == 4)
		{
			znakA = trefl;
		}
		//DLA B

		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 4);
			znakBP = distribution(generator);
		}
		if (znakBP == 1)
		{
			znakB = serce;
		}
		if (znakBP == 2)
		{
			znakB = pik;
		}
		if (znakBP == 3)
		{
			znakB = diam;
		}
		if (znakBP == 4)
		{
			znakB = trefl;
		}

		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 4);
			znakCP = distribution(generator);
		}
		//DLA C
		if (znakCP == 1)
		{
			znakC = serce;
		}
		if (znakCP == 2)
		{
			znakC = pik;
		}
		if (znakCP == 3)
		{
			znakC = diam;
		}
		if (znakCP == 4)
		{
			znakC = trefl;
		}
		//Dla D
		for (int i = 0; i < 4; i++)
		{
			uniform_int_distribution <int> distribution(1, 4);
			znakDP = distribution(generator);
		}
		if (znakDP == 1)
		{
			znakD = serce;
		}
		if (znakDP == 2)
		{
			znakD = pik;
		}
		if (znakDP == 3)
		{
			znakD = diam;
		}
		if (znakDP == 4)
		{
			znakD = trefl;
		}


		//zmiana wylosowanej wartosci na JQKA

		if (a == 11)
		{
			x = 'J';
			
		}
		if (c == 11)
		{
			z = 'J';
			
		}
		if (b == 11)
		{
			y = 'J';
			
		}

		if (d == 11)
		{
			v = 'J';
		
		}


		if (a == 12)
		{
			x = 'Q';
		}
		else if (b == 12)
		{
			y = 'Q';
		}
		if (c == 12)
		{
			z = 'Q';
		}
		if (d == 12)
		{
			v = 'Q';
		}

		if (a == 13)
		{
			x = 'K';
		}
		if (b == 13)
		{
			y = 'K';
		}
		if (c == 13)
		{
			z = 'K';
		}
		if (d == 13)
		{
			v = 'K';
		}

		//as 
		if (a == 14)
		{
			x = 'A';
		}
		if (b == 14)
		{
			y = 'A';
		}
		if (c == 14)
		{
			z = 'A';
		}
		if (d == 14)
		{
			v = 'A';
		}


		//wyswietlanie wartosci oraz znaku karty dla krupiera
		cout << "Karty krupiera: " << endl;
		if (a > 10)
		{

			cout << x << znakA << endl;
		}
		else
		{

			cout << a << znakA << endl;
		}
		if (c > 10)
		{

			cout << z << znakC << endl;
		}
		else
		{

			cout << c << znakC << endl;
		}

		cout << "Karty gracza to: " << endl;
		//wyswietlanie wartosci oraz znaku karty dla gracza
		if (b > 10)
		{

			cout << y << znakB << endl;
		}
		else
		{

			cout << b << znakB << endl;
		}
		if (d > 10)
		{

			cout << v << znakD << endl;
		}
		else
		{

			cout << d << znakD << endl;
		}

		
		cout << "Czy chcesz dobra\206 trzeci\245 kart\251?" << endl;
		cout << "(T) TAK" << endl;
		cout << "(N) NIE" << endl;

		//losowanie dla 3 karty
		cout << "Wyb\242r: ";
		cin >> karta;
		if (karta == 't' || karta == 'T')
		{
			for (int i = 0; i < 4; i++)
			{
				//losowanie wartosci karty e
				uniform_int_distribution <int> distribution(1, 14);
				e = distribution(generator);
			}
			for (int i = 0; i < 4; i++)
			{
				//losowanie wartosci karty f
				uniform_int_distribution <int> distribution(1, 14);
				f = distribution(generator);
			}
			for (int i = 0; i < 4; i++)
			{
				uniform_int_distribution <int> distribution(1, 4);
				znakEP = distribution(generator);
			}

			//DLA E znaku
			if (znakEP == 1)
			{
				znakE = serce;
			}
			if (znakEP == 2)
			{
				znakE = diam;
			}
			if (znakEP == 3)
			{
				znakE = pik;
			}
			if (znakEP == 4)
			{
				znakE = trefl;
			}

			for (int i = 0; i < 4; i++)
			{
				uniform_int_distribution <int> distribution(1, 4);
				znakFP = distribution(generator);
			}

			//DLA F znaku
			if (znakFP == 1)
			{
				znakF = serce;
			}
			if (znakFP == 2)
			{
				znakF = diam;
			}
			if (znakFP == 3)
			{
				znakF = pik;
			}
			if (znakFP == 4)
			{
				znakF = trefl;
			}
			//zmiana wartosci losu na JKQA
			if (e == 11)
			{
				q = 'J';
				
			}
			if (f == 11)
			{
				w = 'J';
				
			}
			if (e == 12)
			{
				q = 'Q';
			}
			if (f == 12)
			{
				w = 'Q';
			}
			if (e == 13)
			{
				q = 'K';
			}
			if (f == 13)
			{
				w = 'K';
			}
			if (e == 14)
			{
				q = 'A';
			}
			if (f == 14)
			{
				q = 'A';
			}

			system("cls");

			//wyswietlanie
			cout << "Karty krupiera: " << endl;
			if (a > 10)
			{
				cout << x << znakA << endl;
			}
			else
			{
				cout << a << znakA << endl;
			}
			if (c > 10)
			{
				cout << z << znakC << endl;
			}
			else
			{
				cout << c << znakC << endl;
			}
			if (e > 10)
			{
				cout << q << znakC << endl;
			}
			else
			{
				cout << e << znakC << endl;
			}

			cout << "Karty gracza to: " << endl;

			if (b > 10)
			{
				cout << y << znakB << endl;
			}
			else
			{
				cout << b << znakB << endl;
			}
			if (d > 10)
			{
				cout << v << znakD << endl;
			}
			else
			{
				cout << d << znakD << endl;
			}
			if (f > 10)
			{
				cout << w << znakC << endl;
			}
			else
			{
				cout << f << znakC << endl;
			}





		}






		//jesli karta jest od >=11 && 14<= warunek JQK=0 A=1 
		if (a == 10)
		{
			a = 0;

		}
		if (b == 10)
		{
			b = 0;
		}
		if (c == 10)
		{
			c = 0;
		}
		if (d == 10)
		{
			d = 0;
		}
		if (e == 10)
		{
			e = 0;
		}
		if (f == 10)
		{
			f = 0;
		}
		if (a == 11)
		{
			a = 0;
		}
		if (b == 11)
		{
			b = 0;
		}
		if (c == 11)
		{
			c = 0;
		}
		if (d == 11)
		{
			d = 0;
		}
		if (e == 11)
		{
			e = 0;
		}
		if (f == 11)
		{
			f = 0;
		}
		if (a == 12)
		{
			a = 0;
		}
		if (b == 12)
		{
			b = 0;
		}
		if (c == 12)
		{
			c = 0;
		}
		if (d == 12)
		{
			d = 0;
		}
		if (e == 12)
		{
			e = 0;
		}
		if (f == 12)
		{
			f = 0;
		}
		if (a == 13)
		{
			a = 0;
		}
		if (b == 13)
		{
			b = 0;
		}
		if (c == 13)
		{
			c = 0;
		}
		if (d == 13)
		{
			d = 0;
		}
		if (e == 13)
		{
			e = 0;
		}
		if (f == 13)
		{
			f = 0;
		}
		//as warty 1 pkt
		if (a == 14)
		{
			a = 1;
		}
		if (b == 14)
		{
			b = 1;
		}
		if (c == 14)
		{
			c = 1;
		}
		if (d == 14)
		{
			d = 1;
		}
		if (e == 14)
		{
			e = 1;
		}
		if (f == 14)
		{
			f = 1;
		}



		//DODWANIE WARTOSCI WAZNE!!
		if (karta == 't' || karta == 'T')
		{
			sumaG = b + d + f;
			sumaK = a + c + e;
		}
		else
		{
			sumaG = b + d;
			sumaK = a + c;
		}


		if (sumaG > 9)
		{
			wynikG = sumaG % 10;

		}
		if (sumaK > 9)
		{
			wynikK = sumaK % 10;

		}



		//sprawdzanie wygranej
		if (sumaG > sumaK || wynikG > wynikK)
		{
			cout << "Gracz wygral" << endl;
			wygranaG++;

		}
		else if (sumaG < sumaK || wynikG < wynikK)
		{
			cout << "Krupier wygral" << endl;
			wygranaK++;
		}
		else if (sumaG == sumaK || wynikG == wynikK || sumaG == wynikK || sumaK == wynikG)
		{
			cout << "REMIS" << endl;
			wygranaR++;
		}

		//LICZNIK WYGRANEJ
		double kasa;
		if (wygranaK == 1 && betK == 1)
		{
			kasa = kwota * 2;

			depozyt = depozyt + kasa;

		}
		else if (wygranaK == 1 && betG == 1)
		{
			kasa = 0;

			depozyt = depozyt + kasa;
		}
		else if (wygranaK == 1 && betR == 1)
		{
			kasa = 0;

			depozyt = depozyt + kasa;
		}
		else if (wygranaG == 1 && betG == 1)
		{
			kasa = kwota * 2;

			depozyt = depozyt + kasa;
		}
		else if (wygranaG == 1 && betK == 1)
		{
			kasa = 0;

			depozyt = depozyt + kasa;
		}
		else if (wygranaG == 1 && betR == 1)
		{
			kasa = 0;

			depozyt = depozyt + kasa;
		}
		else if (wygranaR == 1 && betR == 1)
		{
			kasa = kwota * 8;

			depozyt = depozyt + kasa;
		}
		else if (wygranaR == 1 && betG == 1)
		{
			kasa = 0;

			depozyt = depozyt + kasa;
			cout << depozyt + kasa;
		}
		else if (wygranaR == 1 && betK == 1)
		{
			kasa = 0;

			depozyt = depozyt + kasa;
			cout << depozyt + kasa;
		}

		cout << "Tw\242j stan konta to: ";
		cout << depozyt << endl;



		cout << "Czy chcesz gra\206 dalej?\n";
		cout << "(T) TAK" << endl;
		cout << "(N) NIE" << endl;
		cout << endl;
		cout << "Wyb\242r: ";
		cin >> kontynuacja;

		licznik--;
	} while (kontynuacja == 't' || kontynuacja == 'T');
}





int main()
{
start:
	int wybor;
	bool koniec = false;
	int x = 0;
	char t;







	//menu start
	cout << R"(
  
             ____                                _   
            |  _ \                              | |  
            | |_) | __ _  ___ ___ __ _ _ __ __ _| |_ 
            |  _ < / _` |/ __/ __/ _` | '__/ _` | __|
            | |_) | (_| | (_| (_| (_| | | | (_| | |_ 
            |____/ \__,_|\___\___\__,_|_|  \__,_|\__|
                                          
                           
)" << '\n';
	cout << "              Wybierz jedn\245 z opcji:" << endl << endl;
	cout << "              1. Rozpocznij gr\251" << endl << endl;
	cout << "              2. Instrukcja " << endl << endl;
	cout << "              3. Wyj\230cie " << endl << endl << endl;
	cout << "Wyb\242r: ";

	cin >> wybor;


	

	if (wybor == 1)
	{
		//funckja cala gierka
		system("cls");

		karty();
	}
	else if (wybor == 2)
	{
		const char* serce = "\3";
		const char* diam = "\4";
		const char* pik = "\5";
		const char* trefl = "\6";
	wyr:
		//instrukcja
		system("cls");
		cout << "Krupier losuje dwie karty dla niego i dla gracza. Warto\230ci kart dodaje si\251 i je\276 ich suma jest wi\251ksza ni\276 10 wykonuje si\251 dzia\210nie modulo 10." << endl;
		cout << "Po rozdaniu dw\242ch kart, gracz mo\276e zdecydowa\206 czy chce dobra\206 jeszcze po jednej karcie dla obydwu uczestnik\242w." << endl;
		cout << "Wygrywa gracz, kt\242rego suma jest bli\276sza 9!" << endl << endl;
		cout << "Ka\276da karta ma inn\245 warto\230\206:" << endl;

		cout << "1" << serce << "  1" << diam << "  1" << pik << "  1" << trefl << "	 warto\230\206: 1" << endl;
		cout << "2" << serce << "  2" << diam << "  2" << pik << "  2" << trefl << "	 warto\230\206: 2" << endl;
		cout << "3" << serce << "  3" << diam << "  3" << pik << "  3" << trefl << "	 warto\230\206: 3" << endl;
		cout << "4" << serce << "  4" << diam << "  4" << pik << "  4" << trefl << "	 warto\230\206: 4" << endl;
		cout << "5" << serce << "  5" << diam << "  5" << pik << "  5" << trefl << "	 warto\230\206: 5" << endl;
		cout << "6" << serce << "  6" << diam << "  6" << pik << "  6" << trefl << "   warto\230\206: 6" << endl;
		cout << "7" << serce << "  7" << diam << "  7" << pik << "  7" << trefl << "	 warto\230\206: 7" << endl;
		cout << "8" << serce << "  8" << diam << "  8" << pik << "  8" << trefl << "   warto\230\206: 8" << endl;
		cout << "9" << serce << "  9" << diam << "  9" << pik << "  9" << trefl << "	 warto\230\206: 9" << endl;
		cout << "10" << serce << " 10" << diam << " 10" << pik << " 10" << trefl << "  warto\230\206: 0" << endl;
		cout << "J" << serce << "  J" << diam << "  J" << pik << "  J" << trefl << "	 warto\230\206: 0" << endl;
		cout << "Q" << serce << "  Q" << diam << "  Q" << pik << "  Q" << trefl << "	 warto\230\206: 0" << endl;
		cout << "K" << serce << "  K" << diam << "  K" << pik << "  K" << trefl << "	 warto\230\206: 0" << endl;
		cout << "A" << serce << "  A" << diam << "  A" << pik << "  A" << trefl << "	 warto\230\206: 1" << endl;



		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;

		cout << "Je\276li chcesz powr\242ci\206 do menu g\210\242wnego nacisnij (x)" << endl;
		cout << "Wyb\242r: ";
		cin >> t;
		if (t == 'x' || t == 'X')
		{
			system("cls");
			goto start;
		}
		else
		{
			goto wyr;
		}

	}
	else if (wybor == 3)
	{

	}
	else
	{
		
		cout << "\a";
		system("cls");
		goto start;
		

	}




}


