class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.size() == 0)
        {
            return ans;
        }
        vector<map<char,int>> vmp;
        for(int i = 0; i < strs.size(); i++)
        {
            
            map<char,int> mp;
            for(int j = 0; j < strs[i].size(); j++)
            {
                mp[strs[i][j]]++;
            }
            if(i == 0)
            {
                ans.push_back({strs[i]});
                vmp.push_back(mp);
            }
            else 
            {
                bool flag = false;
                for(int k = 0; k < vmp.size(); k++)
                {
                    if(mp == vmp[k])
                    {
                        ans[k].push_back(strs[i]);
                        flag = true;
                    }
                }
                if(!flag)
                {
                    vmp.push_back(mp);
                    ans.push_back({strs[i]});
                    
                }
            }
        }
        
        return ans;
    }
};