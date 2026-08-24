class NumMatrix {
public:
    vector<vector<int>> p;
    NumMatrix(vector<vector<int>>& m) {
        int rows = m.size(), cols = m.front().size();
        p.resize(rows+1,vector<int>(cols+1,0));
        for(auto i = 0 ; i < rows ; ++i){
            for(auto j = 0 ; j < cols; ++j){
                p[i+1][j+1] = m[i][j] - p[i][j] + p[i+1][j] + p[i][j+1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return p[row2+1][col2+1] + p[row1][col1] - p[row1][col2+1] - p[row2+1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */