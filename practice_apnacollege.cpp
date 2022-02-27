#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int a, b, c;
  cin >> a >>b >> c;
  if (a > b)
  {
    if (a > c)
    {
      cout << "largest number is" << endl<< a;
    }
    else
    {
      cout << "largest number is" << c;
    }
  }
  else if (b > c)
  {
    cout << "largest number is" << b;
  }
  else
  {
    cout << "largest number is" << c;
  }

  return 0;
}