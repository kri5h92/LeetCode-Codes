class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> visited;
        int m = 0, count = 0, x = 0;
        for(int i = 0; i < s.length(); i++)
        {
            count++;
            if(visited[s[i]]++ > 0)
            {   
                while(s[x] != s[i])
                {
                    visited[s[x]]--;
                    count--;
                    x++;
                }
                visited[s[i]]--;
                count--;
                x++;
                
            }
            m = max(count, m);
        }
        return m;
        
    }
};