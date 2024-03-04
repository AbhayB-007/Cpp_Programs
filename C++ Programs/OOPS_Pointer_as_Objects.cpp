/*------------------ Pointers As Objects -------------------*/
#include<iostream>
using namespace std;
class students
{
    int id;
    string name;

public:
    void getData()
    {
        cout << "---------------------------------------" << endl;
        cout << "1. Id of the student is :- " << id << endl;
        cout << "2. Name of the student is :- " << name << endl;
        cout << "---------------------------------------" << endl
             << endl;
        }

        void setData(int a, string b)
        {
            id = a;
            name = b;
        }
};
int main()
{
    // complex c1;  
    // complex *ptr = &c1;
    // (*ptr).setData(4, 5); is exactly same as 
    // ptr->setData(4,5);
    // (*ptr).getData(); is exactly same as 
    // ptr->getData();

    int n = 3, i, a1;
    string b1;
    students *ptr = new students[n];
    students *ptrtemp = ptr;
    for (int i = 0; i < n; i++)
    {
        cout << ">>> Enter the Id and Name of student " << i + 1 << endl;
        cout << " ID : ";
        cin >> a1;
        cout << " Name : ";
        cin >> b1;
        ptr->setData(a1, b1);
        ptr++;
        
    }
    ptr-=3;
    
    for ( i = 0; i < n; i++)
    {
        cout << "---------------------------------------" << endl;
        cout << ">>> Details of student " << i + 1 << endl;
        ptr->getData();
        ptr++;
    }
      
    return 0;
}