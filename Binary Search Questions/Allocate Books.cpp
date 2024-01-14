bool check(vector<int> &arr,int mid,int n,int m){
    int count = 0, k = 1;
    for(int i=0; i<n; i++){
        if(count+arr[i] <= mid){
            count += arr[i];
        }
        else{
            k++;
            if(arr[i] > mid || k > m) return false;
            count = arr[i];
        }
    }

    return true;
}
int findPages(vector<int>& arr, int n, int m) {
    int max_sum=0;
    if(n < m) return -1;
    for(int i=0;i<n;i++){
        max_sum=max_sum+arr[i];
    }
    int e=max_sum,s=0,ans=-1,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(check(arr,mid,n,m)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}