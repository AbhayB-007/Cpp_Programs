#include <iostream>
#include <cmath>
using namespace std;

class simple_calc
{
protected:
    float a, b;
    int op;

public:
    void setData()
    {
        system("cls");
        cout << "\t\tSimple Calculator" << endl;
        cout << "______________________________________________________" << endl;
        cout << "NOTE : Only +,-,*,/ operations can be applicable. " << endl;
        cout << "______________________________________________________" << endl;
        cout << "\nEnter the first operand : ";
        cin >> a;
        cout << "\nEnter the second operand : ";
        cin >> b;
        cout << "\n______________________________________________________" << endl;
        cout << "\t\tSelect the operation" << endl;
        cout << "______________________________________________________" << endl;
        cout << "\n1). Add(+) \n2). Subtract(-) \n3). Multiply(*) \n4). Divide(/)" << endl;
        cout << "\nEnter your choice : ";
        cin >> op;
        cout << "\n______________________________________________________" << endl;
    }
    void Display()
    {
        if (op == 1)
        {
            cout << "Ans -> " << a + b << endl;
        }
        else if (op == 2)
        {
            cout << "Ans -> " << a - b << endl;
        }
        else if (op == 3)
        {
            cout << "Ans -> " << a * b << endl;
        }
        else if (op == 4)
        {
            cout << "Ans -> " << a / b << endl;
        }
        else
        {
            cout << "Select only the mentioned operators" << endl;
        }
        cout << "______________________________________________________" << endl;
    }
};

class scientific_calc
{
protected:
    int a, b;
    int op;

public:
    void setData()
    {
        system("cls");
        cout << "\t\t\tScientific Calculator" << endl;
        cout << "_______________________________________________________________________________" << endl;
        cout << "NOTE : Only sin(a+b),sin(a-b),cos(a+b),cos(a-b) operations can be applicable." << endl;
        cout << "_______________________________________________________________________________" << endl;
        cout << "\nEnter the first operand : ";
        cin >> a;
        cout << "\nEnter the second operand : ";
        cin >> b;
        cout << "_______________________________________________________________________________" << endl;
        cout << "\t\t\tSelect the operation" << endl;
        cout << "_______________________________________________________________________________" << endl;
        cout << "\n1). sin(a+b) \n2). sin(a-b) \n3). cos(a+b) \n4). cos(a-b)" << endl;
        cout << "\nEnter your choice : ";
        cin >> op;
        cout << "\n_______________________________________________________________________________" << endl;
    }

    void Display()
    {
        if (op == 1)
        {
            cout << "Ans->" << sin(a + b) << endl;
        }
        else if (op == 2)
        {
            cout << "Ans->" << cos(a + b) << endl;
        }
        else if (op == 3)
        {
            cout << "Ans->" << sin(a - b) << endl;
        }
        else if (op == 4)
        {
            cout << "Ans->" << cos(a - b) << endl;
        }
        else
        {
            cout << op << "Select only the mentioned option" << endl;
        }
        cout << "_______________________________________________________________________________" << endl;
    }
};

class hybrid_calc : public simple_calc, public scientific_calc
{
    int a;

public:
    hybrid_calc()
    {
        string c;
    loop:
        system("cls");
        cout << "\t\tSelect the calculator" << endl;
        cout << "______________________________________________________" << endl;
        cout << "\n1). Simple Calculator" << endl
             << "\n2). Scientific Calculator" << endl;
        cout << "\nEnter your choice : ";
        cin >> a;
        // cout << "\n______________________________________________________" << endl;
        switch (a)
        {
        //Simple Calculator
        case 1:
            simple_calc::setData();
            simple_calc::Display();
            break;
        //Scientific Calculator
        case 2:
            scientific_calc::setData();
            scientific_calc::Display();
            break;
        default:
            cout << "______________________________________________________" << endl;
            cout << "\nNo option exists.\nSelect only the mention one." << endl;
            cout << "______________________________________________________" << endl;
            break;
        }

        cout << "Want to Exit the Calculator (y/N)? : ";
        fflush(stdin);
        getline(cin, c);
        if (c != "y")
            goto loop;
    }
};

int main()
{
    hybrid_calc o1;
    return 0;
}