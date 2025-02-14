#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector> 
using namespace std;

bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> mp = {{'}', '{'}, {']', '['}, {')', '('}};
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '}' || s[i] == ']' || s[i] == ')') {
        if (st.empty() || st.top() != mp[s[i]]) {
          return false;
        } else {
          st.pop();
        }
      } else {
        st.push(s[i]);
      }
    }
    if (st.empty()) {
      return true;
    }
    return false;
  };
  
  int main() {
    string strs = "}{}";
  
    cout << isValid(strs);
  }