#include <iostream>
using namespace std;
double weighted_average(int array[], int n){
    if(n<1){
        return 0;
    }
    double sum=0.0;
    for(int i=0;i<n;i++){
        int count=0;
        double value=array[i];
        for(int j=0;j<n;j++){
            if(array [j]==value){
                count++;
            }
        }
         sum =sum+(value*count/n);
    }
    return sum;
}