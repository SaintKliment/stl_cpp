#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <numeric>

using namespace std;


class Point {
public:
    Point(int x, int y) {this->x = x; this->y = y;}
    int x, y;
};

int main() {
    setlocale(LC_ALL, "ru");

    vector<Point> arr {
        Point(1, 3),
        Point(7, 9),
        Point(2, 7),
    };

    vector<Point> arr2 {
        Point(1, 3),
        Point(7, 9),
        Point(2, 7),
    };

    bool res = equal(begin(arr), end(arr), begin(arr2), end(arr2), [](const Point &p1, const Point &p2) {
        bool res = p1.x == p2.x && p1.y == p2.y;
        return res;
    });

    cout << res << endl;

    return 0;
}