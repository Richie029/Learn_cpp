// 1 0 1 0 1 0  ===>  0 0 0 1 1 1



void segregate0and1(int arr[], int n) {
        int start=0;
        int end=n-1;
        while(start<=end){
            if(arr[start]==1 && arr[end]==0){
                swap(arr[start],arr[end]); 
                start++;
                end--;
            } 
            if(arr[start]==0){
                start++;
            }
            if(arr[end]==1){
                end--;
            }
        
        }
        
    }
