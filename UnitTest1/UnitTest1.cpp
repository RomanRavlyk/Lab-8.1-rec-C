#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1 rec C/Lab 8.1 rec C.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(FindCharTest)
        {
            char str[12] = "1,2,4,5,6,7";
            int result = Count(str, 1);
            Assert::AreEqual(result, 5);
        }
    };
}