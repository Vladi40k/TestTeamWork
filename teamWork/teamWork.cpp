#include <iostream>

using namespace std;

int main()
{
	int minRandVal = 123;
	int maxRandVal = 500000;

	int result = minRandVal + rand() % maxRandVal;

    int arr[10] = { 2,34,3,2,4,42,2,3,4,37 };

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}
