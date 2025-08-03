#include <iostream>
using namespace std;
extern int median_array(int array[], int);
int main(){
    int array[]={3,5,2,1,4};
    int n=5;
    cout<<median_array(array,n)<<endl;
    return 0;
}