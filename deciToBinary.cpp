#include <iostream>
using namespace std;
void deciToBinary(int deci){
    int n=deci;
    int binary=0;
    int power=1;
    while(n>0){
        int rem=n%2;
        binary=binary+rem*power;
        power=power*10;
        n=n/2;
    }
    cout<<binary<<endl;
   
}
int main (){
    deciToBinary(2);
    deciToBinary(3);
    return 0;
}