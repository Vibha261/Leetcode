class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int eval =0;
        for(int i=0; i<operations.size(); i++)
        {
            if(operations[i]=="C"||operations[i]=="D"||operations[i]=="+")
            {
                if(operations[i]=="C")
                {
                    st.pop();
                }
                else if(operations[i]=="D")
                {
                    int doub = st.top();
                    doub = 2*doub;
                    st.push(doub);
                }
                else
                {
                    int num2 = st.top();
                    st.pop();
                    int num1 = st.top();
                    st.push(num2);
                    int sum = num1+num2;
                    st.push(sum);
                }
            }
            else
            {
                int number = stoi(operations[i]);
                st.push(number);
            }
        }
        while(!st.empty())
        {
            int val = st.top();
            st.pop();
            eval+=val;
        }
        return eval;
    }
};