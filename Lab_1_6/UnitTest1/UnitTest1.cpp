#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_6/Real.h"
#include "../Lab_1_6/Real.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Real::Number a;
			a.setDouble(100);
			Real t;
			t.setNumber(a);
			Real s = t.Sqrt(2);
			double res = s.getNumber().getDouble();
			Assert::AreEqual(res, 10.0);
		}
	};
}
