#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class score
{

private:
  string name;
  int math;
  int english;
  int nature;
  int society;
  int chinese;
  int total;
  int application; //書審
  int oral;        //口試

public:
  template <class T>
  int Compare_Math(vector<T> &a)
  {
    for (int i = 0; i < 2047; i++)
    {
      int index = i;
      for (int j = i + 1; j < 2048; j++)
      {

        if (a[j].math > a[index].math)
          index = j;
      }
      swap(a[i], a[index]);
    }
    return true;
  }
  

 template <class T>
  int Compare_English(vector<T> &a)
  {
    for (int i = 0; i < 2047; i++)
    {
      int index = i;
      for (int j = i + 1; j < 2048; j++)
      {

        if (a[j].math == a[index].math)
        {
          if(a[j].english > a[index].english)
          index = j;
        }
      }
      swap(a[i], a[index]);
    }
    return true;
  }


  template <class T>
  int Compare_Oral(vector<T> &a)
  {
    for (int i = 0; i < 2047; i++)
    {
      int index = i;
      for (int j = i + 1; j < 2048; j++)
      {

        if (a[j].math == a[index].math)
        {
          if(a[j].english == a[index].english)
          {
            if(a[j].application == a[index].application)
            {
              if(a[j].oral > a[index].oral)
              index = j;
            }
          }
          
        }
      }
      swap(a[i], a[index]);
    }
    return true;
  }

template <class T>
  int Compare_Application(vector<T> &a)
  {
    for (int i = 0; i < 2047; i++)
    {
      int index = i;
      for (int j = i + 1; j < 2048; j++)
      {

        if (a[j].math == a[index].math)
        {
          if(a[j].english == a[index].english)
          {
            if(a[j].application > a[index].application)
            index = j;
          }
          
        }
      }
      swap(a[i], a[index]);
    }
    return true;
  }


  int math1()
  {
    int gj = math + 0;
    return gj;
  }
  int english1()
  {
    int gj = english;
    return gj;
  }
  int nature1()
  {
    int gj = nature + 0;
    return gj;
  }
  int society1()
  {
    int gj = society + 0;
    return gj;
  }
  int chinese1()
  {
    int gj = chinese + 0;
    return gj;
  }
  int total1()
  {
    int gj = total + 0;
    return gj;
  }
  int a1()
  {
    int gj = application + 0;
    return gj;
  }
  int o1()
  {
    int gj = oral + 0;
    return gj;
  }

  void set_scores(int i)
  {
    int applicationscore[] = {70, 75, 80, 85, 90};
    int oralscore[] = {65, 70, 75, 80, 85, 90, 95};
    int application_rand, oral_rand;

    name = "aaaaaa";
    for (int j = 0; j < 6; j++)
    {
      name[j] += rand() % 26;
    }
    //(max - min + 1) + min
    math = rand() % (8 - 4 + 1) + 4;
    if (i > 1023)
      english = rand() % (11 - 7 + 1) + 7;
    else
      english = rand() % (6 - 3 + 1) + 3;
    nature = rand() % (11 - 7 + 1) + 7;
    society = rand() % (11 - 9 + 1) + 9;
    chinese = rand() % (12 - 8 + 1) + 8;
    application_rand = rand() % 5;
    application = applicationscore[application_rand];

    oral_rand = rand() % 7;
    oral = oralscore[oral_rand];

    total = chinese + english + math + nature + society + application + oral;
  }

  void myoutput()
  {
    cout << name << " M=" << math << " E=" << english << " N=" << nature << " S=" << society << " C=" << chinese << " A=" << application << " O=" << oral << " total=" << total << endl;
  }

  void endout(score &t)
  {
    if (this->math == t.math)
      cout << "增額" << name << " M=" << math << " E=" << english << " N=" << nature << " S=" << society << " C=" << chinese << " A=" << application << " O=" << oral << " total=" << total << endl;
  }

  int math_high(vector<score> q)
  {

    int maxmath = 0, math_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].math > maxmath)
      {
        maxmath = q[i].math;
        math_index = i;
      }
    }
    return math_index;
  }

  int english_high(vector<score> q)
  {

    int maxe = 0, e_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].english > maxe)
      {
        maxe = q[i].english;
        e_index = i;
      }
    }
    return e_index;
  }

  int application_high(vector<score> q)
  {

    int maxapplication = 0, application_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].application > maxapplication)
      {
        maxapplication = q[i].application;
        application_index = i;
      }
    }
    return application_index;
  }

  int oral_high(vector<score> q)
  {

    int maxoral = 0, oral_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].oral > maxoral)
      {
        maxoral = q[i].oral;
        oral_index = i;
      }
    }
    return oral_index;
  }
};

int main()
{
  srand(time(NULL));
  vector<score> t, b;

  score a;
  for (int i = 0; i < 2048; i++)
  {
    a.set_scores(i);

    t.push_back(a);
    // t[i].myoutput();
  }

  cout << endl;

  for (auto &a : t)
  {
    a.myoutput();
  }
  cout << endl; //印全部

  bool bb = true;

  for (int j = 0; j < 500; j++)
  {

    if (t[j].Compare_Math(t) == bb)
      cout << "[" << j + 1 << "] ";
    t[j].myoutput();
  }
  for (int j = 500; j <2048 ; j++)
  {
    if(t[499].math1()==t[j].math1())
    {
      cout << "增值";
      t[j].myoutput();
    }
  }
  cout << endl;

  for (int j = 0; j < 350; j++)
  {

    if (t[j].Compare_English(t) == bb)
      cout << "[" << j + 1 << "] ";
    t[j].myoutput();
  }
  for (int j = 350; j <2048 ; j++)
  {
    if(t[349].math1()==t[j].math1())
    {
      if(t[349].english1()==t[j].english1())
      {
      cout << "增值";
      t[j].myoutput();
      }
    }
  }
   cout << endl;

   for (int j = 0; j < 200; j++)
  {

    if (t[j].Compare_Application(t) == bb)
      cout << "[" << j + 1 << "] ";
    t[j].myoutput();
  }
  for (int j = 200; j <2048 ; j++)
  {
    if(t[199].math1()==t[j].math1())
    {
      if(t[199].english1()==t[j].english1())
      {
        if(t[199].a1()==t[j].a1())
        {
        cout << "增值";
        t[j].myoutput();
        }
      }
    }
  }
   cout << endl;
   cout <<"入取"<<endl;
for (int j = 0; j < 150; j++)
  {

    if (t[j].Compare_Oral(t) == bb)
      cout << "[" << j + 1 << "] ";
    t[j].myoutput();
  }
  for (int j = 350; j <2048 ; j++)
  {
    if(t[149].math1()==t[j].math1())
    {
      if(t[149].english1()==t[j].english1())
      {
        if(t[149].a1()==t[j].a1())
        {
           if(t[149].o1()==t[j].o1())
           {
            cout << "增值";
            t[j].myoutput();
           }
        }
      }
    }
  }
   cout << endl;



 


  return 0;
}
