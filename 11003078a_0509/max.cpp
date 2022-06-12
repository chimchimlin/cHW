#include<bits/stdc++.h>
using namespace std;


int main ()
{
int arr[25];
int i=0;
int max=0;
for(int i=0;i<25;i++)
  {

  cin >> arr[i];
  }
for(int k=0;k<25;k++)
  {
    if(max<arr[k])
    max=arr[k];
  } 

  cout <<"MAX="<<max << endl;
  return 0;
}