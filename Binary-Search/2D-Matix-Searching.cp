class Solution {
public:
   bool searchMatrix(vector<vector<int>> &matrix, int target) {
  for (int i = 0; i < matrix.size(); i++) {
    int end = matrix[i].size() - 1;
    cout << matrix[i][end] << endl;
    if (target <= matrix[i][end]) {
      int l = 0, r = end, mid = 0;
      while (l <= r) {
        mid = (l + r) / 2;
        if (matrix[i][mid] == target) {
          return true;
        }
        if (target > matrix[i][mid]) {
          l = mid + 1;
        } else {
          r = mid - 1;
        }
      }
      return false;
    }
  }
  return false;
}
};
