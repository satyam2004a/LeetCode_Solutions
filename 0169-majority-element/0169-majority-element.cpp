class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int candi = nums[0];
       int count = 0;
       int n = nums.size();
       for(int i = 0; i < n; i++){
           if(nums[i] == candi){
            count++;
           } 
           else{
            count--;
           }
           if(count <= 0){
            candi = nums[i];
            count = 1;
           }
       }
        return candi;
        
    }
};