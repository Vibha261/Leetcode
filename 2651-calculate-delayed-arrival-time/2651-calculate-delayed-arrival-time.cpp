class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int result = arrivalTime+delayedTime;
        if(result<24)
        {
            return result;
        }
        else if(result==24)
        {
            return 0;
        }
        result = result-24;
        return result;
    }
};