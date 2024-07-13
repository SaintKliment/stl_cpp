#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    vector<int> arr = { 1, 1, 2 ,3 ,5 ,6, 7, 9, 1, 2, 3, 4, 5, 6 };
    vector<int> v2;

    unique_copy(begin(arr), end(arr), back_inserter(v2));   

    auto it = unique(begin(arr), end(arr));
    arr.erase(it, end(arr));

    for (int el : v2) {
        cout << el << endl;
    }

    return 0;
}