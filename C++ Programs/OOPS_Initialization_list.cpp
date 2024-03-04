/*-------------- INITIALIZATION LIST ---------------*/
#include <iostream>
#include <bits/stdc++.h>
// #include<iomanip>
using namespace std;

class Test
{
    int a, b;
    int c, d, e;

public:
    // Test(int i, int j):b(i),a(j+a) --->in this garbage value is assigned as value of 'a'
    Test(int i, int j) : a(i * 5), b(j)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
    Test(int a1, int b1, int c1) : c(a1), d(b1), e(c1)
    {
        // c = a1;
        // d = b1;
        // e = c1;
        cout << "\nThe value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

class Cards
{
    int number;

public:
    Cards() {}
    Cards(int Number)
    {
        number = Number;
    }
    int get_number()
    {
        return number;
    }
} a[5];

int main()
{
    // system("cls");
    // Test t(8, 5);
    // Test(52, 32, 94);
    // a[0] = Cards('A');
    // a[1] = Cards(5);
    // a[2] = Cards(8);
    // a[3] = Cards(20);
    // a[4] = Cards(8);
    for (int i = 0; i < sizeof(a) / sizeof(Cards); i++)
    {
        int val;
        cout << "Enter the Value : ";
        cin >> val;
        a[i] = Cards(val);
    }
    for (int i = 0; i < sizeof(a) / sizeof(Cards); i++)
    {
        cout << "Value " << i << " is : ";
        cout << a[i].get_number() << endl;
    }

    // cout << "size : " << sizeof(a) / sizeof(Cards);

    return 0;
}