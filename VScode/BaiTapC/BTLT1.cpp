#include<stdio.h>
#include<math.h>
char checkChanLe(int); // function check a number if it "chan" return 1 else return 0
long long int convertToBin(int); // function convert number int in dec to number in bin
char checkSoNguyenTo(int); // function check a number if it is prime return 1 else return 0
void perfectNumber(int); // function print all perfect number form 0 to n 
int main(){
    printf("\nso chan %d", checkChanLe(12));
    printf("\nchuyen 30 thanh BIN: %d", convertToBin(3));
    printf("\nso nguyen to %d",checkSoNguyenTo(1));
    printf("\nperfect number from 0 to 100\n");
    perfectNumber(1000);
    system("pause");
    return 0;
}
//===============Declear function===================
char checkChanLe(int input){
    return !(input%2);
}
long long int convertToBin(int input){
    long long int result = 0;
    int counter = 0;
    int bit = 0;
    while(input){
        bit = input%2;
        result += bit*(int)pow(10,counter);
        counter ++;
        input /= 2;
    }
    return result;
}
char checkSoNguyenTo(int input){
    if(input == 1) return 1;
    for (int i = 2; i <= input/2 ;i++){
        if(input%i==0){
            return 0;
        }
    }
    return 1;
}
void perfectNumber(int input){
    int sumNguyenTo = 0;
    for (int i = 4; i <= input; i++){
        sumNguyenTo =0;
        for (int j = 1; j <= i/2;j++){
            if(!(i%j)) sumNguyenTo+= j;
        }
        if(sumNguyenTo==i) printf("%d, ",i);
    }
}