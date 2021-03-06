#include<iostream>
using namespace std;
bool a[1000];

void sangEratosthenes(int n)
{
    for (int i = 2; i <= n; i++){
        a[i] = true;
    }
    for (int i = 2 ; i <= n; ++i) {
        if (a[i] == true){
            for (int j = i * 2; j <= n; j += i) {
                a[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if(a[i]) cout << i << " ";
    }
}

int main ()
{
    int n;
    cin >> n;
    sangEratosthenes(n);
    return 0;   
}