#include <iostream>
using namespace std;

int main(){

    int decimal;
    string binary="";
    cout<<"Enter a number"<<endl;
    cin>>decimal;

    int remainder=0;

    while(true){
            remainder=decimal%2;
            binary=to_string(remainder)+binary;
            if(decimal<2){
                break;
            }
            decimal=decimal/2;
    }
    cout<<"binary is:"<<binary<<endl;
    return 0;
}