#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int a, n, m;
    cin >> a >> n >> m;
    int luythua = 1;
    for(int i = 1; i <= n; i++){
        luythua = luythua * a;
        luythua = luythua % m;
    }
    cout << luythua % m << endl;
    return 0;
} 