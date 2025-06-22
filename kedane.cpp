#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    long long  n;
    cin >> n;
    long long  arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long  maxsum = INT_MIN;
     long long currentsum = 0;
    for (int j =0; j< n; j++)
    {
        currentsum = max(arr[j], currentsum + arr[j]);
maxsum = max(maxsum, currentsum);
    }
    cout << maxsum;

    return 0;
}