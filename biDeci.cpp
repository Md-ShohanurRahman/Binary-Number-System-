#include <iostream>
using namespace std;
void binaryToDecimal(int bin){
    int n=bin;
    int deci=0;
    int power=1;
    while(n>0){
        int lastDigit=n%10;
        deci=deci+lastDigit*power;
        power=power*2;
        n=n/10;
    }
    cout<<deci<<endl;
}
int main (){
    binaryToDecimal(101);
    binaryToDecimal(10);
    binaryToDecimal(111111);
    return 0;
}