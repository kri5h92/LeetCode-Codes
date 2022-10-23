class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i = 0, j = 0, sum = 0;
        if(nums.size() == 1)
            return nums[0];
        for(i = 0; i < nums.size() - 1; i++)
        {
            nums[i] = (nums[i] + nums[i+1])%10;
        }
        nums.pop_back();
        return triangularSum(nums);
        
    }
};