#include <iostream>
#include "Rational.h"
#include "Pair.h"

int main()
{
    Pair a, b, c, d;
    Rational f;
    int result;

    cout<< endl;
    cout << "Pair a " << endl;
    cout << "(x/y)" << endl;
    a.Init(1, 2);
    a.Display();
    cout << endl;
    cout << "Pair b " << endl;
    cout << "(x/y)" << endl;
    b.Init(2, 1);
    b.Display();
    cout << endl;
    cout << "Pair c" << endl;
    cout << "(x/y)" << endl;
    c.Init(1, 2);
    c.Display();

    cout << endl;
    cout << "a and b" << endl;
    result = f.ComparePairs(a, b);
    f.ComparePairsResult(result);

    cout << endl;
    cout << "a and c" << endl;
    result = f.ComparePairs(a, c);
    f.ComparePairsResult(result);

    cout << endl;
    cout << "b and c" << endl;
    result = f.ComparePairs(b, c);
    f.ComparePairsResult(result);

    return 0;
}