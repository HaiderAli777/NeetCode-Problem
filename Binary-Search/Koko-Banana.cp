class Solution {
public:
   int minEatingSpeed(vector<int> &piles, int h) {
  // actually here we start from 1 and end at the max because in max means coco
  // eat i hour per one index that is queal to
  int l = 1, r = *max_element(piles.begin(), piles.end()), k = 0,mink = r;
 
      
  while (l <= r) {
    k = (l + r) / 2;
     long long hours = 0;
    for (int i : piles) {
      hours += ceil(static_cast<double>(i) / k);
    }
    if (hours <= h) {
      mink = k;
      r = k - 1;
    } else {
      l = k + 1;
    }
  }
  return mink;
}
};
