class Solution {
    public:
        int characterReplacement(string s, int k) {
            int l=0,maxfr=0,r=0,res=0;
            unordered_map<char,int>count;
            while(r<s.size())
            {
            count[s[r]]++;
           
            maxfr=max(maxfr,count[s[r]]);
        
            while((r-l+1)-maxfr>k)
            {
                count[s[l]]--;
                l++;
            }
            
            res=max(res,r-l+1);
                 r++;
            
            }
            return res;
        }
    };
    