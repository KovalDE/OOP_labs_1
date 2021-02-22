#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_1/Pay.h"
#include "../Lab_1_1/Pay.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pay p;
			bool t;
			t = p.Init(2, 3);
			Assert::AreEqual(t, true);
			double s = 0;
			s = p.summa(5);
			Assert::AreEqual(s,1,2*1.0);

		}
	};
}
