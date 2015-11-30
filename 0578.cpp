#include <iostream>
#include <string>
using namespace std;
string str,tmp;

int judge(string _judge)
{
      if(_judge.find(str) != string::npos)
            return 1;
      else
      {
            for (int i = 1 ; i < tm.length()/2 ; i++)
            {
                  for (int j = 0 ; j < i ; j++)
                  {
                        for (int k = 0; i + k < tm.length();k += j)
                        {

                        }
                  }

            }

      }

      return 0;
}



int main()
{
      int x,ctn = 0;

      cin >> x >> str;
      for (int i = 0;i < x ; i++)
      {
            cin >> tmp;
            ctn += judge(tmp);
      }
      cout << ctn << endl;
      return 0;
}
