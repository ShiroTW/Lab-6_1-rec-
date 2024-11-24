#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

//Recurtion way

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end, int i);
void PrintArray(int* a, const int numberOfElements);
int CountElements(int* a, int numberOfElements);
int SumElements(int* a, int numberOfElements);
void TurnToZero(int* a, int numberOfElements);

int main()
{
	srand((unsigned)time(NULL));

	const int n = 25;
	int t[n];

	int Low = -5;
	int High = 22;
	CreateArrayWithRandomElements(t, n, Low, High, 0);
	cout << "Array with Random elements:" << endl;
	PrintArray(t, n);
	cout << "Number of right elements: " << setw(1) << CountElements(t, n) << endl;
	cout << "Sum of right elements: " << setw(1) << SumElements(t, n) << endl;
	TurnToZero(t, n);
	PrintArray(t, n);
}

void CreateArrayWithRandomElements(int* t, int numberOfElements, int start, int end, int i) {
	t[i] = start + rand() % (end - start + 1);
	if (i < numberOfElements - 1) {
		CreateArrayWithRandomElements(t, numberOfElements, start, end, i + 1);
	}
}
void PrintArray(int* t, const int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++) {
		cout << "t[" << setw(1) << i << "] = " << setw(1) << t[i] << "; ";
	}
	cout << endl;
}

int CountElements(int* t, int numberOfElements) {
	int count = 0;
	for (int i = 0; i < numberOfElements; i++) {
		if (!(t[i] >= 0 && t[i] % 2 == 0)) {
			count++;
		}
	}
	return count;
}

int SumElements(int* t, int numberOfElements) {
	int sum = 0;
	for (int i = 0; i < numberOfElements; i++) {
		if (!(t[i] >= 0 && t[i] % 2 == 0)) {
			sum += t[i];
		}
	}
	return sum;
}

void TurnToZero(int* t, int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++) {
		if (!(t[i] >= 0 && t[i] % 2 == 0)) {
			t[i] = 0;
		}
	}
}