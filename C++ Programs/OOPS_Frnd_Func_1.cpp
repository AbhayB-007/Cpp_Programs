#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
    /*By default it sets as private variables and functions*/
    int a;
    int b;
    friend complex setDataBySum(complex, complex);

public:
   void setData(int v1, int v2)
    {
        a = v1;
        b = v2;       
    }
    void printNumber()
    {
        cout << " your complex number is " << a << " + " << b << "i" << endl;
    }
};
    
complex setDataBySum(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
} 

int main()
{
    complex c1, c2, sum;
    c1.setData(1,3);
    c1.printNumber();

    c2.setData(2,4);
    c2.printNumber();
    
    sum = setDataBySum(c1, c2);
    sum.printNumber();
    return 0;
}

/*Properties of friend functions
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid.
3. Can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/