class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        
        string new_S = s + s;

        return new_S.find(goal) != string::npos;
        
    }
};