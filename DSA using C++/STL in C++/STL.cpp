#include <bits/stdc++.h>
#include "Containers.cpp"
#include "Iterators.cpp"

using namespace std;

class STL : public Containers, public Iterators
{

public:
        STL() {}
        STL(string str)
        {
                if (str == "STL NOTES")
                {
                        cout << "\n--------------------------------------//" << str <<"\\\\-------------------------------------------------"
                                "\n1). STL -> Standard Template Library(lib of generic classes & funx)."
                                "\n2). History of STL -> 2 emp of HP named as Alexander Stepanov and Meng Lee made STL."
                                "\n3). why use STL? -> Reuse : well tested components."
                                "\n                 -> Time saving."
                                "\n4). Components of STL are :-"
                                "\n    a). Containers --> stores data & use template classes."
                                "\n    b). Algorithms --> sorting, searching & use template funx."
                                "\n    c). Iterators   --> i). object point to an element in a container."
                                "\n                       ii). handles just like pointers."
                                "\n                       iii). connects algorithms with containers."
                                "\n5). STL is used because its a good idea not to reinvent the wheel."
                                "\n6). STL = Containers(object w/c stores data) + Algorithms(procedure to store data) + Iterators(object w/c points to an element of a container)";
                }
                else 
                {
                        cout << "\nInvalid string passed to STL constructor.\nHint: Use 'STL NOTES' to get the notes.";
                }
        }
};

// Driver Code
int main()
{
        cout.flush();
        system("cls");
        STL types_of_stl, types_of_containers, iterators; // objects instantiated
        STL stl_notes("STL NOTES");                       // parameterized constructor instantiated
        types_of_stl.ContainerNotes();
        types_of_containers.Arrays();
        types_of_containers.Vector();
        types_of_containers.Deque();
        types_of_containers.List();
        types_of_containers.Forward_List();
        types_of_containers.Set();
        types_of_containers.Map();
        types_of_containers.Multiset();
        types_of_containers.Multimap();
        types_of_containers.Unordered_Set();
        types_of_containers.Stack();
        types_of_containers.Queue();
        types_of_containers.Priority_Queue();
        iterators.IteratorNotes();

        /*
        class stl : Containers, Algorithms, Iterators
        class Containers : Sequence ,Adaptors, Associative, Unordered Associative
        class Algorithms : types of algorithms
        class Iterators : input, output, forward, bidirectional & random-access iterators

        */

        return 0;
}