#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_08.1_char/lab_08.1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081char
{
	TEST_CLASS(UnitTest081char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char test[] = "while or not while, hmm...";
			Assert::AreEqual(2,Count(test));
		}
	};
}
