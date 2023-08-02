class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        // int initial_sum = 0;
        // ;
        // cout<<sum<<" "<<initial_sum;
        return (sum - accumulate(nums.begin(), nums.end(), 0));
    }
};