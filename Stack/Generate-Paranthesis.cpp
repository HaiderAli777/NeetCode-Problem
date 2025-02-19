#include <iostream>
#include <map> // Changed to map
#include <stack>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector> // Include the vector header
using namespace std;

void backtrack(int openpar, int closepar, int n, vector<string> &res,
    string &str) {
if (openpar == closepar && openpar == n) {
res.push_back(str);
return;
}
if (openpar < n) {
str = str + "(";
backtrack(openpar + 1, closepar, n, res, str);
str.pop_back();
}
if (closepar < openpar) {
str = str + ")";
backtrack(openpar, closepar + 1, n, res, str);
str.pop_back();
}
};
vector<string> generateParenthesis(int n) {
vector<string> res;
string str = "";
backtrack(0, 0, n, res, str);
return res;
}
int main() {
int n = 2;
vector<string> res = generateParenthesis(n);
for (int i = 0; i < res.size(); i++) {
cout << res[i];
}
}