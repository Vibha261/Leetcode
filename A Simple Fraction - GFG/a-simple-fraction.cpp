//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	    if(numerator==0)
	    {
	        return "0";
	    }
	    int sign = (numerator<0)^(denominator<0)?-1:1;
	    string res="";
	    if(sign==-1)
	    {
	        res+="-";
	    }
	    int num = abs(numerator);
	    int deno = abs(denominator);
	    int wholeValue = num/deno;
	    res+=to_string(wholeValue);
	    if(num%deno==0)
	    {
	        return res;
	    }
	    res+=".";
	    int remain = num%deno;
	    unordered_map<int, int> check;
	    while(remain!=0)
	    {
	        if(check.find(remain)!=check.end())
	        {
	            res.insert(check[remain],"(");
	            res+=")";
	            break;
	        }
	        check[remain] = res.length();
	        remain*=10;
	        int val = remain/deno;
	        res+=to_string(val);
	        remain = remain%deno;
	    }
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends