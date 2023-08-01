class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // vector<int> prefix(nums.size());
        // prefix[0] = 0;
        sort(nums.begin(), nums.end());
        long long j = 0, ans = 1, sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum+=nums[i];
            while((i-j+1)*nums[i] - sum > k) 
                sum-=nums[j++];
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};