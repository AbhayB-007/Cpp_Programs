#include <iostream>
#include <fstream>
using namespace std;
/*
The useful classes for working with files in C++ are :-
                                               _                        
1. fstreambase                                  |
2. ifstream ---> derived from fstreambase       |--> derived from {fstream} i.e, "header file"
3. ofstream ---> derived from fstreambase      _|
                                                    
Im order to work with files in C++, you have to open it. Primarily, there are 2 ways to open a file :-
1. Using the constructor 
2. Using the member function open() of the class
*/
int main()
{
    // string str = " Hello world";
    // string str2;

    // // constructor method for opening a file and writing in it
    // ofstream out("sample.txt");
    // out << endl;
    // out << str;
    // out.close();             //--> closing file

    // //using constructors for reading data from files.
    // ifstream in("sample.txt");
    // in.get(c);               //--> used for single character
    // in >> str;               //--> used for single string or word
    // getline(in, str2);       //--> used for whole line
    // cout << str2 << endl;
    // --------------------------------------------------------------------------------------
    // string name, content;
    // ofstream hout("sample.txt");
    // cout << "Enter your name : ";
    // // cin >> name;             //--> used to take single character
    // getline(cin, name);
    // hout << name;
    // hout.close();

    // ifstream hin("sample.txt");
    // getline(hin, content);
    // cout << " The content of this file is : " << content;
    // hin.close();
    // --------------------------------------------------------------------------------------

    // ofstream out;
    // out.open("sample.txt");
    // out << "This is me";
    // out << "\nThis is me also";
    // out << "\nThis is me only";
    // out.close();

    // string str;
    // char c;
    // ifstream in;
    // in.open("sample.txt");
    // while (in.eof()==0)
    // {
    //     // in >> str;
    //     // in.get(c);
    //     getline(in, str);
    //     cout << str << endl;
    // }

        return 0;
}