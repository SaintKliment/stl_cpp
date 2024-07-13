#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <numeric>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    vector<int> v = { 1, 2, 3, 4 };

    auto res = accumulate(next(begin(v)), end(v), to_string(v[0]), [](string a, int b) { 
        return a + "-" +to_string(b);
    }); 

    // auto res = accumulate(begin(v), end(v), 0, [](int a, int b) { 
    //     if (b % 2 == 0) {
    //         return a + b;
    //     } else {
    //         return a;
    //     }
    //  }); 

    // auto res = accumulate(begin(v), end(v), 1, [](int a, int b) { 
    //     return a * b;
    //  }); // работает с массивами, со всем чем хочешь
    cout << res << endl;

    return 0;
}