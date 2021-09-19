#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    unordered_map<char, int> mymap;
    int i=0;
    while(i<s.length()){
            mymap[s[i]] += 1;
            i++;
    }
    
    for(auto i: mymap){
        if(i.second > 1){
            cout << i.first << ": " << i.second << endl;;
        }
    }
    
    return 0;
}