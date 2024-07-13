#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    forward_list<int> flist = {131, 53, 674};
    flist.push_front(1);
    flist.pop_front();
    forward_list<int>::iterator it = flist.before_begin();
    flist.insert_after(it, 1999);
    // cout << *it << endl;



    for (auto el : flist) {
        cout << el << endl;
    }


    return 0;
}