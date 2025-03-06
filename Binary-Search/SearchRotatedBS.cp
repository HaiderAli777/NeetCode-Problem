class Solution {
public:
    int search(vector<int> &nums, int target) {
  int l = 0, r = nums.size() - 1;
  
  if(nums.size()==2)
  {
    if(nums[0]==target)
    {
        return 0;
    }
    else
    if(nums[1]==target)
    {
        return 1;
    }
    else
    {
        return -1;
    }
  }
  while (l <= r) {
    int mid = (l + r) / 2;
    // here when we split one side of array is always sorted by nature as u can
    // see [3,4,5,0,1,2] suppose if mid is 4 so 3 4 is sorted and remaining is
    // not and if we take 0 as mid so 0 1 2 sorted but 3 4 5 0 is not sorted so
    // after that check that element lie in it if yes then cut the other portion
    // and if not then cut thier own portion and move the r
    if (nums[mid] == target) {
      return mid;
    }
    if (nums[mid] >= nums[l]) {
      if (target >= nums[l] && target <= nums[mid]) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    } else {
      if (target <= nums[r] && target >= nums[mid]) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
  }
  return -1;
}
};