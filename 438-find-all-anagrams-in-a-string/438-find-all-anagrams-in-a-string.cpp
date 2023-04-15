class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int pl = p.size(), sl = s.size();
        if(pl > sl)
            return ans;
        map<char,int> mp1,mp2;
        for(int i = 0; i < 26; i++)
        {
            mp1['a' + i] = 0;
            mp2['a' + i] = 0;
        }
        for(int i = 0; i < pl; i++)
        {
            mp1[p[i]]++;
            mp2[s[i]]++;
        }
        if(mp1==mp2)
            ans.push_back(0);
        for(int i = pl; i < sl; i++)
        {
            
            mp2[s[i]]++;   
            mp2[s[i-pl]]--;
            // for(auto i : mp1)
            // {
            //     cout<<i.first<<" "<<i.second<<endl;
            // }
            // for(auto i : mp2)
            // {
            //     cout<<i.first<<" "<<i.second<<endl;
            // }
            if(mp1==mp2)
                ans.push_back(i-pl+1);
        }
        return ans;
    }
};