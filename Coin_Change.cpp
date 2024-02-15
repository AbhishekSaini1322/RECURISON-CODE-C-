class Solution {
public:
 
// --------------------------------- THIS CODE SHOW TIME LIMIT EXCESSED ---------------------------------------

   int solve(vector<int>& coins, int amount){
    //    base case
    if(amount == 0){
        return 0;
    }

    int mini = INT_MAX;
    int ans = INT_MIN;

    for(int i=0; i<coins.size(); i++){
        int coin = coins[i];
        // current coin ko tabhi use krege jab amount ki value >= hogi
        if(coin <= amount){
            int recAns = solve(coins,amount-coin);

            if(recAns != INT_MAX){
                ans = 1 + recAns;
            }
            mini = min(mini,ans);
        }
       
    }
     return mini;
   }

    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins,amount);

        if(ans == INT_MIN){
            return -1;
        }
        else if(ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};