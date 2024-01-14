class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(), s = 1, e = n-2, ans, mid;
        if(n == 1) return nums[0];
        if(n >= 2){
            if(nums[0] != nums[1]) return nums[0];
            if(nums[n-1] != nums[n-2]) return nums[n-1];
        }

        while(s <= e){
            mid = s + (e - s) / 2;

            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]){
                ans = nums[mid];
                break;
            }
            else if(nums[mid] == nums[mid+1]){
                if(mid%2 == 0){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
            else{
                if(mid%2 == 0){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
        }

        return ans;
    }
};