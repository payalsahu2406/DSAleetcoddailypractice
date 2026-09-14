class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // vector<int> row(rowIndex + 1, 1);

        // for(int i = 1; i < rowIndex; i++) {

        //     for(int j = i; j > 0; j--) {

        //         row[j] = row[j] + row[j-1];
        //     }
        // }

        // return row;
    
         vector<vector<int>> ans;

        for(int i=0; i<=rowIndex; i++) {

            vector<int> row(i+1, 1);

            for(int j=1; j<i; j++) {
                row[j] = ans[i-1][j-1] + ans[i-1][j];
            }

            ans.push_back(row);
        }

        return ans[rowIndex];
    }
};