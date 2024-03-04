#include<iostream>
using namespace std;

/*class y;
class x{
    int data;
    public:
        void setValue(int value){
            data = value;   
    }
    friend void add(x, y);
};
class y{
    int num;
    public:
        void setValue(int value){
            num = value;   
    }
    friend void add(x, y);
};

void add(x o1, y o2)
{
    cout << "summing data of x and y objects gives me " << o1.data + o2.num << endl;
}
*/

class c2;
class c1{
    int val1;
    public:
        void indata(int a) {
            val1 = a;
        }
        void display(void){
        cout <<" value 1 = "<< val1 << endl;
        }
        friend int swap(c1 *x, c2 *y);
    
};

class c2{
    int val2;
    public:
        void indata(int b) {
            val2 = b;
        }
        void display(void){
        cout <<" value 2 = "<< val2 << endl;
        }
        friend int swap(c1 *x, c2 *y);
};

int swap(c1 *x, c2 *y){
    int temp;
    temp = (*x).val1;
    (*x).val1 = (*y).val2;
    (*y).val2 = temp;
    return 0;
}



int main()
{
    int x1, y1;
    c1 No1;
    c2 No2;

    cout << "Enter 1st value " << endl;
    cin >> x1;
    
    cout << "Enter 2nd value " << endl;
    cin >> y1;
    
    No1.indata(x1);
    No2.indata(y1);

    cout << "Values before swaping are" << endl;
    No1.display();
    No2.display();

    swap(&No1, &No2);
    cout << "Value after swaping are "<< endl;
    No1.display();
    No2.display();

    return 0;
}
