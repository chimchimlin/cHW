#include<iostream>

using namespace std;

int main ()
{
int a,b,c,d;
int temp;
int arr[4];
int max=0;
cout <<"number:";
cin >> a >> b >> c >>d;
arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;
for(int i=0;i<4;i++)
{
    if(max<arr[i])
    max=arr[i];

}
cout << max <<endl;
return 0;
}