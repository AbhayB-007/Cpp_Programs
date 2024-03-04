#include <iostream>
using namespace std;

class Base
{
    int data1; //not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    cout << "Enter the value of data 1" << endl;
    cin >> data1;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}
//////////////////////////////////////////////////////////////////////

//class is being derived publically
class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived::process()
{
    setData();
    data3 = data2 * getData1();
    display();
}

void Derived ::display()
{
    cout << "value of data 1 is " << getData1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}
////////////////////////////////////////////////////////////////////////////

int main()
{
    Base abhay2;
    abhay2.setData();
    cout<<abhay2.getData1()<<endl;
    cout<<abhay2.getData2()<<endl;
    Derived abhay;
    // abhay.setData();
    abhay.process();
    // abhay.display();
    return 0;
}