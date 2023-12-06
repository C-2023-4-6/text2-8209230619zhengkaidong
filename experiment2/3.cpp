#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  int n;
  cin >> n;
  bool *stu = new bool[n + 1];
  memset(stu, 1, sizeof(stu));
  for (int i = 2; i <= n / 2; i++)
  {
    int t(1);
    while (t * i < n)
    {
      if (stu[t * i])
        stu[t * i] = 0;
      else
        stu[t * i] = 1;
      t++;
    }
  }
  for (int i = n / 2 + 1; i <= n; i++)
    if (stu[i])
      stu[i] = 0;
    else
      stu[i] = 1;
  for (int i = 1; i <= n; i++)
    if (stu[i])
      cout << i << ' ';
  system("pause");
  return 0;
}