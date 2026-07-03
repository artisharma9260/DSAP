#include <bits/stdc++.h>
using namespace std;
int SortArray(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largest = SortArray(arr);
    cout << "Largest element is " << largest;
    return 0;
}