#include<iostream>

using namespace std;

int main(void)
{
    int n, x, y;
    cin >> n >> x >> y;
    if ((x < n/2 || y < n/2) && (n % x == 0 || n % y == 0))
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}