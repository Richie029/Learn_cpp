// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
// N = 5
// A[] = {1,2,3,5}            <<---- Example 1
// Output: 4
int findMissing(int arr[],int n){
   int sum=0;
     for(int i=0;i<n-1;i++){
         sum+=array[i];
     }
     int sum2=(n*(n+1))/2;    //sum of all intergers from 1 to n
     return sum2-sum;
}
     
