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
    stack <int> s;
    stack <int> d;
    
    public:
        MinStack() {}
    
        void push(int val) {
           s.push(val);
           if(d.empty() || val<=d.top())
           {
            d.push(val);
           } 
        }
    
        void pop() {
           if (!s.empty())
           {
           
             if(s.top()==d.top())
         {
            d.pop();
         }
          s.pop();
           }
           
        
        }
    
        int top() {
            if(!s.empty())
            {
                return s.top();
            }
            return -1;
        }
    
        int getMin() {
            if(!d.empty())
            {
                return d.top();
            }
            return INT_MAX;
        }
    };