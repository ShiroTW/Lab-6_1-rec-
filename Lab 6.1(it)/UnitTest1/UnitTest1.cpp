#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1(it)/Lab_6.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            const int n = 5;
            int t[n] = { 4, 12, -2, 1, -6 };
            int expectation = CountElements(t, n);
            int actual = 3;
            Assert::AreEqual(expectation, actual);
        }

        TEST_METHOD(TestMethod2)
        {
            const int n = 5;
            int t[n] = { 4, 12, -2, 1, -6 };
            int expectation = SumElements(t, n);
            int actual = -7;
            Assert::AreEqual(expectation, actual);
        }
    };
}