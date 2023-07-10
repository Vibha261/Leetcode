class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(char& op: address){
            if(op=='.'){
                ans+="[";
                ans+=op;
                ans+="]";
            }
            else
                ans+=op;
        }
        return ans;
    }
};