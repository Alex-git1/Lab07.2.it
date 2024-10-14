#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab07.2(it)/Lab07.2(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int rowCount = 3;
            const int colCount = 4;
            int** a = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
                a[i] = new int[colCount];

            // Ініціалізуємо тестову матрицю
            a[0][0] = 2; a[0][1] = 5; a[0][2] = 8; a[0][3] = 1;
            a[1][0] = 4; a[1][1] = 6; a[1][2] = 3; a[1][3] = 7;
            a[2][0] = 10; a[2][1] = 1; a[2][2] = 12; a[2][3] = 3;

            int maxOfMin = 0;
            Assert::IsTrue(SearchMinEven(a, rowCount, colCount, maxOfMin));
            Assert::AreEqual(maxOfMin, 8); 

            for (int i = 0; i < rowCount; i++)
                delete[] a[i];
            delete[] a;
		}
	};
}
