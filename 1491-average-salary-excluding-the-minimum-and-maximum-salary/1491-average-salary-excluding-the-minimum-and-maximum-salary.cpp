class Solution {
public:
    double average(vector<int>& salary) {
        int mx = *max_element(salary.begin(), salary.end()), mn = *min_element(salary.begin(), salary.end());
        int sm = accumulate(salary.begin(), salary.end(), 0);
        sm-=(mn+mx);
        double avg = (double)sm/(salary.size()-2);
        return avg;
        
    }
};