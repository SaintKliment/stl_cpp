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

    list<int>::iterator it;

    it++;

    ++it;

    // int a = 5;
    // cout << a++ << endl;
    // cout << ++a << endl;


    return 0;
}