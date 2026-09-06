class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int i = 0;

        for(int k = 0; k < arr2.size(); k++){
           for(int j = i; j < arr1.size(); j++){
                if(arr2[k] == arr1[j]){
                    swap(arr1[i],arr1[j]);
                    i++;
                }
           }
        }
        sort(arr1.begin() + i, arr1.end());
    return arr1;    
    }
};