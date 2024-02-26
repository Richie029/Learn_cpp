// Given an one-dimensional unsorted array A containing N integers.

// You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

// Return 1 if any such pair exists else return 0.


int Solution::solve(vector<int> &A, int B) {
sort(A.begin(),A.end());
int start=0;
int end=1;
int n=A.size();
if(B<0)    
B*=-1;    // if B is negative we change it to positive 
while(end<n){
    if(A[end]-A[start]==B){
        return 1;
    }else if(A[end]-A[start]>B){
        start++;
    } else{
        end++;
    }
    if(start==end){
        end++;    
    }
   
}  
return 0;  
}
