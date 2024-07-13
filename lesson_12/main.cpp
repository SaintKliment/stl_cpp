#include <iostream>
#include <queue>
#include <vector> // с ним не работает очередь, но работает очередь с приоритетом, но где приоритет там нельзя list
#include <deque>
#include <list>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // queue<int> q;
    priority_queue<int> q; // сортирует от большего к меньшему

    q.emplace(1);
    q.push(13);
    q.push(21);

    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;
    
    while (!q.empty()) {
        cout << q.top() << endl;
        
        cout << "size = " << q.size() << endl;

        q.pop(); 
    }

    // auto a = q._Get_container();
    

    return 0;
}