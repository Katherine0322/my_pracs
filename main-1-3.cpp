#include <iostream>
using namespace std;
extern int num_count(int array[], int, int);
int main(){
    int array[]={9,23,11,11};
    int n=4;
    int number=11;
    cout<<num_count(array,n,number)<<endl;
    return 0;
}