#include<iostream>
using namespace std;
//CLASS TEMPLATES WITH DEFAULT PARAMETERS
template <class T1=int, class T2=float, class T3=char>
class abhay
{
    public:
        T1 a;
        T2 b;
        T3 c;
        abhay(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
        }
};


int main()
{
    abhay<float, char, int> obj(8.564, 'c', 56);
    obj.display();
    return 0;
}