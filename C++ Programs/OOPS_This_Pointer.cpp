/*------------------ This pointer ------------------*/
#include<iostream>
using namespace std;
//this pointer
class A
{
    int a;

public:
    A setData(int a)
    {
        this->a = a; //this = &(object of class A)
        return *this;
    }
    //this is a keyword which points to the object which invokes the member function
    void getData()
    {
        cout << "\n The value of a is : " << a << endl;
    }
};
int main()
{
    A obj;
    obj.setData(5); 
    obj.getData();
    
    return 0;
}