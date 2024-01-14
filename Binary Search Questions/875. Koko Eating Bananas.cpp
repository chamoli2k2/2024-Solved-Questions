class Solution {
private:
    int check(vector<int> &nums,int k,int h){
        int n = nums.size(), time = 0;

        for(int i=0; i<n; i++){
            time += nums[i]/k;
            if(nums[i]%k) time++; 
        }

        return time <= h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(), s = 1, e = INT_MAX, ans = -1, mid;

        while(s <= e){
            mid = s + (e - s) / 2;

            if(check(piles,mid,h)){
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