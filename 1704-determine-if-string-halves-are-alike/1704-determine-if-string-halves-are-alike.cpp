class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int half = n/2;
        string a=s.substr(0, half);
        string b=s.substr(half);
        int cnt1=0;
        int cnt2=0;
        for(int i=0; i<half; i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'|| a[i]=='A'|| a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            {
                cnt1++;
                cout<<"cnt1 "<<cnt1<<endl;
            }
            cout<<a[i]<<endl;
        }
        for(int i=0; i<half; i++)
        {
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'|| b[i]=='A'|| b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
            {
                cnt2++;
                cout<<"cnt1 "<<cnt1<<endl;
            }
            cout<<b[i]<<endl;
        }
        // cout<<s<<endl<<a<<endl<<b<<endl;
        return cnt1==cnt2;
    }
};