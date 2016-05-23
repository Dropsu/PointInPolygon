#pragma once
class Punkt
{
	friend class Wielokat;
	friend int po_lewej(Punkt P0, Punkt P1, Punkt P2);
public:
	void nadajWspolrzedne();
private:
	int x, y;
};



