#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<string> configurate(const char* path)
{
	vector<string> res;
	string tmp;
	ifstream config(path);
	if (!config.is_open())
		std::cout << "Confige file not open\n";
	else
	{
		while (!config.eof())
		{
			getline(config, tmp);
			res.push_back(tmp);
		}
	}
	config.close();
	return res;
}

int main()
{
	vector<string> conf = configurate("..\\teamWork\\config.txt");
	cout << conf[0] << '\n';

	size_t arrStartLen = stoi(conf[1]);

    int arr[10] = { 2,34,3,2,4,42,2,3,4,37 };

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	std::cout << conf[2] << '\n';
}
