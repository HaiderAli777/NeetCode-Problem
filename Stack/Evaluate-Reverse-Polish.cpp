#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector> // Include the vector header
using namespace std;

int evalRPN(vector<string> &tokens) {
    stack<double> s;
    double result = -1;
    for (int i = 0; i < tokens.size(); i++) {
  
      if (tokens[i] == "+") {
        double secint = s.top();
        s.pop();
        double firstint = s.top();
        s.pop();
        result = firstint + secint;
        s.push(result);
      } else if (tokens[i] == "-") {
        double secint = s.top();
        s.pop();
        double firstint = s.top();
        s.pop();
        result = firstint - secint;
        s.push(result);
      } else if (tokens[i] == "/") {
        double secint = s.top();
        s.pop();
        double firstint = s.top();
        s.pop();
        result = firstint / secint;
        s.push(result);
      } else if (tokens[i] == "*") {
        double secint = s.top();
        s.pop();
        double firstint = s.top();
        s.pop();
        result = firstint * secint;
        s.push(result);
  
      } else {
        s.push(stoi(tokens[i]));
      }
    }
    return result;
  }
  
  int main() {
    vector<string> strs = {"1", "2", "+", "3", "*", "4", "-"};
  
    cout<<evalRPN(strs);
  }