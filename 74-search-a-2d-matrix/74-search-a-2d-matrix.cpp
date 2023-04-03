class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==1 && n==1)
        {
            if(matrix[0][0] == target)
                return true;
            else 
                return false;
            
        }
        int b = 0, r = m-1, mid = b + (r-b)/2;
        bool flag = false;
        while(b<r)
        {
            mid = b + (r-b)/2;
            if(target<matrix[mid][0])
            {
                r = mid - 1;
            }
            else if(target>matrix[mid][n-1])
            {
                b = mid + 1;
            }
            else if(target>=matrix[mid][0] && target<=matrix[mid][n-1])
            {
                // flag = true;
                if(target == matrix[mid][0] || target==matrix[mid][n-1])
                    return true;
                break;
            }
        }
        // if(!flag)
        //     return false;
        mid = b + (r-b)/2;
        // cout<<mid<<endl;
        int l = 0, c = n-1, midr = l + (c-l)/2;
        while(l<c)
        {
            midr = l + (c-l)/2;
            if(target<matrix[mid][midr])
            {
                c = midr - 1;
            }
            else if(target > matrix[mid][midr])
            {
                l = midr + 1;
            }
            else if(target == matrix[mid][midr])
            {
                return true;
                // break;
            }
        }
        midr = l + (c-l)/2;
        if(target == matrix[mid][l])
        {
            return true;
        }
        else 
            return false;
    }
};