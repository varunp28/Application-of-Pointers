#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main() {
    int a=25,b=27;
    swap(&a,&b);
    cout<<a<<endl<<b;
}

//O/P:
//25
//27
