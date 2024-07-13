#include <iostream>
#include <algorithm>

using namespace std;

void Foo(int a) {
    cout << a << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    int arr[] = {1, 4, 7, 10, 15};

    for_each(begin(arr), end(arr), [](int &a) {
        cout << a << "\t";
        a++;
    });

    cout << endl;

    for( auto a : arr) {
        Foo(a);
    }

    return 0;
}