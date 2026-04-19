#include <iostream>
using namespace std;

int main(){
    system("cls");
    int nilai;
    int a = 1;

    cout << "Input: ";
    cin >> nilai;

    for(int i = 1; i <= nilai; i++){
        cout << a;

        if(i < nilai){
            cout << ", ";
        }

        if(i % 2 == 0){
            a = a * 2;
        }else{
            a = a + 7;
        }
    }

    return 0;
}