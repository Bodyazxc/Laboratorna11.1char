#include "pch.h"
#include "CppUnitTest.h"
#include "../Labotatorna11.1.char/Laboratorna11.1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest111
{
	TEST_CLASS(UnitTest111)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char* testFileName = "t.txt";
			std::ofstream fout(testFileName);
			fout << "ab+bc-ca=hc"; 
			fout.close();

			
			int result = CountOccurrences(testFileName);
			Assert::AreEqual(3, result);
		}
	};
}
