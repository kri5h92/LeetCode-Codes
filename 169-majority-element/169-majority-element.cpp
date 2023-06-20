class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums)
            mp[i]++;
        int mx = 0, mxe;
        for(auto it: mp)
        {
            if(it.second > mx)
            {
                mx = it.second, mxe = it.first;
            }
        }
        return mxe;
    }
};