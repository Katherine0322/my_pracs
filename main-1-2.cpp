#include <iostream>
using namespace std;
extern double array_mean(int array[], int);
int main(){
    int array[]={67,12,33};
    int n=3;
    cout<<array_mean(array,n)<<endl;
    return 0;
}