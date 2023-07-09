class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long volume = static_cast<long>(length)*width*height;
        string ans;
        string a;
        string b;
        if((length>=10000)||(width>=10000)||(height>=10000)||(volume>=1000000000))
        {
            a="Bulky";
        }
        else
        {
            a="";
        }
        if(mass>=100)
        {
            b="Heavy";
        }
        else{
            b="";
        }
        if(a=="Bulky" && b=="Heavy")
        {
            ans="Both";
        }
        else if(a=="Bulky")
        {
            ans=a;
        }
        else if(b=="Heavy")
        {
            ans=b;
        }
        else
        {
            ans="Neither";
        }
        return ans;
    }
};