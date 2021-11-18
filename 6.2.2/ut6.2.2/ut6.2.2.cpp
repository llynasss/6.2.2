#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut622
{
	TEST_CLASS(ut622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k[4] = { 0,1,2,3 };

			change(k, 4, 0);

			Assert::AreEqual(k[1], 2);
		}
	};
}
