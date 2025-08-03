#include <iostream>
using namespace std;
extern double sum_even(double array[], int);
int main(){
    double array[]={1.0,2.0,3.0,4.0,5.0};
    int n=5;
    cout<<sum_even(array,n)<<endl;
    return 0;
}
