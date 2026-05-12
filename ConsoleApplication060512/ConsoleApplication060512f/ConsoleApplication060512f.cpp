#include <iostream>
using namespace std;
class Animal {
public:
	virtual void makeSound() const{
		cout << "动物会发出声音" << endl;
	}
};
class Dog :public Animal {
	void makeSound() {
		cout << "汪汪" << endl;
	}
};
class Cat :public Animal {
public:
	void makeSound() {
		cout << "喵喵" << endl;
	}
};
//统一接口,对象引用
void LetItSpeak(const Animal& animal) {
	animal.makeSound();
}

int main()
{
	Animal animal;
	Cat cat;
	Dog dog;

	Animal* p = &animal;
	p->makeSound();
	p = &cat;
	p->makeSound();
	p = &dog;
	p->makeSound();

	cout << "------------------" << endl;

	return 0;
}