
#include <iostream>
using namespace std;
#include<string>
class Family {
private:
	string flowers;
public:
	Family(string name="鲜花") {
		flowers = name;
	}
	string getname() {
		return flowers;
	}
	virtual void like() {
		cout << "家人喜欢不同的花" << endl;
	}
};
class Father :public Family {
public:
	Father(string name="仙人掌"):Family(name){}
	void like() {
		cout << "爸爸喜欢" << getname() << endl;
	}
};
class Mother :public Family {

};
class Daught :public Family {

};
//全局函数likeFlower
void likeFlower(Family *pr) {
	pr->like();
}
int main()
{
	Family fa, * p;
	Father f; 
	p = &fa;
	p->like();
	p = &f;
	p->like();

	cout << "使用普通函数调用虚函数：" << endl;
	likeFlower(&fa);
	likeFlower(&f);
	return 0;
}
