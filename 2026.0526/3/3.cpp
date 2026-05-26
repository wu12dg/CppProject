#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "请输入第" << i + 1 << "个整数：";
		cin >> num[i];
	}
	ofstream outfile("numbers.txt");
	if (!outfile)
	{
		cerr << "Error opening file!" << endl;
		return -1;
	}
	for (int i = 0; i < 10; i++)
	{
		outfile << num[i] << endl;
	}
	outfile.close();
}

