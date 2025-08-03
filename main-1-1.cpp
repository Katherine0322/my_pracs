#include <iostream>
using namespace std; 
extern int array_sum(int[], int);
int main(){
    int array[5]={3,4,6,8,9};
    int n=5;
    cout<<array_sum(array, n)<<endl;
    return 0;
}