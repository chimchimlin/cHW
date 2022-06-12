#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[25];
  int i = 0, k = 0;
  int max = 0;
  while (cin >> arr[i] && i < 24)
  {
    i++;
  }
  while (k < 25)
  {
    if (max < arr[k])
      max = arr[k];
    k++;
  }
  cout << "MAX=" << max << endl;
  return 0;
}