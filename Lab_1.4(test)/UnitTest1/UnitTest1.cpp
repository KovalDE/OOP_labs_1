#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.4(test)/Libr.h"
#include "../Lab_1.4(test)/Libr.cpp"
#include "../Lab_1.4(test)/Book.h"
#include "../Lab_1.4(test)/Book.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Library l;
			string name = "0", author = "0";
			int date = 0;
			int n=6;
			l.Init(n);
			bool t = l.Erase(2);
			Assert::AreEqual(t, true);
		}
	};
}
