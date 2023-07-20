class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.size();
        if(n<8)
        {
            cout<<n<<endl;
            return false;
        }
        int lower=0;
        int upper=0;
        int digi=0;
        int special=0;
        // regex regx("!@#$%^&*()-+");
        // if(regex_search(password, regx))
        // {
        //     special++;
        //     cout<<"special: "<<special<<endl;
        // }
        
        for(int i=0;i<n-1;i++)
        {
            if(password[i]==password[i+1])
            {
                cout<<"Adjacent"<<endl;
                return false;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(password[i]>='A' && password[i]<='Z')
            {
                upper++;
                cout<<"Upper: "<<upper<<endl;
            }
            if(password[i]>='a' && password[i]<='z')
            {
                lower++;
                cout<<"Lower: "<<lower<<endl;
            }
            if(password[i]>='0' && password[i]<='9')
            {
                digi++;
                cout<<"Digits: "<<digi<<endl;
            }
            if((password[i]=='!')||(password[i]=='@'||password[i]=='#')||(password[i]=='$')||(password[i]=='%')||(password[i]=='^')||(password[i]=='&')||(password[i]=='*')||(password[i]=='(')||(password[i]==')')||(password[i]=='-')||(password[i]=='+'))
            {
                special++;
                cout<<"Special: "<<special<<endl;
            }
        }
        if((lower==0)||(upper==0)||(digi==0)||(special==0))
        {
            cout<<" no "<<endl;
            return false;
        }
        return true;
    }
};