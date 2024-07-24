#include <iostream>
using namespace std;
int main() {
    int l1,l2,l3;
    cout<<"Enter three lenghts"<<endl;
    cin>>l1>>l2>>l3;
    //equilateral triangle has all three sides equal
    if(l1+l2==l3&&l1+l2+l3==180){
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(l1==l2&&l1+l2!=l3){
        cout<<"Isosceles Triangle"<<endl;
    }
    else if(l1+l2!=l3){
        cout<<"Scalen Triangle"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}