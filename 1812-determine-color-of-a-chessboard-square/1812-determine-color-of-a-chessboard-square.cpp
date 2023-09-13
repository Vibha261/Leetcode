class Solution {
public:
    bool squareIsWhite(string coordinates) 
    {
        int value = coordinates[1]-'\0';
        if(coordinates[0] =='a' || coordinates[0] =='c'|| coordinates[0] =='e'|| coordinates[0] =='g')
        {
            if(value%2 == 0)
            {
                return true;
            }
        }
        else if(coordinates[0] =='b' || coordinates[0] =='d'|| coordinates[0] =='f'|| coordinates[0] =='h')
        {
            if(value%2 != 0)
            {
                return true;
            }
        }
        return false;
    }
};