class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(char& op: jewels)
        {
            for(char& ch: stones)
            {
                if(op==ch){
                    count++;
                }
            }
        }
        return count;
    }
};