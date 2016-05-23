#include "stdafx.h"
int iloczyn_wektorow(int xw, int yw, int x1, int y1, int x2, int y2)
{
		return (x1 - xw)*(y2 - yw) - (x2 - xw)*(y1 - yw);
}

int po_lewej(Punkt P0, Punkt P1, Punkt P2)
{
	return ((P1.x - P0.x) * (P2.y - P0.y)
		- (P2.x - P0.x) * (P1.y - P0.y));
}
int main()
{
	cout << "***TEST PRZYNALEZNOSCI PUNKTU DO WIELOKATA WYPUKLEGO***" << endl;
	Punkt P;
	P.nadajWspolrzedne();
	Wielokat poly;
	cout << endl;
	cout << "*********************************" << endl;
	cout << "Wynik testu wypuklosci wielokata z uzyciem iloczynow wektorowych:"<< poly.sprawdz_czy_wypukly() << endl;
	cout << "*********************************" << endl;
	cout << "Testowanie czy punkt znajduje sie w wielokacie..." << endl;
	cout << "Wynik testu z uzyciem iloczynow wektorowych :"<<poly.testuj_punkt_wek(P) << endl;
	cout << "Wynik testu przeciec:"<< poly.testuj_punkt_przec(P) << endl;
	cout << "Wynik testu z uzyciem indeksu krzywej:"<<poly.testuj_indeks_krzywej(P) << endl;
	system("pause");
    return 0;
}

