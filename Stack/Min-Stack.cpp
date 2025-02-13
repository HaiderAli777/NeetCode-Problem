#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include<stack>


class MinStack {
    private:
        std::stack<int> stack;
        std::stack<int> minStack;
    
    public:
        MinStack() {}
    
        void push(int val) {
            stack.push(val);
            val = std::min(val, minStack.empty() ? val : minStack.top());
            minStack.push(val);
        }
    
        void pop() {
            stack.pop();
            minStack.pop();
        }
    
        int top() {
            return stack.top();
        }
    
        int getMin() {
            return minStack.top();
        }
    };