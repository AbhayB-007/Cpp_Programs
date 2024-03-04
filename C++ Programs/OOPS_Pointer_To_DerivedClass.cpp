/*-------------- Pointer to Derived Class -----------*/
#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};


class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Derived Class" << endl;
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Base class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class

    base_class_pointer->var_base = 30;
    // base_class_pointer->var_derived = 130; will throw error 
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 120;
    derived_class_pointer->var_base = 16520;
    derived_class_pointer->display();


    return 0;
}