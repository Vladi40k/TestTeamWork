#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream config("..\\teamWork\\config.txt");
	if (!config.is_open())
		std::cout << "Confige file not open\n";
	
	string initial_str;
	getline(config, initial_str);
	string confSize;
	getline(config, confSize);
	string end_str;
	getline(config, end_str);

	config.close();
	
	cout << initial_str << '\n';

	size_t arrStartLen = stoi(confSize);

    int arr[10] = { 2,34,3,2,4,42,2,3,4,37 };

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	std::cout << end_str << '\n';
}
