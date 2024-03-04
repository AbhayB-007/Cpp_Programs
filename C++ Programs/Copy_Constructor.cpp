#include <iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        // When no copy constructor founds, compiler suplies its copy constructor to every class.
        Number(Number &obj){ 
            cout << "Copy constructor called  !!!!!....... " << endl;
            a = obj.a;
        }
   void display (){
       cout << "The number for this object is " << a << endl;
   }
};

int main()
{
    int x2;
    cout << "enter the value of x2 " << endl;
    cin >> x2;
    // x1 = x2;
    Number x;
    // x = Number(x2);
    Number y, z,z2;
    y.display();
    z.display();
   
    Number x1(x);
    x1.display();

    Number z1(z);  //copy constructor invoked 
    z1.display();

    z2 = z;
    z2.display();

    Number z3 = z;   //copy constructor invoked 
    z3.display();

    return 0;
}



