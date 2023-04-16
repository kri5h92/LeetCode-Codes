class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX, i = 0, j = 0, sum = 0;
        for(i = 0; i < nums.size() && j < nums.size(); i++)
        {
            sum+=nums[i];
            while(sum >= target && j <= i)
            {
                ans = min(ans, i-j+1);
                sum-=nums[j++];
                if(sum <= 0)
                {
                    j = i;
                    sum = 0;
                    break;
                }
            }
        }
        if(sum>=target)
            ans = min(ans, i-j+1);
        if(ans == INT_MAX)
            return 0;
        return ans;
    }
};