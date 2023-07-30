//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
	public:
    	long long findNth(long long N)
        {
            // code here.
            long long result=0; //store the value
            long long position = 1; //store the position
            //converting to base 9 so we iterate over(0-8)
            while(N>0) 
            {
                result = result+(position*(N%9));//n%9 is 0 for digits 9
                N = N/9; //to check number of digits in num
                position=position*10; //to increase position
            }
            return result;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}


// } Driver Code Ends