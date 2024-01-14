class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int mp1[26] = {0}, mp2[26] = {0};
        int n = word1.size(), m = word2.size();
        if(n != m) return false;

        for(int i=0; i<n; i++){
            mp1[word1[i]-'a']++;
            mp2[word2[i]-'a']++;
        }

        vector<int> s1, s2;
        for(int i=0; i<26; i++){
        
            if(mp1[i] > 0) s1.push_back(mp1[i]);
            if(mp2[i] > 0) s2.push_back(mp2[i]);
            if(mp1[i] > 0 && mp2[i] == 0) return false;
            if(mp2[i] > 0 && mp1[i] == 0) return false;
        }

        // Base case
        if(s1.size() != s2.size()) return false;

        sort(begin(s1),end(s1));
        sort(begin(s2),end(s2));

        for(int i=0; i<s1.size(); i++){
            if(s1[i] != s2[i]) return false;
        }

        return true;
    }
};