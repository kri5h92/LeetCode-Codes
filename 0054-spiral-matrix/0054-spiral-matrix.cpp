class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> ans(n*m);
        int x = 0;
        int stc = 0, endc = m-1;
        int str = 0, endr = n-1;
        while(stc<=endc && str<=endr)
        {
            for(int i = stc; i <= endc; i++)
            {
                ans[x++] = matrix[str][i];
            }
            if(x == (n*m))
                break;
            str++;
            for(int i = str; i <= endr; i++)
            {
                ans[x++] = matrix[i][endc];
            }
            if(x == (n*m))
                break;
            endc--;
            for(int i = endc; i >= stc; i--)
            {
                ans[x++] = matrix[endr][i];
            }
            if(x == (n*m))
                break;
            endr--;
            for(int i = endr; i >= str; i--)
            {
                ans[x++] = matrix[i][stc];
            }
            if(x == (n*m))
                break;
            stc++;
        }
        return ans;
        
    }
};