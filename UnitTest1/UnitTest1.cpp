#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1(string).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Test Count function
			string testStr1 = "++--==+";
			int plusCount, minusCount, equalCount;
			Count(testStr1, plusCount, minusCount, equalCount);

			Assert::AreEqual(3, plusCount);
			Assert::AreEqual(2, minusCount);
			Assert::AreEqual(2, equalCount);

			// Test Change function
			string testStr2 = "++--==+";
			string modifiedStr = Change(testStr2);
			Assert::AreEqual(string("*********+"), modifiedStr);

			// Test case with no replacements needed
			string testStr3 = "+-+=";
			string modifiedStrNoReplace = Change(testStr3);
			Assert::AreEqual(string("+-+="), modifiedStrNoReplace);
		}
	};
}
