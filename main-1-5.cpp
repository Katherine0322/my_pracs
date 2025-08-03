#include <iostream>
using namespace std;
extern int count_evens(int);
int main(){
    int number=10;
    cout<<count_evens(number)<<endl;
    return 0;
}