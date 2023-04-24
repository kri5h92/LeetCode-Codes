class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> prefArr(nums.size(), 0);
        prefArr[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            prefArr[i] = prefArr[i-1] + nums[i];
        }
        int mn = *min_element(prefArr.begin(), prefArr.end());
        if(mn < 0)
        {
            return (abs(mn) + 1);
        }
        else 
            return 1;
    }
};

// 2 5 10 5 4