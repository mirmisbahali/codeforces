#include<iostream>

using namespace std;

int main(void)
{
  int n, x, y, z, probs=0;
  cin >> n;
  while (n--)
  {
    cin >> x >> y >> z;
    if (x+y+z >= 2)
      probs++;
    else
      continue;

  }
  cout << probs;
  return 0;

}