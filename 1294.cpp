#include<iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        long long int n,m;
        cin >> n >> m;
        cout << "Case " << t << ": " << (n*m)/2 << endl;
    }
    return 0;
}
