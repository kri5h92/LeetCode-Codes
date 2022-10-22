class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(), dictionary.end(), [](string s1, string s2){
            if(s1.length() == s2.length())
                return s1 < s2;
            return s1.length() > s2.length(); 
        });
        int j;
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
            if(j == dictionary[i].length())
                return dictionary[i];
                
        }
        return "";
    }
};