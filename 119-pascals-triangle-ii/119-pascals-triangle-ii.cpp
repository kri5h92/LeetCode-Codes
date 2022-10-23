class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long int x = 1;
        vector<int> ans;
        for(int i =1; i <= rowIndex+1; i++)
        {
            ans.push_back(x);
            x = x * (rowIndex+1 - i)/i;
            
        }
        return ans;
        
    }
};