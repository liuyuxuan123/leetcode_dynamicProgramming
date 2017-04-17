// You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
//
// Example 1:
// coins = [1, 2, 5], amount = 11
// return 3 (11 = 5 + 5 + 1)
//
// Example 2:
// coins = [2], amount = 3
// return -1.


#include <iostream>
#include <vector>
using namespace std;


int coinChange(vector<int>& coins, int amount){
    vector<int> totalCount(amount + 1,amount + 1);

    totalCount[0] = 0;

    for(int i = 1;i <= amount;i++){
        for(int j = 0;j < coins.size();j++){
            if(coins[j] <= i){
                totalAmount[i] = min(totalAmount[i],totalAmount[i - coins[j]] + 1));
            }
        }
    }

    return totalAmount[amount] > amount ? -1 : totalAmount[amount];

}

int main(){



    return 0;
}
