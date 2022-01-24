#include <iostream>
#include <math.h>

using namespace std;

float pi = 3.14;
int countArea(int x, int y)
{
	int prostokat = x *y;

	return prostokat;
}
int countArea(int x)
{
	int kwadrat = x*x;
	return kwadrat;
}
int countArea(int x, float pi)
{
	float kolo = x *x* pi;
	return kolo;
}
int main()
{
	setlocale(LC_CTYPE, "Polish");
	bool go = true;
	char z;

	while(go) {

		cout << "Oblicz pole:\n";
		cout << "Wybierz opcję z Menu: \n";
		cout << "1) Prostokat \n";
		cout << "2) Kwadrat \n";
		cout << "3) Okrag \n";
		cout << "4) Zakoncz \n";
		cin >> z;

		if (z == 49)
		{
			int x,y;
			cout << "Podaj wartości x i y prostokąta : " << endl;
			cin >> x;
			cin >> y;
			if (x <= 0||y<=0)
			{
				cout << "Nieprawidłowa wartość!"<<endl;
			}
			else
			cout << "Pole prostokątyka : " << countArea(x, y) << endl;
		}
		else if (z == 50)
		{
			int x ;
			cout << "Podaj wartość x kwadratu : " << endl;
			cin >> x;
			if (x <= 0)
			{
				cout << "Nieprawidłowa wartość!" << endl;
			}else
			cout << "Pole kwadratu: " << countArea(x) << endl;
		}
		else if (z == 51)
		{
			int x;
			cout << "Podaj przekątną okręgu : " << endl;
			cin >> x;
			if (x <= 0)
			{
				cout << "Nieprawidłowa wartość!" << endl;
			}
			else
				cout << "Pole okręgu: " << countArea(x,pi) << endl;
		}
		else if (z == 52)
		{
			go = false;
			cout << "Zakończ działanie\n";
			
		}
		else
		{
			cout << "Wybierz cyfrę od 1 do 4 ...\n";
			
		}
		cout << endl;
	} 

	return 0;
}
