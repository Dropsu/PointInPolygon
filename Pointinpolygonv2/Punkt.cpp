# pragma once
#include "stdafx.h"
void Punkt::nadajWspolrzedne()
{
		int x, y;
		cout << "Prosze podac wspolrzedne punktu:" << endl;
		cout << "x:" << endl;
		cin >> x;
		cout << "y: " << endl;
		cin >> y;
		this->x = x;
		this->y = y;
}
