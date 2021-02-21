#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <fstream>

using namespace std;

queue<string> configurate(const char* path)
{
	queue<string> res;
	string tmp;
	ifstream config(path);
	if (!config.is_open())
		throw new exception("config file not open");
	else
	{
		while (!config.eof())
		{
			getline(config, tmp);
			res.push(tmp);
		}
	}
	config.close();
	return res;
}

int main()
{
	queue<string> conf = configurate("..\\teamWork\\config.txt");
	cout << conf.front() << '\n'; conf.pop();
	size_t arrStartLen = stoi(conf.front()); conf.pop();

	int maxRandSize = stoi(conf.front()); conf.pop();
	int minRandSize = stoi(conf.front()); conf.pop();

    int arr[10] = { 2,34,3,2,4,42,2,3,4,37 };

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	std::cout << conf.front() << '\n'; conf.pop();
}
