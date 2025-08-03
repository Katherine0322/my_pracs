#include <iostream>
using namespace std;
bool is_ascending(int array[], int);
int main(){
    int array[]={2,4,8,3,1};
    int n=5;
    cout<<is_ascending(array,n)<<endl;
    return 0;
}