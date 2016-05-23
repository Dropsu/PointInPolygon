# pragma once
#include "stdafx.h"
using namespace std;


Wielokat::Wielokat()
{
	cout << "Liczba wiercholkow wielkata wypuklego:" << endl;
	cin >> n;
	int x, y;
	this->n = n;
	cout << "Zainicjalizowano wielokat.\nWpolrzedne kolejnych wierzcholkow (p0-pn) (przeciwnie do ruchu wskazowek zegara)" << endl;
	Punkt * punkty = new Punkt[n+2]; // 2 dodatkowe wyrazy tablicy przechowujace dane pierwszego i drugiego punktu przydadza sie w kilku funkcjach
	{
		for (int i = 0; i < n; i++)
		{
			punkty[i].nadajWspolrzedne();
		}
		punkty[n] = punkty[0];
		punkty[n + 1] = punkty[1];
	}
	this->punkty = punkty;
}

void Wielokat::wyswietl_punkty()
{
	cout << "Wyswietlam wielkokat:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "<p" << i << "> (" << punkty[i].x << "," << punkty[i].y << ")" << endl;
	}
}



bool Wielokat::sprawdz_czy_wypukly()
{
	
	for (int i = 0; i < n; i++)
	{
		if (iloczyn_wektorow(punkty[i].x, punkty[i].y, punkty[i + 1].x, punkty[i + 1].y, punkty[i + 2].x, punkty[i + 2].y) < 0)
			return 0;
	}
	return 1;
}

bool Wielokat::testuj_punkt_wek(Punkt P)
{
	for (int i = 0; i < n; i++)
	{
		if (iloczyn_wektorow(punkty[i].x, punkty[i].y, punkty[i + 1].x, punkty[i + 1].y, P.x, P.y) < 0)
			return 0;
	}
	return 1;
}

bool Wielokat::testuj_punkt_przec(Punkt P)
{
	int j=n-1;
	int przec = 0;
	for (int i = 0; i < n; i++)
	{
		if (punkty[i].y < P.y && punkty[j].y >= P.y
			|| punkty[j].y < P.y && punkty[i].y >= P.y)
		{
			if (P.x<(punkty[j].x-punkty[i].x)*(P.y-punkty[i].y)/(punkty[j].y-punkty[i].y)+punkty[i].x)
				przec++;
		}
		j = i;
	}
	return przec%2;
}

int Wielokat::testuj_indeks_krzywej(Punkt P)
{
	int ik = 0;
	for (int i = 0; i < n; i++)
	{
		if (punkty[i].y <= P.y)
		{
			if (punkty[i + 1].y > P.y)
				if (po_lewej(punkty[i], punkty[i + 1], P)>0)
					ik++;
		}
		else
		{
			if (punkty[i + 1].y <= P.y)
				if (po_lewej(punkty[i], punkty[i + 1], P) < 0)
					ik--;
		}

	}

	return ik;
}
