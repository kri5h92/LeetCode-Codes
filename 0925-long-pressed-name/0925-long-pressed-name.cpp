class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        int n = name.length(), m = typed.length();
        while(i < n && j < m)
        {
            if(name[i] != typed[j])
            {
                if(j == 0)
                    return false;
                while(typed[j-1] == typed[j])
                    j++;
            }
            if(name[i] == typed[j])
            {
                i++;
                j++;
            }
            else 
                return false;
        }
        while(typed[j-1] == typed[j])
                    j++;
        if(i==n && j==m)
            return true;
        else 
            return false;
    }
};