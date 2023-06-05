bool searchMatrix(vector<vector<int>>& mat, int target) {
        int i=0,j=max(mat.size(),mat[0].size())-1;
        while(i<=j)
        {
            if(mat[i][j]==target)return true;
            else if(mat[i][j]<target)i++;
            else j--;
        }
        return false;
}