#include<iostream>
using namespace std;
void Pattern7(int n){
    for (int i = 1; i <= n; i++){
        // for Space
            for (int j = 1; j <= n - i; j++){
                cout << " ";
            }
        // for Stars
              for (int j = 1; j <= (2 * i) - 1; j++){
                cout << "*";
            }
        // for Space
              for (int j = 1; j <= n - i; j++){
                cout << " ";
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
        Pattern7(n);
    }
}