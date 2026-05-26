#include <iostream>
#include< iomanip >
using namespace std;
int main()
{
    int n = 255;
    double pi = 3.141592653;
    cout << "十六进制为：" << hex << showbase << uppercase << n << endl;
    cout << "八进制为：" << oct << showbase << n << endl;
    cout << "pi精确到小数点后两位：" << fixed << setprecision(2)  << pi << endl;
    cout << left << setw(10) << "Name" << "Age" << endl;
    cout << left << setw(10) << "Tom" << 18 << endl;
    cout.put('h').put('i');
    cout << endl;
    cout.write("helllll,ejf", 5);
    return 0;
}
