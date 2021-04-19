#pragma once
#include "Pair.h"

class Rational
{
	Pair p;
public:
	void SetP(double first, double second);
	Pair GetP() const;

	void Display();
	void Read();
	string toString() const;

	double ComparePairs(Pair p1, Pair p2) const;
	void ComparePairsResult(int result);
};

