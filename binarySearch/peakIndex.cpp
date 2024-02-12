//Peak Index in a Mountain Array(Leetcode question no: 852)
// arr[0]<arr[1]<....<arr[i-1]<arr[i]
//arr[i]>arr[i+1]>arr[i+2]........
// Input:arr=[0,1,0]
//Output: 1


int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=s+((e-s)/2);
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            } else{
                e=mid;
            }
            mid=s+((e-s)/2);
        }
        return s;
    }
