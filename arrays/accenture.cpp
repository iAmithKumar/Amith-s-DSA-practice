#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input1;
    cin >> input1;

    int i=1;
    int cx = 1;
    int cy = 1;

    while(i <= input1){
      if(i > 1){
        int tempx = cx;
        cx = cy;
        cy = tempx + cy;
      }
      i++;
    }

    int total = cx + cy;
    int ans = total * total;

    //return ans;
    cout << ans << endl;

    return 0;
}