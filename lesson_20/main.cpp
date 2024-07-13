#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <numeric>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int arr[] = {10, 3, 8, 11, 7};
    vector<int> arr2 = {7, 3, 8, 11, 10};

    sort(begin(arr2), end(arr2));
    sort(begin(arr), end(arr));

    bool res = equal(begin(arr), end(arr), begin(arr2), end(arr2));
    cout << res << endl;

    auto result = mismatch(begin(arr), end(arr), begin(arr2), end(arr2)); // возвращает итератор, если есть совпадение по элементам или нет
    if (result.first == end(arr) && result.second == end(arr2)) {
        cout << "+" << endl;
    } else { cout << "-" << endl;}

    return 0;
}