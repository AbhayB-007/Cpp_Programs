#include <iostream>
using namespace std;

class Base1
{
public:
    void Greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void Greet()
    {
        cout << "Kaise Hoo?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void Greet()
    {
        Base1::Greet();
    }
};
////////////////////////////////////////////////////////////////////////////////////
class B
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};

class D : public B
{
public:
    void say()
    {
        B::say();
        cout << "hello my beautiful people" << endl;
    }
};

int main()
{
    // Ambiguity1

    // Base1 b1;
    // Base2 b2;
    Derived d1;
    // b1.Greet();
    // b2.Greet();
    d1.Greet();
    //Ambiguity2
    B b;
    D d;
    d.  say();

    return 0;
}