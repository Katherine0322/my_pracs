#include <iostream>
using namespace std;
bool is_descending(int array[], int);
int main(){
    int array[]={2,4,8,3,1};
    int n=5;
    cout<<is_descending(array,n)<<endl;
    return 0;
}