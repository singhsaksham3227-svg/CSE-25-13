
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n";
    cin>>n;
    long long fact=1;
    if (n<0)
    cout<<"factorial dne";
    else {
        for(int i=1;i<=n;i++){
fact=fact*i;
        }
        cout<<"factorial="<<fact<<endl;

    }
    return 0;
}