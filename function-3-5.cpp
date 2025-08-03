#include <iostream>
using namespace std;
double sum_even(double array[], int n){
    if(n<1){
        return 0;
    }
    double sum=0.0;
    for(int i=1;i<n;i+=2){
        sum=array[i]+sum;
        }
    return sum;
}