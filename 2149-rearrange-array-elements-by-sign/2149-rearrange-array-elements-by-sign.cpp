class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pidx = 0, nidx = 1, n = nums.size(), i = 0;
        vector<int> ans(n);
        while(pidx < n || nidx < n && i < n)
        {
            if(nums[i] >= 0)
            {
                ans[pidx] = nums[i];
                pidx+=2;
            }
            else
            {
                ans[nidx] = nums[i];
                nidx+=2;
            }
            i++;
        }
        return ans;
        
    }
    
};