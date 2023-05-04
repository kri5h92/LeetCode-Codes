class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<char> q;
        int r = 0, d = 0;
        for(char i : senate)
        {
            if(i == 'R')
                r++;
            else 
                d++;
            q.push(i);
        }
        // set<char> s(senate.begin(), senate.end());
        // if(s.size() == 1)
        // {
        //     if(senate[0] == 'R')
        //         return "Radiant";
        //     else 
        //         return "Dire";
           int i = 0, n = senate.size();     
        
        int cd = 0, cr = 0;
        while(q.size() > 1)
        {
            if(r == 0)
                return "Dire";
            else if(d == 0)
                return "Radiant";
                
            if(q.front() == 'D' && cr == 0)
            {
                cd++;
                q.push('D');
            }
            else if(q.front() == 'D' && cr > 0)
            {
                cr--;
                d--;
            }
            else if(q.front() == 'R' && cd == 0)
            {
                cr++;
                q.push('R');
            }    
            else if(q.front() == 'R' && cd > 0)
            {
                cd--;
                r--;
            }
            q.pop();
            i++;
            
        }
        if(q.front() == 'R')
            return "Radiant";
        return "Dire";
    }
};