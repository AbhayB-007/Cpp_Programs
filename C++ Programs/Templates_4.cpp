#include <iostream>
using namespace std;
// FUNCTION TEMPLATES AND FUNCTION TEMPLATES WITH PARAMETERS

template <class T1,class T2>
void Swap(T1 &a, T2 &b)
{
    T1 temp = a;
    a = b;
    b = temp;
}

template < class T1,class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}
 
int main()
{
    // SWAP FUNCTION USING TEMPLATES
    // int x = 5, y = 7;
    // Swap(x, y);
    // cout << "x : " << x << endl
    //      << "y : " << y << endl;

    // AVERAGE OF TWO NUMBERS    
    // cout << "The average of two numbers is : " << funcAverage(6, 5.5) << endl;
    // printf("The average of two numbers is : %.2f", funcAverage(6.5, 5.45));
    return 0;
}