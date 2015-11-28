#include <iostream>
#include <string>
using namespace std;

string str,tmp;

int judge(int num,string jud)
{
      if(jud.find(str) != string::npos)
            return 1;
      else
      {
            if(num == tmp.length()-1)
                  return 0;
            else
            {
                  string f;
                  for(int i = 0; i < num ; i++)
                  {
                        f +=

                  }
            }
      }

}

int main()
{
      int x,ctn = 0;

      cin >> x >> str;
      for (int i = 0;i < x ; i++)
      {
            cin >> tmp;
            ctn += judge(0,tmp);
      }
      cout << ctn << endl;
      return 0;
}
