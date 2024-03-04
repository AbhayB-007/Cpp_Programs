#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int swap(int a[], int b[])
{
    int temp;
    temp = a[0];
    a[0] = b[1];
    b[1] = temp;
    return 0;
}

int _max(int a, int b)
{
    return (a > b) ? a : b;
}

int _min(int a, int b)
{
    return (a > b) ? b : a;
}

// int random(int a)
// {
//     srand(time(0));
//     return rand() % a;
// }

int Tax_calc()
{
    int ch;
    double tax = 0, income;
    cout << "\nEnter your salary on :-";
    cout << "\n1). Monthly Basis" << endl;
    cout << "2). Annual Basis" << endl;
    cout << "enter your choice : ";
    cin >> ch;
    if (ch == 2)
    {
        cout << "\nEnter your Annual income in lakh : ";
        cin >> income;
    }
    else
    {
        cout << "\nEnter your Monthly income : ";
        cin >> income;
        income *= 12;
        income /= 100000;
    }

    if (income <= 2.5)
    {
        tax += income * 0;
    }
    else if (income <= 5.0)
    {
        tax += 2.5 * 0;
        tax += (income - 2.5) * 0.05;
    }
    else if (income <= 10)
    {
        tax += 2.5 * 0;
        tax += 2.5 * 0.05;
        tax += (income - 5.0) * 0.2;
    }
    else
    {
        tax += 2.5 * 0;
        tax += 2.5 * 0.05;
        tax += 2.5 * 0.2;
        tax += (income - 7.5) * 0.3;
    }

    cout << "Your Annual Income is " << income << " L" << endl;
    cout << "Tax u have to pay according to your income is " << tax * 100000 << endl;
    return 0;
}

int main()
{
    // int a = ~1;
    // int b = 4 << 1;
    // int b1 = 4 >> 1;
    // cout << b << " " << a << " " << b1;
    // cout << random(6);
    // cout << "\nMax no is : " << _max(100, 20);
    // cout << "\nMin no is : " << _min(100, 20);
    // int a1;
    // cout << a1;
    // Tax_calc();

    // cout << "Abhay" << endl;
    // int a;
    // cout << "Range of int from " << pow(-2, (8 * sizeof(a)) - 1) <<" to "<< pow(2, (8 * sizeof(a)) - 1) - 1
    //      << endl;
    // cout << typeid(a).name();

    // int a;
    // char str;
    // cin >> a>>str;
    // cin >> str;
    // cout << a << endl;
    // cout << str;


    // int &a = *min_element();

    

    return 0;
}