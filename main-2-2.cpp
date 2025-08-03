#include <iostream>
using namespace std;
extern int max_element(int array[], int);
int main(){
    int array[]={6,3,9,2,5};
    int n=5;
    cout<<max_element(array,n)<<endl;
    return 0;
}