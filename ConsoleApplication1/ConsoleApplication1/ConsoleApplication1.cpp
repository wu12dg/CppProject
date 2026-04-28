#include <iostream>
using namespace std;
#include<string>
class Person {
protected:
	string name;
	int age;
	char sex;
public:
	Person(string n, int a, char s) {
		name = n;
		age = a;
		sex = s;
	}
};
class Teacher :virtual public Person {
protected:
	string title;
public:
	Teacher(string n, int a, char s, string t):Person(n,a,s){
		title = t;
	}
};
class Student :virtual public Person {
protected:
	float score;
public: 
	Student(string n,int a,char s,float sc):Person(n,a,s),score(sc){}

};
/*class Teacher {
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

};*/
class Graduate :public Teacher, public Student {
protected:
	int wage;
public:
	Graduate(string n,int a,char s,float sc,int w):Person(n,a,s),Teacher(n,a,s,t),Student(n,a,s,sc),wage(w){}

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
