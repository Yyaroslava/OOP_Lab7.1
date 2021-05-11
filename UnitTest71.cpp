#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab7.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::array<int, 10> b{ {2, 5, 21, 0, 1, 0, 1, 0, 0, 0} };
			double avg = avg_even(b);
			Assert::AreEqual(avg, 5.);
		}
	};
}
