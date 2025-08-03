#include <iostream>
using namespace std;
extern bool is_fanarray(int array[], int);
int main(){
    int array[]={1,2,3,2,1};
    int n=5;
    cout<<is_fanarray(array,n)<<endl;
    return 0;
}