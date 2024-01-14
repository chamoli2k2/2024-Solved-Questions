class Solution {
private:
    bool check(vector<int> &nums,int mid,int k){
        int n = nums.size(), count = 1, sum = 0;

        for(int i=0; i<n; i++){
            if(sum+nums[i] <= mid){
                sum += nums[i];
            }
            else{
                count++;
                if(nums[i] > mid || count > k) return false;
                sum = nums[i];
            }
        }

        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
         int n = nums.size(), s = 0, e = accumulate(nums.begin(),nums.end(),0), ans = e, mid;

         while(s <= e){
             mid = s + (e - s) / 2;

             if(check(nums,mid,k)){
                 ans = mid;
                 e = mid - 1;
             }
             else{
                 s = mid + 1;
             }
         }

         return ans;
    }
};