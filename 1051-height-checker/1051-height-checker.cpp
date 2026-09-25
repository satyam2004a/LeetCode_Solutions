class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> sorted_height = heights;
        sort(sorted_height.begin(), sorted_height.end());
        int count = 0;

        for (int i = 0; i < sorted_height.size(); i++){
            if (sorted_height[i] != heights[i]){
                count++;
            }
        }
        return count;       
    }
};