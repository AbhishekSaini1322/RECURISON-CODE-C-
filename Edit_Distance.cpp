class Solution {
public:

    int solve(string& word1,string& word2, int i, int j){
        // base case
        if(i >= word1.length()){
            // word1 katham ho gya 
            // may be word2 me characters bache hue hai
            return word2.length()-j;
        }

        if(j >= word2.length()){
            // word2 katham ho gya hai
            // maybe word1 me character bache hue hai
            return word1.length()-i;
        }

        int ans = 0;

        if(word1[i] == word2[j]){
            ans = 0 + solve(word1,word2,i+1,j+1);
        }
        else{
            // not match 
            // operation performe karo
            // insert
            int option1 = 1 + solve(word1,word2,i,j+1);
            // remove
            int option2 = 1 + solve(word1,word2,i+1,j);
            // replace
            int option3 = 1 + solve(word1,word2,i+1,j+1);

            ans = min(option1,min(option2,option3));
        }
        return ans;
    }

    int minDistance(string word1, string word2) {
        int i = 0;
        int j = 0;
        int ans = solve(word1,word2,i,j);
        return ans;
    }
};
