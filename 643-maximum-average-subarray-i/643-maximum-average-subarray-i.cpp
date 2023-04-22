class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN, avg = 0;
        int n = nums.size();
        for(int i = 0; i < k; i++)
        {
            avg+=nums[i];
        }
        ans = max(ans, avg/(double)k);
        for(int i = k; i < n; i++)
        {
            avg -= nums[i-k];
            avg += nums[i];
            ans = max(ans, avg/(double)k);
        }
        return ans;
    }
};