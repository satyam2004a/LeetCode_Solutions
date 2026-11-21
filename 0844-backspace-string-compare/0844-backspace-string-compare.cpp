class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> s1;
        stack<int> s2;

        for(char x: s){
            if(x == '#'){
                if(!s1.empty()){
                    s1.pop();
                }    
            }
            else{
                s1.push(x);
            }    
        }
        string ans1 = "";
        
        while(!s1.empty()){
            ans1.push_back(s1.top());
            s1.pop();
        }
        
        for(char y: t){
            if(y == '#'){
                if(!s2.empty()){
                    s2.pop();
                }   
            }
            else{
                s2.push(y);
            }    
        }

        string ans2 = "";
        
        while(!s2.empty()){
            ans2.push_back(s2.top());
            s2.pop();
        }

        return ans1 == ans2;
    }
};