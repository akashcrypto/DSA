class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vc;
        for(int i=0; i<numRows; i++) {
            vector<int> tmp;
            for(int j=0; j<=i; j++) {
                if(j==0 || i==j)
                    tmp.push_back(1);
                else {
                    tmp.push_back(vc[i-1][j] + vc[i-1][j-1]);
                }
            }
            vc.push_back(tmp);
        }
        return vc;
    }
};