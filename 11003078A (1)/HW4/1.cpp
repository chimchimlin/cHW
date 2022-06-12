#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> abc(27);
  char ch;

  ifstream oop("oop.txt", ios::in); //設讀txt檔
  while (oop.get(ch))               // get oop.txt 裡的字元
  {
    switch (ch)
    {
    case 'a':
      abc[0]++;
      break;
    case 'b':
      abc[1]++;
      break;
    case 'c':
      abc[2]++;
      break;
    case 'd':
      abc[3]++;
      break;
    case 'e':
      abc[4]++;
      break;
    case 'f':
      abc[5]++;
      break;
    case 'g':
      abc[6]++;
      break;
    case 'h':
      abc[7]++;
      break;
    case 'i':
      abc[8]++;
      break;
    case 'j':
      abc[9]++;
      break;
    case 'k':
      abc[10]++;
      break;
    case 'l':
      abc[11]++;
      break;
    case 'm':
      abc[12]++;
      break;
    case 'n':
      abc[13]++;
      break;
    case 'o':
      abc[14]++;
      break;
    case 'p':
      abc[15]++;
      break;
    case 'q':
      abc[16]++;
      break;
    case 'r':
      abc[17]++;
      break;
    case 's':
      abc[18]++;
      break;
    case 't':
      abc[19]++;
      break;
    case 'u':
      abc[20]++;
      break;
    case 'v':
      abc[21]++;
      break;
    case 'w':
      abc[22]++;
      break;
    case 'x':
      abc[23]++;
      break;
    case 'y':
      abc[24]++;
      break;
    case 'z':
      abc[25]++;
      break;
    }
  }
  oop.close();
  int j = 0;
  while (j < 26)
  {
    cout << "<" << char('a' + j) << "> --" << abc[j] << endl;
    j++;
  }
  int max_index, max = 0;
  for (int i = 0; i < 26; i++)
  {
    if (max < abc[i])
    {
      max_index = i;
      max = abc[i];
    }
  }
  cout << "Max <" << char('a' + max_index) << "> " << max << endl;

  int k = 0, min_index = 0;
  do
  {
    if (abc[min_index] > abc[k])
      min_index = k;
    k++;
  } while (k < 26);
  cout << "Min <" << char('a' + min_index) << "> " << abc[min_index] << endl;
  return 0;
}