class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        

        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
        ans.push_back(generate_row(i));
        }
        return ans;
    }
    vector<int> generate_row(int i){
            vector<int> ans_row;
            int mul=1;
            ans_row.push_back(mul);
            for(int j=1;j<i;j++)
            {
                mul=mul*(i-j);
                mul=mul/j;
                ans_row.push_back(mul);
            }
            return ans_row;
        }
};