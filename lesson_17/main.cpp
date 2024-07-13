#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // vector<int> v = {1, 4, 9, 16, 25};
    list<int> l = {1, 4, 9, 16, 25, 36};

    const int SIZE = 6;
    int arr[SIZE] = {1, 4, 9, 16, 25, 36};

    // auto res = max_element(l.begin(), l.end());
    auto res = max_element(arr, arr+SIZE);
    cout << *res << endl;

    return 0;
}