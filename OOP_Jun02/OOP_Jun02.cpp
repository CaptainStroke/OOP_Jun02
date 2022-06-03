//ДЗ:
//добавить в класс поле ЗапасЭнергии(интовое поле со значением от 0 до 100, 0 - кошка сдохла,
//  100 - кошка полна сил и энергии)
//если кошка поела, то её запас энергии увеличивается на 10 единиц  (прежние инструкции не удаляем - кошка
// перестаёт быть голодной и она становится тяжелее), но при этом не может быть больше 100 единиц
//добавить кошке метод Speak - в этом методе кошка говорит МЯУ
//после того как кошка поест, она довольно говорит МЯУ(вызвать метод спик).
//до понедельника это маленькое задание нужно обязательно сделать!!

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
    int RemEnergy;
    bool is_alive;

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
    void Purpur()
    {
        cout << "MYAO\n";
    }
    void Eat()
    {
        cout << name << " is eating\n\n";
        weight += 0.2;
        is_hungry = true;
        RemEnergy += 50;
        Purpur();//one purpur if happy
    }
    void Starving()
    {
        cout << name << " is starving\n\n";
        weight -= 0.5;
        is_hungry = false;
        RemEnergy -= 34;
        Purpur(); 
        Purpur();
        Purpur();//3 times when angry and hungry
    }
   
    void Print()
    {
        if (RemEnergy > 100) RemEnergy = 100;
        else if (RemEnergy < 0) RemEnergy = 0;
        cout << "Name " << name << "\n";
        //cout << color << " color\n";
        //cout << age << " years\n";
        cout << "Weight " << weight << "\n";
        if (is_hungry != 1) cout << "Is hungry\n\n";
        else cout << "Is not hungry\n\n";
        if (RemEnergy > 0) cout <<"Energy - " << RemEnergy << ". Cat is alive\n";
        else cout << "Cat is DEAD\n";
    }
};

int main()
{
    Cat cat;
    cat.name = "Barsik";
    cat.color = "Grey";
    cat.age = 3;
    cat.weight = 8;
    cat.RemEnergy = 90;

    //cat.Purpur();
    cat.Print();
    cat.Eat();
    cat.Print();
    cat.Starving();
    cat.Print();
    cat.Starving();
    cat.Eat();
    cat.Print(); 
    cat.Print();
    cat.Starving();
    cat.Print();
    cat.Starving();
    cat.Print();
    cat.Starving();
    cat.Print();
}

//#include <iostream>
//using namespace std;
//
//class Cat
//{
//public: // модификатор доступа, если не указать public, то будет private, и компоненты класса будут недоступны.
//  // поля:
//    string name; // кличка кота
//    string color; // цвет шёрстки
//    int age; // возраст в годах
//    double weight; // вес
//    bool is_hungry; // голодный или нет?
//
//    // методы:
//    void Play()
//    {
//        cout << name << " is playing\n";
//    }
//
//    void Sleep()
//    {
//        cout << name << " is sleeping\n";
//    }
//
//    void Hunt()
//    {
//        cout << name << " is hunting\n";
//    }
//    void Eat()
//    {
//        cout << name << " is eating\n\n";
//        weight += 0.2;
//        is_hungry = true;
//    }
//    void Starving()
//    {
//        cout << name << " is starving\n\n";
//        weight -= 0.5;
//        is_hungry = false;
//    }
//    void Print()
//    {
//        cout << "Name " << name << "\n";
//        cout << color << " color\n";
//        cout << age << " years\n";
//        cout << "Weight " << weight << "\n";
//        if (is_hungry != 1) cout << "Is hungry\n\n";
//        else cout << "Is not hungry\n\n";
//    }
//};
// 
//int main()
//{
//    Cat cat;
//    cat.name = "Barsik";
//    cat.color = "Grey";
//    cat.age = 3;
//    cat.weight = 8;
//    
//    cat.Print();
//    cat.Eat();
//    cat.Print();
//    cat.Starving();
//    cat.Print();
//}
