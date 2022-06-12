// prog7_6, ま计篈ぃㄧ计更
#include <iostream>
#include <cstdlib>
#include <bits/c++io.h>

using namespace std;
template <class T>T add(T, T); // 更よΑㄧ计

int main(void)
{
   int a = 10, b = 20;
   double x = 2.30, y = 3.5123;
   float z=1.1,w=3.3;
   string c="abc",d="def"; 
   long double g=-1.7E+308,h=-1.7E+308;
   long long e=10000000000000,f=2000000000000;
   cout << a << "+" << b << "=" << add(a, b) << endl; //int
   cout << x << "+" << y << "=" << add(x, y) << endl; //double
   cout << z << "+" << w << "=" << add(z, w) <<endl; //float
   cout << g << "+" << h << "=" << add(g, h) <<endl; //long double
   cout << e << "+" << f << "=" << add(e, f) <<endl; //long long
   cout << c << "+" << d << "=" << add(c, d) <<endl; //string
   system("pause");
   return 0;
}

template <class T>
T add(T i,T j) // 璹ㄧ计add()
{
   return i + j; // 肚i+j
}
