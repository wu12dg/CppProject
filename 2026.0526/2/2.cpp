#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //定义文件流对象，打开文件
	ofstream outfile("student.txt", ios::in);
//检查文件是否成功打开
	if(!outfile)
	{
		cerr << "Error opening file!" << endl;
		return -1;
	}
	//向文件中写入数据
	outfile << "姓名：李白\n 年龄：19\n专业：虚拟现实\n";
	//关闭文件
	outfile.close();
	cout << "Data written to file successfully!" << endl;
	//读一遍student.txt文件，看看写入的内容
	ifstream infile("student.txt");
	if (!infile)
	{
		cerr << "Error opening file!" << endl;
		return -1;
	}
	char str[100];
	while (infile)
	{
		infile.getline(str, 100);
		cout << str << endl;
	}
	//string str;
	/*while(getline(infile, str))
	{
		cout << str << endl;
	}*/
	infile.close();
}
