#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int check (string a,string b){
    if (a.length()!=b.length()){
        return 0;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a==b;
}

int main(){
    int m;
    cin>>m;
    string names[m][2];
    int arr[m];

    for(int i=0;i<m;i++) {
        cin >>arr[i];
        cin >>names[i][0];
        cin >>names[i][1];
    }
    for (int i=0;i<m;i++) {
        if (check(names[i][0],names[i][1])==1){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}