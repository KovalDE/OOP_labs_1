#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_5/Number.h"
#include "../Lab_1_5/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number l, r;
			l.setDouble(4);
			r.setDouble(5);
			Number res = Mult(l, r);
			double b = res.getDouble();
			Assert::AreEqual(20.0,b);
		}
	};
}
