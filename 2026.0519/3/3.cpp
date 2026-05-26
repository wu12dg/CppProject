
#include <iostream>
using namespace std;
int main()
{
    char str[20];
    cin >> str;
    for (int i = strlen(str);i >= 0;i--) {
        cout.put(str[i]);
    }
    cout << endl;
    return 0;
}