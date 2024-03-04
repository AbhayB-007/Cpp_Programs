///////////////////  MULTI-LEVEL INHERITANCE  \\\\\\\\\\\\\\\\\\\

#include <iostream>
using namespace std;

class Student
{

protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }

    void get_roll_number()
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

/*
For a protected members:
                Public Derivation   Private Derivation   Protected Derivation
1. Private M.    not inherited        not inherited         not inherited
2. Public M.     public members       private members       protected
3. Protected M.  protected            private members       protected
*/

/////////////////////CLASS EXAM INHERITED FROM CLASS STUDENT //////////////////////

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void get_marks()
    {
        cout << "The marks obtained in maths:" << maths << endl;
        cout << "The marks obtained in physics:" << physics << endl;
    }
};

//////////////DERIVING A CLASS FROM ALREADY DERIVED CLASS\\\\\\\\\\\\\\\\\\\\\

class Result : public Exam
{
    float percentage;

public:
    void Display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << ((maths + physics) / 200) * 100 << "%" << endl;
    }
};
int main()
{
    Result abhay;
    abhay.set_roll_number(1);
    abhay.set_marks(60, 90);
    abhay.Display();

    return 0;
}