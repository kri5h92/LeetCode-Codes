class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        vector<int> ans;
        int mx = 0, temp;
        bool flag = false;
        for(auto it : mp)
        {
            if(it.second > mx && it.second > n/3)
            {
                temp = it.first;
                mx = it.second;
                flag = true;
            }
        }
        if(flag)
        {ans.push_back(temp);
        mp.erase(temp);
        for(auto it : mp)
            cout<<it.first<<" "<<it.second<<endl;
        mx = 0;
        flag = false;
        for(auto it : mp)
        {
            if(it.second > mx  && it.second > n/3)
            {
                temp = it.first;
                mx = it.second;
                flag = true;
            }
        }
         if(flag)
        ans.push_back(temp);}
        return ans;
        
    }
};