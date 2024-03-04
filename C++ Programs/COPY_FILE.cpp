#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main()
{
    char c;
    ifstream in("file.txt");
    in.get(c);
    ofstream out("sample.txt");
    cout << c;
    // out.put(c);
    while (!in.eof())
    {
        in.get(c);
        Sleep(10);
        cout << c;
        // out.put(c);
    }
    in.close();
    out.close();
    return 0;
}