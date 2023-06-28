
class Solution {
public:
    int evl(int num1, int num2, string ch)
    {
        if(ch=="+"){
            return num1+num2;
        }
        else if(ch=="-"){
            return num1-num2;
        }
        else if(ch=="*"){
            return num1*num2;
        }
        else if(ch=="/"){
            return num1/num2;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) 
    {
        int ans=0;
        stack<int> st;
        for(const auto& op: tokens)
        {
            if(op=="+"||op=="-"||op=="*"||op=="/")
            {
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                int eval = evl(num1, num2, op);
                st.push(eval);
            }
            else{
                st.push(stoi(op));
            }
        }
        ans=st.top();
        
        return ans;
    }
};