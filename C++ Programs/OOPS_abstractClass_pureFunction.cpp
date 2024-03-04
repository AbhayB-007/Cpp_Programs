#include <iostream>
using namespace std;
/*
  Abstract Base class and Pure Virtual function
<---------------------------------------------->
1. Abstarct base is created to derive further classes and perform various operation on them.
2. Abstract class and pure virtual function bath are related.
3. It is designed for inheriting classes not used for creating its objects.
4. Abstarct bass class contain atleast one pure virtual functions.
*/

class BaseClass
{

public:
    int var_base;
    // virtual void display1() = 0; //do nothing function --> pure virtual function
    virtual void display()       //virtual function
    {
        cout << "Base class" << endl;
        cout << "Displaying Base class variable var_base :- " << var_base << endl;
    }
};

class DerivedClass : public virtual BaseClass
{
public:
    int var_derived;
    void display1()
    {
        cout << "Derived Class" << endl;
        cout << "Displaying Base class variable var_base :- " << var_base << endl;
        cout << "Displaying Base class variable var_derived :- " << var_derived << endl;
    }
    void display()
    {
        cout << "Derived Class" << endl;
        cout << "Displaying Base class variable var_base :- " << var_base << endl;
        cout << "Displaying Base class variable var_derived :- " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;

    //function of derived class invoked by using its object
    // obj_derived.var_base = 120;
    obj_derived.display();

    //using base class pointer
    base_class_pointer->var_base = 30;
    obj_derived.var_derived = 300;
    base_class_pointer->display();
    // base_class_pointer->display1();
    return 0;
}