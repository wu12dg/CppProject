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
	float score;

public:
	Student(char s,float sc) {
		sex = s;
		score = sc;
	}

};
class Graduate :public Teacher, public Student {
protected:
	int wage;
public:
	Graduate(string n, int a, string t, char s, float sc,int w):Teacher(n,a,t),Student(s,sc),wage(w){}
	void show() {
		cout << "姓名：" << name << "\n 年龄：" << age << "\n 职称：" << title << "\n 性别：" << sex << "\n 分数:" << score << "\n 津贴" << wage << endl;
	}
};

int main()
{
	Graduate gra1( "张三", 21, "讲师", 'M', 92.5f, 1000);
	gra1.show();

	return 0;
}
