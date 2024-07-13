#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // vector<int> v = {1, 4, 9, 16, 25};
    list<int> l = {0, 1, 4, 9, 16, 25, 36, 49};

    // const int SIZE = 6;
    // int arr[SIZE] = {1, 4, 9, 16, 25, 36};

    // auto res = min_element(l.begin(), l.end());
    // auto res = min_element(arr, arr+SIZE);

    auto res = minmax_element(l.begin(), l.end());

    cout << *res.first << "\t" << *res.second << endl;

    return 0;
}