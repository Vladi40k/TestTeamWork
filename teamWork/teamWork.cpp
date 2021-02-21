#include <iostream>
#include <algorithm>
using namespace std;

int Max() {
    int arr[10] = { 1, 3, 2, 4, 8, 11, 3, 3, 8, 7 };
    int max = arr[0];

    for (int i = 0; i < 10; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << max << endl;
    return max;
}

int Min() {
    int arr[10] = { 1, 3, 2, 4, 8, 11, 3, 3, 8, 7 };
    int min = arr[0];

    for (int j = 0; j < 10; ++j) {
        if (arr[j] < min) {
            min = arr[j];
        }
    }

    cout << min << endl;
    return min;
}

int main()
{
    Max();
    Min();
}


