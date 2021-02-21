#include <iostream>
using namespace std;


int main()
{
    int StartLen;
	int arr[10] = { 2,34,3,2,4,42,2,3,4,37 };
 
    std::cout << "Enter a positive integer: ";
    std::cin >> StartLen;

    int* array = new int[StartLen];
    std::cout << "Integers of StartLen " << StartLen << '\n';

    for (size_t i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
        array[0] = 10; 

        delete[] array; 
        array = 0; 

        return 0;
    }




   
