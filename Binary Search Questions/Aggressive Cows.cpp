#include<bits/stdc++.h>
bool check(vector<int> &nums,int mid,int k){
    int n = nums.size(), mini = nums[0], count = 1;
    for(int i=1; i<n; i++){
        if(nums[i]-mini >= mid){
            count++;
            if(count == k) return true;
            mini = nums[i];
        }    
    }

    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int s = 1, e = stalls[n-1], mid, ans = -1;
    

    while(s <= e){
        mid = s + (e - s) / 2;
        if(check(stalls,mid,k)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return ans;
}