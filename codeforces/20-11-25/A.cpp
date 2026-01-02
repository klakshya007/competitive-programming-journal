#include <iostream>

using namespace std;

int solution(int a){
    int count_2=0;
    int count=0;
    if (a%2!=0) {
        return 0;
    }
    int m=0;
    while (m!=a){
        m+=2;
        count_2++;
    }
    count++;
    while (count_2>=2) {
        count_2-=2;
        count++;
    }
    return count;
}

int main () {
    int a;
    cin >> a;
    int arr[a];
    for (int i=0; i<a;i++) {
        cin>>arr[i];
    }
    for (int i=0; i<a;i++) {
        cout << solution (arr[i])<<endl;
    }
    return 0;
}