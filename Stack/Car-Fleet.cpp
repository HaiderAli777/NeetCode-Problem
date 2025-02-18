#include <iostream>
#include <map> // Changed to map
#include <stack>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector> // Include the vector header
using namespace std;


int carFleet(int target, vector<int> &position, vector<int> &speed) {
    map<int, double> mp;
    stack<pair<double, int>> st;
    for (int i = 0; i < position.size(); i++) {
      double count = (double)(target - position[i]) / speed[i];
      cout << count << endl;
      mp.insert({position[i], count});
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++) {
      cout << it->first << " " << it->second << endl;
  
      if (!st.empty() && st.top().first >= it->second) {
        st.top().second++;
      } else {
        st.push({it->second, 1});
      }
    }
  
    return st.size();
  }
  int main() {
    int target = 10;
    vector<int> position = {6, 8};
    vector<int> speed = {3, 2};
    cout << carFleet(target, position, speed);
  }