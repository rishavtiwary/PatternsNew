#include<iostream>
using namespace std;
void Pattern5(int n){
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        Pattern5(n);
    }
}