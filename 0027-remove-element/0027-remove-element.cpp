class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        while(i < nums.size()){
            if(nums[i] != val){
                i++;
            }
            else{
                break;
            }
        }
        j = i;

        while(j < nums.size()){
            if (nums[j] == val){
                j++;
            }
            else{
                swap(nums[i], nums[j]);
                i++;
            }
        }
        return i;

        
        
    }
};