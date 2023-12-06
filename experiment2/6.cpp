#include <iostream>
#include <string>
#include <map>
using namespace std;

void count(string c, int *counts)
{
}

int main()
{
  char c[100];
  int m(0);
  c[m] = tolower(getchar());
  while (c[m] != '\n')
  {
    c[m + 1] = getchar();
    if (isupper(c[m + 1]))
      tolower(c[m + 1]);
    m++;
  }
  map<char, int> mp;
  mp.clear();
  for (int i = 0; i < m; i++)
    mp[c[i]] += 1;
  for (auto iter = mp.begin(); iter != mp.end(); ++iter)
  {
    if (iter->first != ' ')
      cout << iter->first << ": " << iter->second << "times" << endl;
  }
  system("pause");
  return 0;
}