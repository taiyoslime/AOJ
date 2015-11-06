#include <iostream>
using namespace std;

int main()
{
  int j,v,n;
  cin>>n;
  int num[n];
  for(int i=0;i<n;i++)
  {
    cin >> num[i];
  }
  for (int i = 1; i < n; i++) {
      v = num[i];
      j = i - 1;
      while(j >= 0 && num[j] > v)
      {
      num[j+1] = num[j];
      j--;
      }
  num[j+1] = v;

  for(int i = 0;i < n-1;i++)
  {
    cout<<num[i]<<" ";
  }
  cout << num[n-1] << endl;

  }

}
