#include <iostream>
using namespace std;
////////////////////MULTIPLE INHERITANCE\\\\\\\\\\\\\\\\\\

/*
Syntax for deriving a class in multiple inheritance
class derivedC : visibility-mode Base1, visibility-mode Base2
{
    class body of class "derivedC"
}; 
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int c)
    {
        base3int = c;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The value of Base3 is " << base3int << endl;
        cout << "The sum of above values is " << base1int + base2int + base3int << endl;
    }
};
int main()
{
    Derived D;
    D.set_base1int(5);
    D.set_base2int(10);
    D.set_base3int(20);
    D.show();
    return 0;
}