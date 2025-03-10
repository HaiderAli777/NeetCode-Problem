class Solution {
    public:
       int lengthOfLongestSubstring(string s) {
      int l = 0, r = 0, maxlength = 0;
      unordered_set<char> st;
      while (r < s.size()) {
        if (st.find(s[r]) != st.end()) {
          st.erase(s[l]);
          l++;
        } else {
          st.insert(s[r]);
          maxlength = max(maxlength, r - l + 1);
          r++;
        }
      }
      return maxlength;
    }
    };
    