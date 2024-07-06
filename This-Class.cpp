#include <iostream>
#include <string>
using namespace std;

class MyClass {
public:
	MyClass()
	{
		// Конструктор без параметров
	}
	MyClass(int Value)
	{
		// Конструктор с параметром
	}
	void Print()
	{
		cout << this << endl;

	}
};

int main()
{
	
	MyClass obj1; // Конструктор без параметра вызывается 
	MyClass obj2(10); // Конструктор с параметром вызывается
	MyClass* obj3 = new MyClass(10); // Параметры вызываются
	obj2.Print();
	obj3->Print();
	delete obj3;

	return 0;
}
