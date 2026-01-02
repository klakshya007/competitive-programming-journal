#include <iostream>

using namespace std;

int check (int a, int b, int c, int d) {
    if (a==b&&b==c&&c==d){
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n][4];
    for(int i=0;i<n;i++){
        cin>>arr[i][1];
        cin>>arr[i][2];
        cin>>arr[i][3];
        cin>>arr[i][4];
    }
    for(int i=0;i<n;i++){
        if(check(arr[i][1],arr[i][2],arr[i][3],arr[i][4]) ==1) {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}