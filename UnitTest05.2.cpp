#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-05.2-2/PR-05.2-2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest052
{
	TEST_CLASS(UnitTest052)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double res = A(1.00, 2.71828, 2);
			Assert::AreEqual(res, 2.5);
		}
	};
}
