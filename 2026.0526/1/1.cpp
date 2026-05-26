
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream inputfile("readme.txt");
	char str[100];

	if (!inputfile)
	{
		cerr<< "Error opening file!" << endl;
		return -1;
	}
	while (inputfile)
	{
		inputfile.getline(str, 100);
		cout << str << endl;
	}
	inputfile.close();
}

