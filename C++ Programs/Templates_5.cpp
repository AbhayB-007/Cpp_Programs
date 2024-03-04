#include <iostream>
using namespace std;
// // MEMBER FUNCTION TEMPLATES & OVERLOADING TEMPLATES FUNCTIONS

template <class T>
class abhay
{
public:
    T data;
    abhay(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void abhay<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I m first function : " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I m templatised func() value of a is : " << a << endl;
    // cout << "I m templatised func() value of a is : " << a << " and b is : " << b << endl;
}

int main()
{
    // abhay<float> obj(5.7);
    // abhay<int> obj1(5);
    // abhay<char> obj2('c');
    // obj.display();

    func(5); // Exact match takes the highest priority
    func(6.5);

    return 0;
}