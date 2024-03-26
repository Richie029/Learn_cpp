// Approach ==> imagine like a 1D array !! 

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N=matrix.size(),M=matrix[0].size();
        int start=0,end=(N*M)-1;
    while (start<=end) {
        int mid=start+((end-start)/2);
        int row_idx=mid/M;
        int col_idx=mid%M;
        if(matrix[row_idx][col_idx]==target){
            return true;
        }
        else if (matrix[row_idx][col_idx]<target){
            start=mid+1;
        } else{
            end=mid-1;
        }
    }
    return false;
    }
