// using Kadane's Algorithm 
// whenever prefix is less than zero assing prefix to zero
 long long maxSubarraySum(int arr[], int n){
        
        long long int prefix=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            maxi=max(maxi,prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return maxi;
    }
