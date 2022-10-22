class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
       
        int j;
        string maxstring = "";
        // int maxlength = 0;
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
            if(j == dictionary[i].length() && j >= maxstring.length())
            {
                // v.push_back(dictionary[i]);
                // maxlength = j;   
                if(j == maxstring.length())
                    maxstring = dictionary[i] < maxstring ? dictionary[i] : maxstring;
                else 
                    maxstring = dictionary[i];
            }
            
        }
        return maxstring;
    }
};