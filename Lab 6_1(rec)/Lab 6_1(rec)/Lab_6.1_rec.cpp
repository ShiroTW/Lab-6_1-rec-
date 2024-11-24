#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

//Recurtion way

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end, int i);
void PrintArray(int* a, const int numberOfElements, int i);
int CountElements(int* a, int numberOfElements, int count, int i);
int SumElements(int* a, int numberOfElements, int sum, int i);
void TurnToZero(int* a, int numberOfElements, int i);

int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 25;
	int t[n];

	int Low = -5;
	int High = 22;
	CreateArrayWithRandomElements(t, n, Low, High, 0);
	cout << "Array with Random elements:" << endl;
	PrintArray(t, n, 0);
	cout << "Number of right elements: " << setw(1) << CountElements(t, n, 0, 0) << endl;
	cout << "Sum of right elements: " << setw(1) << SumElements(t, n, 0, 0) << endl;
	TurnToZero(t, n, 0);
	PrintArray(t, n, 0);
}

void CreateArrayWithRandomElements(int* t, int numberOfElements, int start, int end, int i) {
	t[i] = start + rand() % (end - start + 1);
	if (i < numberOfElements - 1) {
		CreateArrayWithRandomElements(t, numberOfElements, start, end, i + 1);
	}
}
void PrintArray(int* t, const int numberOfElements, int i)
{
	cout << "t[" << setw(1) << i << "] = " << setw(1) << t[i] << "; ";
	if (i < numberOfElements - 1)
		PrintArray(t, numberOfElements, i + 1);
	else
		cout << endl;
}

int CountElements(int* t, int numberOfElements, int count, int i) {
	if (i < numberOfElements) {
		if (!(t[i] >= 0 && t[i] % 2 == 0)) {
			count++;
		}
		return CountElements(t, numberOfElements, count, i + 1);
	}
	return count;
}

int SumElements(int* t, int numberOfElements, int sum, int i) {
	if (i < numberOfElements) {
		if (!(t[i] >= 0 && t[i] % 2 == 0)) {
			sum += t[i];
		}
		return SumElements(t, numberOfElements, sum, i + 1);
	}
	return sum;
}

void TurnToZero(int* t, int numberOfElements, int i) {
	if (i < numberOfElements) {
		if (!(t[i] >= 0 && t[i] % 2 == 0)) {
			t[i] = 0;
		}
		TurnToZero(t, numberOfElements, i + 1);
	}
}