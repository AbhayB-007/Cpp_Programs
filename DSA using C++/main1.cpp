#include <bits/stdc++.h>
using namespace std;
#define clear() printf(“\033[H\033[J”)

class STL
{

public:
    STL()
    {
        string stl_short_notes = "\n--------------------------------------------------------------------------------"
                                 "\n\t\t\t\tSTL SHORT NOTES"
                                 "\n1). STL -> Standard Template Library(lib of generic classes & funx)."
                                 "\n2). History of STL -> 2 emp of HP named as Alexander Stepanov and Meng Lee made STL."
                                 "\n3). why use STL? -> Reuse : well tested components."
                                 "\n                 -> Time saving."
                                 "\n4). Components of STL are :-"
                                 "\n    a). Containers --> stores data & use template classes."
                                 "\n    b). Algorithms --> sorting, searching & use template funx."
                                 "\n    c). Itrators --> i). object point to an element in a container."
                                 "\n                     ii). handles just like pointers."
                                 "\n                     iii). connects algo with containers."
                                 "\n5). STL is used becoz its a good idea not to reinvent the wheel."
                                 "\n6). STL = Containers(object w/c stores data) + Algorithms(procedure to store data) + Iterators(object w/c points to an element of a container)"
                                 "\n--------------------------------------------------------------------------------"
                                 "\n1). Containers -> a). Sequence -> Linear Fashion eg :- vector, list & dequeue etc."
                                 "\n                       i). vectors -> ~ random access is fast."
                                 "\n                                   ~ insert/delete is slow."
                                 "\n                                   ~ insert at end is fast."
                                 "\n                       ii). list -> ~ random access is slow."
                                 "\n                                    ~ insert is fast."
                                 "\n                                    ~ delete/insert at is fast."
                                 "\n               -> b). Associate -> Direct Access eg :- set/multiset, map/multimap etc."
                                 "\n                       i). all oerations fast except random access."
                                 "\n               -> c). Derived -> Real world modeling eg :- stack, queue, priority-queue etc."
                                 "\n                       i). depends on data structure.";

        cout << stl_short_notes << endl;
    }

    void explainPair()
    {
        pair<int, int> p = {1, 3};

        cout << p.first << " " << p.second << endl;

        pair<int, pair<int, int>> p1 = {1, {3, 4}};

        cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

        pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

        cout << arr[1].first << " " << arr[2].second << endl;
    }

    void explainVector()
    {
        // vector<int> v;

        // v.push_back(1);    // v = {1}
        // v.emplace_back(2); // v = {1, 2}

        // vector<pair<int, int>> vec; // can also be defined like this

        // // v.push_back({1, 2});
        // v.emplace_back(1, 2);
    }
};

int main(void)
{
    cout.flush();
    system("cls");
    STL obj;
    // obj.explainPair();
    return 0;
}