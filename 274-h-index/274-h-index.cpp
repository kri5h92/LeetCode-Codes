class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int>mem(1001,0);
        for(auto i : citations)
        {
            mem[i]++;
        }
        int x = citations.size();
        for(int i = mem.size()-2; i >= 0; i--)
        {
            mem[i] += mem[i+1];
            // x = mem[i];
        }
        int mx = *max_element(citations.begin(), citations.end());
        for(int i = mx; i >= 0; i--)
        {
            cout<<mem[i]<<" "<<i<<endl;
            if(mem[i] >= i)
                return i;
        }
        return 0;
        
    }
};