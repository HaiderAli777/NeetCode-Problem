class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid=0;
        
        while(l<=r)
        {
         mid=(l+r)/2;
         if(nums[mid]==target)
         {
            return mid;
         }   
         if(target>nums[mid])
         {
            l=mid+1;
         }
         if(target<nums[mid])
         {
            r=mid-1;
         }
        }
        return -1;
    }
};
