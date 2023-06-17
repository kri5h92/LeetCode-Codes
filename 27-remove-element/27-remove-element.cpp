class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int,int> m;
        for(auto i : nums)
        {
            m[i]++;
        }
        nums.clear();
        int ans = 0;
        for(auto i : m)
        {
            if(val == i.first)
                continue;
            for(int j = 0; j < (int)i.second; j++)
            {
                nums.push_back(i.first);
                ans++;
            }
        }
        return ans;
    }
};