class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return{-1, -1};
        int idx = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(idx == nums.size() || nums[idx] != target)
            return {-1, -1};
        int idx2 = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        return{idx, idx2};
    }
};