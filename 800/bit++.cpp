#include<iostream>

using namespace std;

int main(void)
{
  int n, x=0;
  string s;
  cin >> n;
  while (n--)
  {
    cin >> s;
    if (s[1] == '+')
      x++;
    else
      x--;
  }
  cout << x;
  return 0;
}