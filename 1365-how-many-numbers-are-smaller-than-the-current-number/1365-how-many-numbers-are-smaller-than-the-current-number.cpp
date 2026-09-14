class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        unordered_map<int,int> mp;
        for (int i = 0; i < sorted.size(); i++){
            if (mp.find(sorted[i]) == mp.end()){
                mp[sorted[i]] = i;
            }
        } 

        vector<int> ans;

        // Find how many numbers are smaller
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(mp[nums[i]]);
        }

        return ans;
    }
};