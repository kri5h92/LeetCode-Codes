class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int low = 0, high = n-1;
        int i = high;
        while(low<=high)
        {
            if(pow(nums[low],2) > pow(nums[high],2))
                {ans[i] = pow(nums[low],2);
                low++;}
            else
                {ans[i] = pow(nums[high],2);
                high--;}
            i--;
        }
    return ans;
    }
};