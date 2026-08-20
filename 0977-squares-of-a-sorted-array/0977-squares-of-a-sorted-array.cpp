class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

         int n = nums.size();

    int i = 0;
    int j = n - 1;
    int pos = n - 1;

    vector<int> result(n);

    while (i <= j) {
        if (nums[i] *nums[i] > nums[j] * nums[j]) {
            result[pos] = nums[i] * nums[i];
            i++;
        } else {
            result[pos] = nums[j] * nums[j];
            j--;
        }
        pos--;
    }
    return result;
        
    }
};