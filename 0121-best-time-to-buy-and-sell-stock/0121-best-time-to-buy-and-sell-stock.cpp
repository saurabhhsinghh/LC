class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int max_prof=0;
        int min_element=INT_MAX;
        for(int i=0;i<size;i++)
        {
            min_element=min(min_element,prices[i]);
            max_prof=max(max_prof, prices[i]-min_element);
        }
    return max_prof;
    }
};