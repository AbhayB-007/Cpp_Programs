#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with name as of the class.
    // It is used to initializ the objects of its class.
    // It is automatically invoked whenever an object is created.
    complex(int a, int b) //contructor defined
    {
        this->a = a;
        this->b = b;
        cout << "hello world" << endl;
    }

    void input(int a1, int b1)
    {
        a = a1;
        b = b1;
        cout << "The value of a = " << a << " and b = " << b << endl;
    }
    void printNumber()
    {
        cout << "The value of a is " << a << " and b is " << b << endl;
    }
};


int main()
{
    complex c1(2, 3), c2(4, 5), c3(6, 7);
    complex obj(50, 100);

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    obj.input(50, 100);

    return 0;
}
/* Properties of constructor 
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the objects is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/