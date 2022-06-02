//#include <iostream>
//#include <string>
//using namespace std;
//
//class Cat
//{
//public:
//	// поля:
//	string name; // кличка кота
//	double weight; // вес
//	bool is_hungry; // голодный или нет?
//	// метод:
//	void Sleep()
//	{
//		cout << name << " спит.";
//	}
//};
//
//int main()
//{
//	setlocale(0, "");
//	Cat c;
//	c.name = "Tomochka";
//	c.is_hungry = true;
//	c.weight = 5;
//	c.Sleep();
//}

#include <iostream>
using namespace std;

class Cat
{
public: // модификатор доступа, если не указать public, то будет private, и компоненты класса будут недоступны.
  // поля:
    string name; // кличка кота
    string color; // цвет шёрстки
    int age; // возраст в годах
    double weight; // вес
    bool is_hungry; // голодный или нет?

    // методы:
    void Play()
    {
        cout << name << " is playing\n";
    }

    void Sleep()
    {
        cout << name << " is sleeping\n";
    }

    void Hunt()
    {
        cout << name << " is hunting\n";
    }
    void Eat()
    {
        cout << name << " is eating\n\n";
        weight += 0.2;
        is_hungry = true;
    }
    void Starving()
    {
        cout << name << " is starving\n\n";
        weight -= 0.5;
        is_hungry = false;
    }
    void Print()
    {
        cout << "Name " << name << "\n";
        cout << color << " color\n";
        cout << age << " years\n";
        cout << "Weight " << weight << "\n";
        if (is_hungry != 1) cout << "Is hungry\n\n";
        else cout << "Is not hungry\n\n";
    }
};
 
int main()
{
    Cat cat;
    cat.name = "Barsik";
    cat.color = "Grey";
    cat.age = 3;
    cat.weight = 8;
    
    cat.Print();
    cat.Eat();
    cat.Print();
    cat.Starving();
    cat.Print();
}