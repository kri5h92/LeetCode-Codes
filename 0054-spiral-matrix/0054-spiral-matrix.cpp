class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> ans;
        int x = 0;
        int stc = 0, endc = m-1;
        int str = 0, endr = n-1;
        while(stc<=endc && str<=endr)
        {
            for(int i = stc; i <= endc; i++)
            {
                ans.push_back(matrix[str][i]);
            }
            // if(x == (n*m))
            //     break;
            str++;
            for(int i = str; i <= endr; i++)
            {
                ans.push_back(matrix[i][endc]);
            }
            // if(x == (n*m))
            //     break;
            endc--;
            if(str<=endr)
            for(int i = endc; i >= stc; i--)
            {
                ans.push_back(matrix[endr][i]);
            }
            // if(x == (n*m))
            //     break;
            endr--;
            if(stc<=endc)
            for(int i = endr; i >= str; i--)
            {
                ans.push_back(matrix[i][stc]);
            }
            // if(x == (n*m))
            //     break;
            stc++;
        }
        return ans;
        
    }
};