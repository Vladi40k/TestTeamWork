#include <iostream>

using namespace std;


int random(int minRandVal, int maxRandVal) {
	return minRandVal + rand() % maxRandVal;
}


int main()
{
    int arr[10] = { 2,34,3,2,4,42,2,3,4,37 };

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}
