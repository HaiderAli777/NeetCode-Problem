class Solution {
public:
   int findMin(vector<int> &nums) {
  // this problem comprmises of two portion and both portion are sorted means
  //{3,4,5,6,1,2}=>one is 3 4 5 6 and second in 1 2 now if our mid lies on first
  // portion and our conditon determine that if our mid > l so it means we are
  // on the first portion so we mover from l to mid +1 otherwise we have to move
  // from right to mid-1 thats the logic
  int l = 0, r = nums.size() - 1;
  int minnumber = nums[l];
  while (l <= r) {
    
    
    int mid = (l + r) / 2;

    if (nums[mid] >= nums[l]) {
        minnumber=min(minnumber,nums[l]);
      l = mid + 1;
    } else {
        minnumber=min(minnumber,nums[mid]);
      r = mid-1;
    }
  }

  return minnumber;
}
};
