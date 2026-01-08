#include <iostream>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

class MinStack {
public:
    // pair<value, minValueTillNow>
    stack<pair<int, int>> s;

    MinStack() {
    }
    
    void push(int val) {
        if (s.empty()) {
            s.push({val, val});
        } else {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop() {
        if (!s.empty()) {
            s.pop();
        }
    }
    
    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};

int main() {
    MinStack ms;

    ms.push(5);
    ms.push(3);
    ms.push(7);
    ms.push(2);

    cout << "Top element: " << ms.top() << endl;      
    cout << "Minimum element: " << ms.getMin() << endl;

    ms.pop();

    cout << "Top after pop: " << ms.top() << endl;    
    cout << "Minimum after pop: " << ms.getMin() << endl;

    return 0;
}