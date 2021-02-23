#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_2/Matrix.h"
#include "../Lab_1_2/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix m;
			bool t = m.Init(2,2);
			Assert::AreEqual(t, true);

		}
	};
}
