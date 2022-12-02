#include "pch.h"
#include "CppUnitTest.h"
#include "../sum.cpp"
#include "../var.cpp"
#include "../dod.cpp"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			sum();
			Assert::AreEqual(n, 1);
		}
	};
}
