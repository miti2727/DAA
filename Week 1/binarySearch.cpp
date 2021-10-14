#include <bits/stdc++.h>
using namespace std;

void binary(int *arr, int key,int n)
{
    int l = 0, r = n - 1, comp = 0;
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (++comp && arr[mid] == key){
            cout << key << " is present\n";
            cout << "Total comparisions = " << comp << endl;
            return;
        }
        else if (key > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << key << " is not present\n";
    cout << "Total comparisions = " << comp << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> key;
        binary(arr,key,n);
    }
}
