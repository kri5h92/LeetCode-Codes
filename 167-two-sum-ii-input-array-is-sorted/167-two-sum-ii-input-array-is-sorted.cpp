class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, n = nums.size();
        int r = n-1;
        while(l<r)
        {
            int mid = l + (r-l)/2;
            if(target == (nums[l] + nums[r]))
                return {l+1,r+1};
            else if(target > (nums[l] + nums[r]))
                l++;
            else 
                r--;
        }
        return {0};
        
    }
};