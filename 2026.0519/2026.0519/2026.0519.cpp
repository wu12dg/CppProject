#include <iostream>
using namespace std;
int main()
{
    double num = 123.456;
    cout.fill('*');//全局的
    cout.width(15);//单次的
    cout << num << endl;
    cout.setf(ios::left);//全局的
    cout.width(15);
    cout << num << endl;
    cout.precision(2);//总有效数字
    cout << num << endl;
    cout.precision(4);//总有效数字
    cout << fixed << cout.precision(2) << endl;
    cout << num << endl;

    return 0;
}
