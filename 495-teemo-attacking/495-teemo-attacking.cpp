class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = duration, temp = timeSeries[0] + duration - 1;
        for(int i = 1; i < timeSeries.size(); i++)
        {
            if(timeSeries[i] <= temp)
            {
                ans += (timeSeries[i] + duration - 1 - temp);
            }
            else 
                ans += duration;
            temp = timeSeries[i] + duration - 1;
        }
        return ans;
    }
};