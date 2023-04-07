class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i = 0, j = 0;
        vector<vector<int>> ans;
        while(i < firstList.size() && j < secondList.size())
        {
            int st = max(firstList[i][0], secondList[j][0]);
            int end = min(firstList[i][1], secondList[j][1]);
            if(st<=end)
                ans.push_back({st,end});
            if(firstList[i][1] > secondList[j][1])
                j++;
            else 
                i++;
            
        }
        return ans;
    }
};