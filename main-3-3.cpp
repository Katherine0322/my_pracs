#include <iostream>
using namespace std;
extern double weighted_average(int array[], int);
int main(){
    int array[]={1,2,1,4,1,3};
    int n=6;
    cout<<weighted_average(array,n)<<endl;
    return 0;
}