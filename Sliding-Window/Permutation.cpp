class Solution {
    public:
        bool checkInclusion(string s1, string s2) {
            if(s1.size()>s2.size())
            {
                return false;
            }
           unordered_map<char,int>counts1;
           for(char c:s1)
           {
            counts1[c]++;
           } 
    
           int need=counts1.size();
    
           for(int i=0;i<s2.size();i++)
           {
            unordered_map<char,int>counts2;
            int cur=0;
            for(int j=i;j<s1.size()+i;j++)
            {
                counts2[s2[j]]++;
              
                if(counts2[s2[j]]==counts1[s2[j]])
                {
                    cur++;
                }
                if(cur==need)
                {
                    return true;
                }
            }
           }
           return false;
    
        }
    };
    