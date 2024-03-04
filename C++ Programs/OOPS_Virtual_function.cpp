/*------------------ Virtual Function ---------------*/
#include<iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    virtual void display() 
    {
        cout << "Base class" << endl;
        cout << "Displaying Base class variable var_base :- " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
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
    obj_derived.var_derived = 120;
    obj_derived.display();

    //using base class pointer 
    base_class_pointer->var_base = 30;
    obj_derived.var_derived = 300;
    base_class_pointer->display();
    return 0;
}
/*Virtual Function is used to bind the the function at run time with the object used to invoke the function.
Rules for virtual Functions 
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual function can be friend of another class.
4. A virtual function in base class might not be used.
4. A virtual function is defined in a base class, there is no necessity of redefining it in the derived class.

*/










