#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6_1(rec)/Lab_6.1_rec.cpp"

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
            int expectation = CountElements(t, n, 0, 0);
            int actual = 3;
            Assert::AreEqual(expectation, actual);
        }

        TEST_METHOD(TestMethod2)
        {
            const int n = 5;
            int t[n] = { 4, 12, -2, 1, -6 };
            int expectation = SumElements(t, n, 0, 0);
            int actual = -7;
            Assert::AreEqual(expectation, actual);
        }
    };
}