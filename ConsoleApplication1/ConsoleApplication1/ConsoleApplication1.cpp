#include <iostream>
using namespace std;
#include<string>
class Teacher {
protected:
	string name;
	int age;
	string title;
public:
	Teacher(string n,int a,string t) {
		name = n;
		age = a;
		title = t;
	}

};
class Student {
protected:
	char sex;
	string name1;
	float score;

public:
	Student(char s,string n1,float sc) {
		sex = s;
		name1 = n1;
		score = sc;
	}

};
class Graduate :public Teacher, public Student {
protected:
	int wage;
public:
	Graduate(string n, int a, string t, char s, string n1, float sc,int w):Teacher(n,a,t),Student(s,n1,sc),wage(w){}
	void show() {
		cout << "姓名：" << name << "\n 年龄：" << age << "\n 职称：" << title << "\n 性别：" << sex << "\n 分数:" << score << "\n 津贴" << wage << endl;
	}
};

int main()
{



	return 0;
}
