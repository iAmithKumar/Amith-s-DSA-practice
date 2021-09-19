#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, ans1, ans2;
    vector<int> res;
    cin >> N; cin.ignore();
    if(N == 0){
        cout << "0" << endl;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        int t;
        cin >> t; cin.ignore();
        res.push_back(t);
    }

    if(res.size()==1){
      cout << res[0] << endl;
      return 0;
    }

    ans1=INT_MAX;
    ans2=INT_MIN;
    for(int i=0; i<res.size(); i++){
        if(res[i]>0 && res[i]<ans1){
            ans1 = res[i];
            cout << ans1 << " ";
        }
        else if(res[i]<0 && res[i]>ans2){
            ans2 = res[i];
        }
    }

    if(abs(ans2)>=ans1){
        cout << ans1 << endl;
        
    }
    else{
        cout << ans2 << endl;
        cout << abs(ans2) << endl;
    }
    return 0;
}