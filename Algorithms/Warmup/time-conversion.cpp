#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  int a, b;
  char s[8];
  cin >> a;
  for (int i = 0; i < 8; i++)
  {
    cin >> s[i];
  }
  if (s[6] == 'P' && a == 12)
  {
    cout << "12";
    for (int i = 0; i < 6; i++)
    {
      cout << s[i];
    }
  }
  else if (s[6] == 'P')
  {
    a = a + 12;
    cout << a;
    for (int i = 0; i < 6; i++)
    {
      cout << s[i];
    }
  }
  else if (a < 10 && s[6] == 'A')
  {
    cout << "0" << a;
    for (int i = 0; i < 6; i++)
    {
      cout << s[i];
    }
  }
  else if (s[6] == 'A' && a == 12)
  {
    cout << "00";
    for (int i = 0; i < 6; i++)
    {
      cout << s[i];
    }
  }
  else
  {
    cout << a;
    for (int i = 0; i < 6; i++)
    {
      cout << s[i];
    }
  }

  return 0;
}
