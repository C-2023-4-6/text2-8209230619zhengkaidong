#include <iostream>
#include <string>
using namespace std;

int flag;

int indexof(string s1, string s2, int cur1 = 0, int cur2 = 0)
{
  int n = s1.size();
  int m = s2.size();
  if (cur2 == n)
    return flag;
  else if (cur1 == m)
    return -1;
  if (s1[cur1] == s2[cur2])
  {
    if (cur1 == 0)
      flag == cur2;
    indexof(s1, s2, cur1 + 1, cur2 + 1);
  }
  else
  {
    cur2++;
    cur1 = 0;
  }
  return indexof(s1, s2, cur1, cur2);
}

int main()
{
  string s1, s2;
  flag = -1;
  getline(cin, s1, '\n');
  getline(cin, s2, '\n');
  int n = s1.size();
  int m = s2.size();
  for (int i = 0; i < m; i++)
  {
    int t1 = 0;
    int t2 = i;
    while (s1[t1] == s2[t2])
    {
      t2++;
      t1++;
      if (t1 == n)
      {
        flag = i;
        break;
      }
    }
  }
  cout << flag;
  system("pause");
  return 0;
}