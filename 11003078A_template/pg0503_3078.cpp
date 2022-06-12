#include <bits/stdc++.h>
using namespace std;

class Mystudent
{

private:
  string myname;
  int math;
  int eng;
  float average;

public:
  int operator<(Mystudent &a)
  {
    if (this->math > a.math)
      return 1;
    else if (this->math == a.math)
    {
      if (this->eng > a.eng)
        return 1;
      else if (this->eng == a.eng)
      {
        if (this->average > a.average)
          return 1;
      }
      return 0;
    }

    return 0;
  }

  // Mystudent(string iname, int ma,int eng):myname(iname), math(ma),eng(eng){}

  void data()
  {
    myname = "aaaaaa";
    for (int j = 0; j < 6; j++)
    {
      myname[j] += rand() % 26;
    }
    math = rand() % 101;
    eng = rand() % 101;
    average = (math + eng) / 2;
  }
  void output()
  {
    cout << myname << " M=" << math << " E=" << eng << " average=" << average << endl;
  }
};

template <class T>
void findmax(vector<T> &a)
{
  for (int i = 0; i < 19; i++)
  {
    int index = i;
    for (int j = i + 1; j < 20; j++)
    {

      if (a[j] < a[index])
        index = j;
    }
    swap(a[i], a[index]);
  }
}

int main()
{
  srand(time(NULL));
  Mystudent a;
  vector<Mystudent> t;

  for (int i = 0; i < 20; i++)
  {
    a.data();

    t.push_back(a);
  }

  for (auto &a : t)
    a.output();
  cout << endl;

  findmax(t);

  for (auto &a : t)
    a.output();
  cout << endl;
}