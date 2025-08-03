#include <iostream>
using namespace std;
int median_array(int array[], int n){
    if(n<1){
        return 0;
    }
    if(n%2==0){
        return 0;
    }
    int temp[n];
    for(int i=0;i<n;++i){
        temp[i]=array[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(temp[j]>temp[j+1]){
                int t=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=t;
            }
        }
    }
    return temp[n/2];
}