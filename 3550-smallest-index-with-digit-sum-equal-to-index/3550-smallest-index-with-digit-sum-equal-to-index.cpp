class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++){
            int sum = 0;

            while(nums[i] > 0){
                int ld = nums[i] % 10;
                nums[i] /= 10;
                sum += ld;
            }
            
            if(sum == i) return i;
        }
        return -1;
        
    }
};