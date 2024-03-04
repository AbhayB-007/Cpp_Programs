#include <iostream>
using namespace std;

template <class F>
class vector
{
public:
    F *arr;
    int size;
    // vector() {}
    vector(int m)
    {
        size = m;
        arr = new F[size];
    }
    F dotProduct(vector &vec2)
    {
        F d = 0;
        for (int i = 0; i < size; i++)
        {
            d += (*this).arr[i] * vec2.arr[i];
        }
        return d;
    }
};

int main()
{
    int a = 0;
    cout << "1. int" << endl;
    cout << "2. float" << endl;
    cout << "Enter your choice : ";
    cin >> a;

    switch (a)
    {
    case 1:
    {
        vector<int> v1(3);
        v1.arr[0] = 4;
        v1.arr[1] = 3;
        v1.arr[2] = 1;
        vector<int> v2(3);
        v2.arr[0] = 1;
        v2.arr[1] = 0;
        v2.arr[2] = 1;
        int a1 = v1.dotProduct(v2);
        cout << "The dot product is : " << a1;
        break;
    }

    case 2:
    {
        vector<float> v3(3);
        v3.arr[0] = 4.1;
        v3.arr[1] = 3.3;
        v3.arr[2] = 1.0;
        vector<float> v4(3);
        v4.arr[0] = 1.5;
        v4.arr[1] = 0.4;
        v4.arr[2] = 1.4;
        float a2 = v3.dotProduct(v4);
        cout << "The dot product is : " << a2;
        break;
    }

    default:
        cout << " Choose only the mentioned options " << endl;
        break;
    }

    return 0;
}