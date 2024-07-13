#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    stack<int,list<int>> st;



    st.push(2);
    st.push(22);
    st.push(222);
    st.emplace(9);
    
    auto a = st._Get_container();x`
    cout << a[2] << endl;

    // st.pop(); // верхний элем забирает
    // st.top(); // верхний элем check

    // cout << st.top() << endl;

    // while(!st.empty()) {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    return 0;
}