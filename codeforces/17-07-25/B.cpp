#include <iostream>
#include <vector>
using namespace std;

int maxpeaks(vector<int> vec,int n,int k) {
    int count = 0;
    for (int i =0; i <n; i=i+1+k){
        for(int j=i; j<k+i;j++) {
            if (vec[j]==1) {
                break;
            }
            else if (vec[j]==0) {
                continue;
            }
        }
    }
    return count;
}
int main() {
    int n,k,t,a,b;
    vector <int> vec;
    vector <int> vec2;
    cin>>t;
    for (int i=0; i<t;i++) {
        cin >> n >>k;
        for (int j=0; j<n;j++) {
            cin >> a;
            vec.push_back(a);
            vec2.push_back(maxpeaks(vec,n,k));
        }
    }
    for (int i=0;i<t;i++) {
        cout << vec2[i] << endl;
    }
}