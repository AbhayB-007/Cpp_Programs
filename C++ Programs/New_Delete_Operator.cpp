#include <iostream>
using namespace std;

int main()
{
    int i1;
    cout << "enter the value of a " << endl;
    cin >> i1;
    int *a = new int(i1);

    cout << "the address of a is " << a << endl;
    cout << "the value of a is " << *a << endl;
    // new is a 'keyword' as well as 'operator'
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    // delete is a 'keyword' as well as 'operator'
    // delete[] arr;
    cout << "The value of arr[0] is " << *(arr) << endl;
    cout << "The value of arr[1] is " << *(arr + 1) << endl;
    cout << "The value of arr[2] is " << *(arr + 2) << endl;

    double *i = new double(10.3226552168);
    cout << "The value of i is " << *i << endl;

    return 0;
}