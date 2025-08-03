#include <iostream>
using namespace std;
extern int min_element(int array[], int);
int main(){
    int array[]={6,3,9,2,5};
    int n=5;
    cout<<min_element(array,n)<<endl;
    return 0;
}