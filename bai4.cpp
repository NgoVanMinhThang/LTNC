#include<iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n+1];
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    int dem = 0, mid, left = 1, right = n;
    while(dem == 0 && left <= right)
    {
        mid = (left + right)/2;
        if(x > a[mid]) left = mid + 1;
        else if(x < a[mid]) right = mid - 1;
        else dem = 1;
    }
    if(dem == 1) cout << "YES";
    else cout << "NO";
    return 0;
}