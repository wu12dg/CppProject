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
	int score;

public:
	Student(char s,string n1,int sc) {
		sex = s;
		name1 = n1;
		score = sc;
	}

};//jkgkgk
class Draduate :public Teacher, public Student {
protected:
public:
};

int main()
{



	return 0;
}
