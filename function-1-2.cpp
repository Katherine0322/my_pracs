#include <iostream>
using namespace std;
double array_mean(int array[], int n){
    double average=0.0;
    double sum=0.0;
    if(n<1){
        return 0.0;
    }
    for(int i=0;i<n;i++){
        sum=array[i]+sum;
        average=sum/n;
    }
    return average;
}
