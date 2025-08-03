#include <iostream>
using namespace std;
extern int sum_two_arrays(int array[], int secondarray[], int);
int main(){
    int array1[]={12,13,14};
    int array2[]={23,24,25};
    int n=3;
    cout<<sum_two_arrays(array1,array2,n)<<endl;
    return 0;
}