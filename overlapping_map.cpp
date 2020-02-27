#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, i, j, k, x, y, arr1[50], arr2[50], sum, flag, count;
    cin >> T;
    for(i = 0; i<T; i++)
    {
      cin >> x;
      cin >> y;

      for(j = 0; j<x; j++)
          cin >> arr1[j];

      for(k = 0; k<y; k++)
          cin >> arr2[k];

      map<int, int>map1;

      for(j = 0; j<x; j++)
      {
        flag = 0;
        for(k = 0; k<y; k++)
        {
          if(arr1[j] == arr2[k])
          {
            count = 2;
            map1.insert(pair<int, int>(count,arr1[j]));
            flag = 1;
            break;
          }
        }
        if(flag == 0)
        {
          count = 1;
          map1.insert(pair<int, int>(count, arr1[j]));
        }
      }
      map<int, int>::iterator mi;
      sum = 0;

      for(mi = map1.begin(); mi != map1.end(); mi++)
      {
        if(mi->first == 2)
        {
          sum = sum +((mi->second)*2);
        }
      }
      sum == 0? cout << -1 << endl: cout << sum << endl;
    }
    return 0;
}
