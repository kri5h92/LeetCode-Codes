class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0, n = nums.size();
        for(int i = 1; i <= n; i++)
        {
             if(nums[(i-1)%n] > nums[i%n])
                 cnt++;
        }
        if(cnt>1)
            return false;
        return true;
    }
};