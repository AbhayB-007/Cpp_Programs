#include <bits/stdc++.h>
#include <conio.h>
// #include <iostream>
// #include <string.h>
// #include <stdio.h>
// #include <time.h>
// #include <fstream>
/*--------------------librarian Credentials------------------*/
#define LIB_UN "admin"
#define LIB_PASS "12345"
/*-----------------------------------------------------------*/
using namespace std;

void My_details();

class book
{
protected:
    /*----------------- add_books//view_books_list -----------------------*/
    int book_id;
    string book_name;
    /*-------------- delete,borrow,return ----------------------*/
    int rollno;
    string name;
    int b_id;
    string b_name;
    int issue_date;
    int return_date;
    int date, month, year;

    time_t t = time(NULL); //get the time from os
    struct tm tm = *localtime(&t);

public:
    void add_book()
    {
        int n;
        system("cls");
        cout << "\n_____________________________________________________________________" << endl;
        cout << "---->Enter how many books you want to add " << endl;
        cout << "---->";
        cin >> n;
        n--;
        system("cls");
    loop:
        cout << "_____________________________________________________________________" << endl;
        cout << "\t\t<-----   Add Books   ----->" << endl;
        cout << "_____________________________________________________________________" << endl;
        cout << " Enter the book id " << endl;
        cin >> book_id;
        cout << " Enter the book name " << endl;
        getline(cin >> ws, book_name);
        cout << "_____________________________________________________________________" << endl;

        // writing data into the file or adding books to the list

        ofstream add("book_list.txt", ios::app);    //-->Constructer Method to Open txt file
        // add.open("book_list.txt", ios::app);     //-->Open txt file using Member Function '.open' 
        add << endl;
        add << book_id << endl;
        add << book_name << endl;
        add.close();

        while (n != 0)
        {
            n--;
            system("cls");
            cout << "\n\t\t!!-->>Enter the next book<<--!!" << endl;
            goto loop;
        }

        cout << " Books are added successfully to the list  !!... }:+) \n\n Press any key to go back...";
        getch();
    }

    void delete_book()
    {
        int n;
        int b_id;
        string b_name;

    loop:
        system("cls");
        cout << "_____________________________________________________________________" << endl;
        cout << "\t\t<-----   Delete Books   ----->" << endl;
        cout << "_____________________________________________________________________" << endl;
        cout << " Enter the book id " << endl;
        cin >> b_id;
        cout << " Enter the book name " << endl;
        cin >> b_name;
        cout << "_____________________________________________________________________" << endl;

        ifstream bdata;
        bdata.open("book_list.txt");
        ofstream ndata;
        ndata.open("book_list1.txt");

        bdata >> book_id;
        bdata >> book_name;

        while (!bdata.eof())
        {
            if (book_id != b_id)
            {
                ndata << endl
                      << book_id << endl;
                ndata << book_name << endl;
            }
            else
            {
                cout << "\nRecord deleted successfully from the list  !!... (:+) " << endl;
            }

            bdata >> book_id;
            bdata >> book_name;
        }

        bdata.close();
        ndata.close();

        if (remove("book_list.txt") != 0)
        {
            cout << "\nFile does not remove" << endl;
        }
        else
        {
            cout << "File removed" << endl;
        }
        if (rename("book_list1.txt", "book_list.txt") != 0)
        {
            cout << "File renamed" << endl;
        }
        else
        {
            cout << "File renamed" << endl;
        }

        cout << "Press any key to go back...";
        getch();
    }

    void view_book_list()
    {
        system("cls");
        cout << "___________________________________________________________" << endl;
        cout << "\t\t<----    Book List   ---->" << endl;
        cout << "___________________________________________________________" << endl;
        cout << "---------------------------------------" << endl;
        cout << "\tBook_Id   |   Book_name" << endl;
        cout << "---------------------------------------" << endl;

        ifstream view("book_list.txt");

        if (view.peek() == std::ifstream::traits_type::eof()) //If no books are added in the record.
        {
            cout << "\n No Record found....!!!" << endl;
            cout << "\n Add Books data." << endl;
        }

        else
        {
            view >> book_id;
            view >> book_name;

            while (!view.eof())
            {
                cout << "\t" << book_id << "\t  |\t" << book_name << endl;
                view >> book_id;
                view >> book_name;
            }
            cout << "---------------------------------------" << endl;
            cout << "\n List ends here...!!" << endl;
        }
    }
    void borrow_book()
    {
        int n;
        system("cls");
        cout << "\n_____________________________________________________________________" << endl;
        cout << "---->Enter how many books you want to Borrow : " << endl;
        cout << "---->";
        cin >> n;
        n--;

        year = tm.tm_year + 1900;
        month = tm.tm_mon + 1;
        date = tm.tm_mday;
        system("cls");
    loop:
        cout << "_____________________________________________________________________" << endl;
        cout << "\t\t<-----   Borrow a book   ----->" << endl;
        cout << "_____________________________________________________________________" << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "NOTE : You can borrow a book for only for 15 days.So return it \nwithin the duration of time unlees fine of Rs. 500 will be charged " << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Enter your Roll No. : ";
        cin >> rollno;
        cout << endl
             << "Enter you name : ";
        cin >> name;
        cout << endl
             << "Enter the ID of the book you want : ";
        cin >> b_id;
        cout << endl
             << "Enter the book name : ";
        cin >> b_name;

        //Adding students info. who have borrowed a book to the list
        ofstream sdata;
        sdata.open("borrow_book_list.txt", ios::app);
        sdata << endl
              << rollno << endl;
        sdata << name << endl;
        sdata << b_id << endl;
        sdata << b_name << endl;
        sdata << date << endl;
        sdata << month << endl;
        sdata << year << endl;

        sdata.close();

        while (n != 0)
        {
            n--;
            system("cls");
            cout << "\t\t!!-->>Enter the next book<<--!!" << endl;
            goto loop;
        }

        cout << "Your information added successfully  !!... (:+) \nPress any key to go back...";
        getch();
    }

    void return_book()
    {
        int n;
        system("cls");
        cout << "\n____________________________________________________________________" << endl;
        cout << "---->Enter how many books you want to Return : " << endl;
        cout << "---->";
        cin >> n;
        n--;

        year = tm.tm_year + 1900;
        month = tm.tm_mon + 1;
        date = tm.tm_mday;
        system("cls");
    loop:
        cout << "_____________________________________________________________________" << endl;
        cout << "\t\t<-----   Return a book   ----->" << endl;
        cout << "_____________________________________________________________________" << endl;
        cout << "Enter your Roll No. : ";
        cin >> rollno;
        cout << endl
             << "Enter you name : ";
        cin >> name;
        cout << endl
             << "Enter the ID of the book which you want to return : ";
        cin >> b_id;
        cout << endl
             << "Enter the book name : ";
        cin >> b_name;

        // adding the student data to the list
        ofstream sdata;
        sdata.open("return_book_list.txt", ios::app);
        sdata << endl
              << rollno << endl;
        sdata << name << endl;
        sdata << b_id << endl;
        sdata << b_name << endl;
        sdata << date << endl;
        sdata << month << endl;
        sdata << year << endl;

        sdata.close();

        while (n != 0)
        {
            n--;
            system("cls");
            cout << "\t\t!!-->>Enter the next book<<--!!" << endl;
            goto loop;
        }

        cout << "Your information added successfully  !!... (:+) \nPress any key to go back...";
        getch();
    }
};
class librarian : public book
{
protected:
    string Sname;
    int Srollno;

public:
    void student_bb()
    {
        system("cls");
        cout << "_____________________________________________________________________" << endl;
        cout << "\n-->Enter the student Roll No. : ";
        cin >> Srollno;
        cout << "\n-->Enter the student name : ";
        cin >> Sname;
        cout << "_____________________________________________________________________" << endl;

        ifstream sdata;
        sdata.open("borrow_book_list");
        sdata >> rollno;
        sdata >> name;
        sdata >> b_id;
        sdata >> b_name;
        sdata >> date;
        sdata >> month;
        sdata >> year;
        while (!sdata.eof())
        {
            if (rollno == Srollno)
            {
                system("cls");
                cout << "_____________________________________________________________________" << endl;
                cout << "\t\t>>>>Student Details<<<<" << endl;
                cout << "_____________________________________________________________________" << endl;
                cout << "Student name : " << name << endl;
                cout << "Student Roll No. : " << rollno << endl;
                cout << "Borrowed books by this student are mentioned below " << endl;
                cout << "\t\t<----    Book List   ---->" << endl;
                cout << "---------------------------------------------------------------------" << endl;
                cout << "\tBook_Id    |   Book_name    |   Date" << endl;
                cout << "---------------------------------------------------------------------" << endl;
                cout << "\t" << b_id << "\t   |\t" << b_name << "\t   |\t" << date << "/ " << month << "/ " << year << endl;
                cout << "---------------------------------------------------------------------" << endl;
                break;
            }
            else
            {
                cout << "\nRecord not found " << endl;
                break;
            }
            sdata >> rollno;
            sdata >> name;
            sdata >> book_id;
            sdata >> book_name;
            sdata >> date;
            sdata >> month;
            sdata >> year;
        }
        sdata.close();
        cout << "\nPress any key to go back...";
        getch();
    }
} l1;

int main()
{
    // MAIN MENU
    int login_choice = 0;
    while (login_choice != 4)
    {
        system("cls");
        cout << "_______________________________________________________________________________" << endl;
        cout << "\t>>>>>>>>>>>>>>>> Library Management System <<<<<<<<<<<<<<<<<<" << endl;
        cout << "_______________________________________________________________________________" << endl;
        cout << ">>> Please choose any section given below to Enter:-)" << endl;
        cout << "1. Coder details" << endl;
        cout << "2. Student" << endl;
        cout << "3. Librarian" << endl;
        cout << "4. Close Application" << endl;
        cout << "_______________________________________________________________________________" << endl;
        cout << "Enter your choice :";
        cin >> login_choice;
        // <------------------------------Coder Details------------------------------->
        if (login_choice == 1)
        {
            system("cls");
            cout << "\t<-----    Coder Details   ----->" << endl;
            My_details();
        }
        // <------------------------------Student section------------------------------>
        else if (login_choice == 2)
        {
            int student_choice = 0;
            while (student_choice != 4)
            {
                system("cls");
                cout << "_______________________________________________________________________________" << endl;
                cout << "\t\t<-----   Student section    ----->" << endl;
                cout << "_______________________________________________________________________________" << endl;
                cout << "1. View Book list" << endl;
                cout << "2. Borrow a Book" << endl;
                cout << "3. Return a Book" << endl;
                cout << "4. Exit" << endl;
                cout << "_______________________________________________________________________________" << endl;
                cout << "Enter your choice : ";
                cin >> student_choice;

                switch (student_choice)
                {
                case 1:
                    l1.view_book_list();
                    break;
                case 2:
                    l1.borrow_book();
                    break;
                case 3:
                    l1.return_book();
                    break;
                case 4:
                    break;
                default:
                    cout << "Invalid choice. Press any key to continue...";
                    getch();
                }
            }
            // cout << "Press any key to go back...";
            // getch();
        }
        //<-------------------------------Librarian Section---------------------------->
        else if (login_choice == 3)
        {
            int lib_choice = 0;
            string un;
            string pass;
            system("cls");
            cout << "\t\t>>>>Admin Login<<<<" << endl;
            cout << "+-----------------------------------------------+";
            cout << "\n\tEnter your username : ";
            cin >> un;
            cout << "\n\tEnter your password : ";
            cin >> pass;
            cout << "\n+----------------------------------------------+";

            if ((un == LIB_UN) && (pass == LIB_PASS))
            {

                while (lib_choice != 5)
                {
                    system("cls");
                    cout << "_______________________________________________________________________________" << endl;
                    cout << "\t\t<-----   Librarian Section   ----->" << endl;
                    cout << "_______________________________________________________________________________" << endl;
                    cout << "1. Add Books " << endl;
                    cout << "2. Delete Books " << endl;
                    cout << "3. View Book list" << endl;
                    cout << "4. Student Data" << endl;
                    cout << "5. Exit" << endl;
                    cout << "_______________________________________________________________________________" << endl;
                    cout << "Enter your choice : ";
                    cin >> lib_choice;

                    switch (lib_choice)
                    {
                    case 1:
                        l1.add_book();
                        break;
                    case 2:
                        l1.delete_book();
                        break;
                    case 3:
                        l1.view_book_list();
                        break;
                    case 4:
                        l1.student_bb();
                        break;
                    case 5:
                        break;
                    default:
                        cout << "Invalid choice. Press any key to continue...";
                        getch();
                        break;
                    }
                }
            }
            else
            {
                cout << "\nInvalid Credentials. :-( \nPrees any key to continue...";
                getch();
            }
        }
        //<-------------------------------Close Application---------------------------->
        else if (login_choice == 4)
        {
            cout << "Thank you for using it !!... {:-) " << endl;
            exit(0);
        }
        //<-------------------------------Invalid Choice------------------------------->
        else
        {
            cout << "\n Invalid Choice.\\__( * _ * )__/` Press any key to continue..";
            getch();
        }
    }
    return 0;
}

void My_details()
{
    cout << "________________________________________________" << endl;
    cout << "Name : Abhay Bindal" << endl;
    cout << "________________________________________________" << endl;
    cout << "Roll No : 181001" << endl;
    cout << "________________________________________________" << endl;
    cout << "Topic : Library Management System" << endl;
    cout << "________________________________________________" << endl;
    cout << "Email ID :abhay.181001@gmail.com" << endl;
    cout << "________________________________________________" << endl;
    cout << "College Name : Global Institute of Technology and Management " << endl;
    cout << "________________________________________________" << endl;
    cout << "Press any key to go back..." << endl;
    getch();
}
