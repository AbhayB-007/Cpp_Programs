//INHERITANCE IN C++
#include <iostream>
using namespace std;
// base class
class Employee
{
protected:
    int a1;
    static int a;

public:
    Employee() {}
    Employee(int o1)
    {
        a1 = o1;
        cout << "Base class Employee constructor called" << endl;
    }
    void printData()
    {
        cout << "the value of a1 is " << a1 << endl;
    }
};

int Employee :: a = 100;
// Derived class syntax
/* class{{derived-class-name}}:{{visibility mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Visibility Mode:- how we can inherit members of base class
1. Default visibility mode is private
2. Public visiblity mode: Public members of the base class becomes public members of the derived class
3. Private visiblity mode: Public members of the base class becomes private members of the derived class
4. Private member of base class will never be inherited in derived class.
*/
//Creating a Programmer class derived from Employee Base class

class Programmer : public virtual Employee
{
protected:
    int b1;

public:
    Programmer() {}
    Programmer(int o2)
    {
        b1 = o2;
        cout << "Base class Programmer constructor called" << endl;
    }
    void printData()
    {
        cout << "the value of b1 is " << b1 << endl;
    }
};

class Assistant : public Programmer, public virtual Employee
{
protected:
    int c1, c2;

public:
Assistant(){}
    Assistant(int a, int b, int c, int d) : Employee(a), Programmer(b)
    {
        c1 = c;
        c2 = d;
        cout << "Derived class Assistant constructor called " << endl;
    }
    void printData()
    {
        cout << "the value of c1 is " << c1 << endl;
        cout << "the value of c2 is " << c2 << endl;
    }
};

int main()
{
    Assistant C;
    C = {5, 6, 4, 8};
    C.Employee::printData();
    C.Programmer::printData();
    C.Assistant::printData();

    return 0;
}