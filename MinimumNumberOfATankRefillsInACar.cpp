#include <iostream>
using namespace std;

int main() {
    int d ,m;
     cout<<"enter the distance" ;
     cin>>d;
     cout<<"enter the capicity of a car";
     cin>>m;
    int arr[7] = {1, 3, 6,7, 12, 15,18};
    int refill = 0;
    int current = 0;


    while (current + m < d) {
        int last = current;
        for (int i=0; i < 7 && arr[i] - last <= m; i++) {
            current = arr[i]; 
        }
        if (current == last) {
            cout << "Impossible to reach the destination" << endl;
            return 0;
        }
        refill++;
    }

    cout << "Minimum number of refills needed: " << refill << endl;

    return 0;
}

