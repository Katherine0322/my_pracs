#include <iostream>
using namespace std;
int count_evens(int number){
    int count=0;
    for(int i=0;i<=number;i++){
        if(i%2==0){
            count++;
        }
    }
    return count;
}