class Solution {
private:
    bool check(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E'
        || ch == 'I' || ch == 'O' || ch == 'U';
    }
public:
    bool halvesAreAlike(string s) {
        int n = s.size(), count1 = 0, count2 = 0, m = n/2;

        for(int i=0; i<n/2; i++){
            if(check(s[i])) count1++;
            if(check(s[i+m])) count2++;
        }

        return count1 == count2;
    }
};