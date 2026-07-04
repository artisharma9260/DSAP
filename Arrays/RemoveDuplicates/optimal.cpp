#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int removeDuplicates(vector<int>& arr){
        int n = arr.size();
        int i = 0;
        for(int j = 1; j < n; j++){
            if(arr[i] != arr[j]){
                i++;
                arr[i] = arr[j];
            }
        }
        return i + 1;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int  i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    Solution obj;
    int ans = obj.removeDuplicates(arr);
    cout<<ans;
    for(int i = 0; i < ans; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}