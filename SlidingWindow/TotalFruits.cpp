#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int totalFruits(vector<int>& fruits){
        unordered_map<int,int>basket;
        int maxFruits = 0;
        int left = 0;
        for(int right = 0; right < fruits.size();right++){
            basket[fruits[right]]++;
            while(basket.size() > 2){
                basket[fruits[left]]--;

                if(basket[fruits[left]] == 0){
                    basket.erase(fruits[left]);
                }
                left++;
            }
            maxFruits = max(maxFruits,right-left+1);
        }
        return maxFruits;
    }
};
int main(){
    Solution obj;
    vector<int>fruits = {1,2,1,2,3};
    cout<<obj.totalFruits(fruits)<<endl;
    return 0;
}