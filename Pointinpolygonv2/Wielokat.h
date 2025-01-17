#pragma once
class Wielokat	
{
	friend int iloczyn_wektorow(int xw, int yw, int x1, int y1, int x2, int y2);
	friend int po_lewej(Punkt P0, Punkt P1, Punkt P2);
public:
	Wielokat();
	void wyswietl_punkty();
	bool sprawdz_czy_wypukly();
	bool testuj_punkt_wek(Punkt P);
	bool testuj_punkt_przec(Punkt P);
	int testuj_indeks_krzywej(Punkt P);
private:
	int n;
	Punkt * punkty;
	Punkt a;
};

