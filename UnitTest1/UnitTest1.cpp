#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1_5/Rational.cpp"
#include "../Lab1_5/Pair.cpp"
#include "../Lab1_5/Pair.h"
#include "../Lab1_5/Rational.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a, b;
			Rational f;
			a.Init(4, 3);
			b.Init(2, 1);

			double res1, res2;
			res1 = f.ComparePairs(a, b);
			res2 = f.ComparePairs(a, b);
			Assert::AreEqual(res1, 1.0);
			Assert::AreEqual(res2, 1.0);

		}
	};
}
