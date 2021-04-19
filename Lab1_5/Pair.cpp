#include "Pair.h"
#include <iostream>

using namespace std;

void Pair::SetFirst(double value) { first = value; }
void Pair::SetSecond(double value) { second = value; }

double Pair::GetFirst() const { return first; }
double Pair::GetSecond() const { return second; }

void Pair::Init(double x, double y)
{
	first = x;
	second = y;


}
void Pair::Read()
{
	cout << "First = "; cin >> first;
	cout << "Second = "; cin >> second;
}
void Pair::Display()
{
	cout << endl;
	cout << "First = " << GetFirst() << endl;
	cout << "Second = " << GetSecond() << endl;
}

string Pair::toString() const
{
	stringstream sout;

	cout << endl;
	sout << "First = " << GetFirst() << endl;
	sout << "Second = " << GetSecond() << endl;

	return sout.str();
}