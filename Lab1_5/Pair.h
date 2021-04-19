#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Pair
{
	double first, second;
public:
	void SetFirst(double value);
	void SetSecond(double value);

	double GetFirst() const;
	double GetSecond() const;

	void Init(double x, double y);
	void Read();
	void Display();

	string toString() const;
};

