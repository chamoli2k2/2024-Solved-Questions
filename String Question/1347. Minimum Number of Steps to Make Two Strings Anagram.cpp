class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0, n = s.size();
        unordered_map<char,int> mp1, mp2;
        for(int i=0; i<n; i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        for(auto &[ch,fq] : mp1){
            // checking if frequency of character is same or not
            if(mp2[ch] < fq){
                ans += fq-mp2[ch];
            }
        }

        return ans;
    }
};