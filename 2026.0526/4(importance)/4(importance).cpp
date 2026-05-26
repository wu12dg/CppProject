#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	double arr[6] = { 1.5, 2.8, 3.2, 4.9, 5.1, 6.3 };
	ofstream outfile("data.txt");
	if (!outfile)
	{
		cerr << "Error opening file!" << endl;
		return -1;
	}
	for (int i = 0; i < 6; i++)
	{
		outfile << arr[i] << endl;
	}
	outfile.close();
	ifstream infile("data.txt");
	if (!infile)
	{
		cerr << "Error opening file!" << endl;
		return -1;
	}
	while (infile)
	{
		for (int j = 0; j < 6; j++)
		{
			infile.read((char*)&arr[j], sizeof(arr[j]));
		}
	}
	infile.close();
	for (int k = 0; k < 6; k++)
	{
		cout << arr[k] << endl;
	}
}
