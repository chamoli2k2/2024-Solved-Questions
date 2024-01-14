class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, n = gas.size(), balance = 0, defecit = 0;

        for(int i=0; i<n; i++){
            balance += gas[i]-cost[i];
            if(balance < 0){
                defecit += balance;
                start = i+1;
                balance = 0;
            }
        }

        if(defecit+balance < 0) return -1;

        return start;
    }
};