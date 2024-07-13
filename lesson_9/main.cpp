#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");

    // set<int> s;
    // s.insert(5);
    // s.insert(51);
    // s.insert(15);

    // for (int i = 0; i < 20; i++) {
    //     s.insert(rand() % 100);
    // }

    // bool result = s.erase(5);
    

    // int elem_f = 5;
    // if (s.find(elem_f) != s.end()) {
    //     cout << elem_f << endl;
    // } else {
    //     cout << "not found" << endl;
    // }


    // for(auto &item : s) {
    //     cout << item << endl;
    // }


    multiset<int> ms = {1, 4, 9, 16, 1};
    for(auto &item : ms) {
        cout << item << endl;
    }
    auto it1 = ms.lower_bound(1); // return first elem of value
    auto it2 = ms.upper_bound(1); // return number after that elem
    auto a = ms.equal_range(1); // return lower_bound and upper_bound 

    return 0;
}