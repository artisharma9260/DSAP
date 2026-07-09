#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int countSubArrays(vector<int>& arr,int k){
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            int sum = 0;
            for(int j = i; j < arr.size(); j++){
                sum = sum + arr[j];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;
    }
};
int main(){
    return 0;
}