class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
       
        int j;
        vector<string> v;
        int maxlength = 0;
        for(int i = 0; i < dictionary.size(); i++)
        {
            int x = 0;
            // bool flag = true;
            for(j = 0; j < dictionary[i].length() && x < s.length();)
            {
                if(s[x] == dictionary[i][j])
                {
                    x++;
                    j++;
                }
                else 
                    x++;
            }
            if(j == dictionary[i].length() && j >= maxlength)
            {
                v.push_back(dictionary[i]);
                maxlength = j;   
            }
            
        }
         sort(v.begin(), v.end(), [](string s1, string s2){
            if(s1.length() == s2.length())
                return s1 < s2;
            return s1.length() > s2.length(); 
        });
        if(v.size() == 0)
        return "";
        else 
            return v[0];
    }
};