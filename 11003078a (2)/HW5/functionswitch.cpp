#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int partialsum(vector<int> &, int);
int main(void)
{
   srand(time(NULL));
   vector<int> myvector;

   for (int i = 0; i < 30; i++)
   {
      int a;
      a = rand() % 100 + 1;
      myvector.push_back(a);
   }
   int f;
   cin >> f;

   if (f == 1)
   {
      for (int i = 0; i < myvector.size(); i += 2)
         cout << myvector[i] << " ";
   }
   if (f == 2)
   {
      for (int i = 1; i < myvector.size(); i += 2)
         cout << myvector[i] << " ";
   }
   if (f == 3)
   {
      for (int i = 0; i < myvector.size(); i++)
      {
         if (i % 3 == 0)
            cout << myvector[i] << " ";
      }
   }
   if (f == 4)
   {
      for (int i = 0; i < myvector.size(); i++)
      {
         if (i % 3 == 0)
            cout << myvector[i + 1] << " ";
      }
   }
   if (f == 5)
   {
      for (int i = 0; i < myvector.size(); i++)
      {
         if (i % 3 == 0)
            cout << myvector[i + 2] << " ";
      }
   }

   cout << "=" << partialsum(myvector, f) << endl;
   system("pause");
   return 0;
}

int partialsum(vector<int> &myvect, int f)
{
   int sum = 0;
   int i = 0, j = 0;
   switch (f)
   {
   case 1:
      for (int i = 0; i < myvect.size(); i += 2)
         sum += myvect[i];
      break;
   case 2:
      for (int i = 1; i < myvect.size(); i += 2)
         sum += myvect[i];
      break;
   case 3: // 3k
      while (i < myvect.size())
      {
         if (i % 3 == 0)
            sum += myvect[i];
         i++;
      }
      break;
   case 4:
      do
      {
         if (j % 3 == 0)
            sum += myvect[j + 1];
         j++;
      } while (j < myvect.size());
      break;
   case 5:
      for (int i = 0; i < myvect.size(); i++)
      {
         if (i % 3 == 0)
            sum += myvect[i + 2];
         i++;
      }
      break;
   }
   return sum;
}
