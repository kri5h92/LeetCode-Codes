class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        int i = 0;
        for(auto it : mp)
        {
            for(int j = 0; j < min(it.second,2); j++)
            {
                nums[i++] = it.first; 
            }
        }
        return i;
    }
};