class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> square;

        for(int x: nums){
            square.push_back(x * x);
        }
        sort(square.begin(), square.end());

        long long sum = 0;
        int i = 0;
        int j = square.size() - 1;

        while(i <= j){
            sum = sum + square[j];
            j--;
        
            if(i <= j){
                sum = sum - square[i];
                i++;
            }
        }    
        return sum;


    }
};