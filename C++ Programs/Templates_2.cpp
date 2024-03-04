#include <iostream>
using namespace std;
/*
Syntax
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)
template <class T1, class T2......(COMMA SEPERATED)>
class nameOfClass
{
    class body
}
*/
template <class T1, class T2>   //Here I have defined a Template
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "The value of data1 is : " << data1 << endl
             << "The value of data2 is : " << data2 << endl;
    }
};
int main()
{
    int a;
    cout << "1. int, int" << endl;
    cout << "2. float, int" << endl;
    cout << "3. char, double" << endl;
    cout << "enter your choice : ";
    cin >> a;
    switch (a)
    {
    case 1:
    {
        myClass<int, int> obj1(5, 8);
        obj1.display();
        break;
    }
    case 2:
    {
        myClass<float, int> obj2(5.465, 45);
        obj2.display();
        break;
    }
    case 3:
    {
        myClass<char, double> obj3('c', 6.5453);
        obj3.display();
        break;
    }
    default:
        cout << "Only choose the mentioned option" << endl;
        break;
    }
    return 0;
}