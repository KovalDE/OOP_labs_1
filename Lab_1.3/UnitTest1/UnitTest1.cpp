#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.3/Money.h"
#include "../Lab_1.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money l,r;
			l.Init(4, 30);
			r.Init(7, 50);
			Money t;
			t = Substr(l, r);
			int a = t.GetGr();
			int b = t.GetCop();
			Assert::AreEqual(3, a);
			Assert::AreEqual(20, b);
		}
	};
}
