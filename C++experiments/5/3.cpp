#include<bits/stdc++.h>
using namespace std;
int arr[120];
int n;
int r, l;
int bin_find(int x){//二分查找
    int mid;
    l = 0;
    r = n - 1;
    while (l <= r){
        mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;
    cout << bin_find(x);
    return 0;
}