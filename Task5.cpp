#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    int largest=(a>b)? a:b;
    cout<<"The largest value is :"<< largest <<endl;
    return 0;
}