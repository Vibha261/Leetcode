class Solution {
public:
    string intToRoman(int num) {
        int i;
        string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        string r;
        
        for(i=0; num != 0; i++)
        {
            while(num >= v[i])
            {
                r += roman[i];
                num -= v[i];
            }
        }
        
        return r;
    }
};