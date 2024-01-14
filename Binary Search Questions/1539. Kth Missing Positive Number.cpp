class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n = nums.size(), s = 0, e = n-1, ans = -1, mid;

        while(s <= e){
            mid = s + (e - s) / 2;
            if(nums[mid]-(mid+1) < k){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }

        }

        return ans == -1 ? k : nums[ans] + k-(nums[ans]-(ans+1));
    }
};