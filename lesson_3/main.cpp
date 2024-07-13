#include <iostream>
#include <list>
#include <vector>

using namespace std;



template <typename T>
void PrintList(const list<T> &lst) {
    for (auto i = lst.cbegin(); i != lst.cend(); ++i) {
        cout << *i << endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");

    list<int> list1 = { 13, 54, 12, 12};
    list1.push_back(5);
    list1.push_front(123);
    
    list1.sort();
    list1.pop_back();
    list1.pop_front();
    list1.size(); // sizeof list
    // list1.unique();
    list1.reverse();
    // list1.clear(); // delete all in list
    
    
    auto itt = list1.begin();
    advance(itt, 3);
    list1.insert(itt, 111);
    list1.erase(itt);
    list1.remove(54);

    list<int> dlist = {1231, 32131, 12421};
    list1.assign(dlist.begin(), dlist.end()); // copy

    // list<int>::iterator it = list1.begin();
    PrintList(list1);

    return 0;
}