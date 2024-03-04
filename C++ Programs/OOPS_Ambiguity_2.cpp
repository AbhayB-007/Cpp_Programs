#include <iostream>
using namespace std;

/*
            {Student}
     {Test}<----|----->{Sports}     
        |________________|
                |
             {Result}
*/
class Student
{
protected:
    int roll_no;
public:
    void set_roll_number(int a)
    {
        roll_no = a;
    }
    void print_roll_number()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};
///////////////////////////////////////////////////////////////////////
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "Your result is here" << endl
             << "Maths:" << maths << endl
             << "Physics:" << physics
             << endl;
    }
};
/////////////////////////////////////////////////////////////////////////
class Sports : public virtual Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};
/////////////////////////////////////////////////////////////////////////
class Result : public Test, public Sports
{
protected:
    int total;
public:
    void display()
    {
        total = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << "Your total score is :" << total << endl;
    }
};

int main()
{
    Student s;
    Result r;
    r.set_roll_number(1);
    r.set_marks(50, 60.5);
    r.set_score(100);
    r.display();
    return 0;
}