#include <bits/stdc++.h>
using namespace std;

class MyClass {
 private:
       string name;
       int score;
 public:  
      MyClass(string,int);
      void output()
      {
       cout << "Name "<< name <<" : ";
       cout << "Score="<< score << endl;
      }
};

MyClass::MyClass(string n,int s)
{
  name=n;
  score=s;
  cout << "MyClass «Øºc¤¸³Q©I¥s" <<endl;
}

int main()
{
  vector<MyClass> name;

  MyClass name1("Sherry",100);
  MyClass name2("Jasone",80);
  MyClass name3("Window",40);

  name.push_back(name1);
  name.push_back(name2);
  name.push_back(name3);

  name[0].output();
  name[1].output();
  name[2].output();

  return 0;
}