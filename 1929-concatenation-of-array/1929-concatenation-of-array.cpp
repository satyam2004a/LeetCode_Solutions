class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (2 * n); 
        int j = 0;
        int i = 0;
        int k = 0;
        while(j < (2 * n)){
            while (i < n){
                ans[j] = nums[i];
                i++;
                j++;
            }
            while (k < n){
                ans[j] = ans[k];
                k++;
                j++;
            }
        }
    return ans;
        
    }
};