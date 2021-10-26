#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void uocSo (int k){
    printf("dang tim uoc so");
    for (int i = 1; i <=k; i++){
        if (k%i==0) printf("%d, ",i);
    }
}
int giathua(int k){
    int result =0;
    for (int i = k; i >= 0; i--){
        result += i;
    }
    return result;
}
int luythua(int k,int x){     // k^x
    int result = 1;
    for (int i = 0; i < x; i++){
        result *= k;
    }
    return result;
}
int S1 (int n){
    int S1 = 0;
    for( int i = 1; i<= n;i++){
        S1 += i;
    }
    return S1;
}
int S2 (int n){
    int S2 = 0;
    for (int i = 0; i <= n; i++){
        S2 += 2*i;
    }
    return S2;
}
int S3 (int n){
    int s3 = 0;
    for (int i = 0; i <= n; i++){
        s3 += (2*i + 1);
    }
    return s3;
}
int S4 (int n){
    int s4 = 0;
    for (int i = 1; i <= n; i++){
        s4 += n*int(pow(-1,i+1));
    }
    return s4;
}
int S5 (int n){
    int s5 = 0;
    for (int i = 1; i <= n; i++){
        s5 += i*i;
    }
    return s5;
}
int S6 (int n){
    int s6 = 0;
    for (int i = 1; i <= n;i++){
        s6 += luythua(i,i);
    }
    return s6;
}
int S7 (int n){
    int s7 = 0;
    for (int i = 1; i <= n;i++){
        s7 += giathua(i);
    }
    return s7;
}
int S8(int n){
    int s8 = 0;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            s8 += j;
        }
    }
    return s8;
}
int S9(int n){
    int s9 = 0;
    for (int i = 1;i <=n;i++){
        s9 += (1/i);
    }
    return s9;
}
int S10 (int n){
    int s10 = 0; 
    for (int i = 1; i <= n; i++){
        int s = 0;
        for (int j = 1 ; j <= i; j++){
            s += j;
        }
        s10 += i/s;
    }
    return s10;
}
int S11 (int n){
    int s11 = 0;
    for (int i = 1 ; i <= n;i++){
        int s=0;
        for (int j =1; j <= i;j++){
            s += j;
        }
        s11 += luythua(i,i)/s;
    }
    return s11;
}
int S12 (int n){
    int s12 = 0;
    for (int i = 1 ; i <= n; i++){
        s12 += i/giathua(i);
    }
    return s12;
}
int maxInFour(int n1,int n2,int n3,int n4){
    int max = 0;
    int number1 =0;
    int number2 =0;
    if (n1 > n2){
        number1 = n1;
    } else number1 = n2;
    if (n3 > n4){
        number2 = n3;
    } else number2 = n4;
    if (number1 > number2){
        return number1;
    }else return number2;
}
void sumCharInNumber(int k){
    int tagetSum = k;
    int result =0;
    int CharSum = 0;
    while (tagetSum){
        CharSum = tagetSum % 10;
        result += CharSum;
        tagetSum /= 10;
    }
    printf("\nTong cac ky so la: %d",result);
}
void DayInMonthOfYear(int m, int y){
    bool nhuan = 0;
    if ((y % 4 == 0) && (y % 100)) nhuan = 1;
    else if (y % 400 == 0) nhuan = 1;
    if (m == 2 && nhuan){
        printf("\nThang nay co 29 ngay");
    } else if (m==2 && !nhuan){
        printf("\nThang nay co 28 ngay");
    } else if (m%2){
        printf("\nThang nay co 31 ngay");
    } else printf("\nThang nay co 30 ngay");
}
int main(){
    system("cls");
    printf("========================================================");
    printf("Nhap so n: ");
    int n = 0;
    while (1){
        scanf("%d",&n);
        if (n < 1){
            printf("Hay nhap so n duong !");
        } else {
            break;
        }
    }
    int s1 = S1(n);
    int s2 = S2(n);
    int s3 = S3(n);
    int s4 = S4(n);
    int s5 = S5(n);
    int s6 = S6(n);
    int s7 = S7(n);
    int s8 = S8(n);
    int s9 = S9(n);
    int s10 = S10(n);
    int s11 = S11(n);
    int s12 = S12(n);
    printf("\n Tham sao n la : %d thi ta co S1 la : %d , S2 la : %d , S3 la : %d, S4 la : %d, S5 la: %d, S6 la: %d, S7 la : %d, S8 la : %d, S9 la : %d, S10 la : %d, S11 la : %d, S12 la : %d.",n,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12);
    //===================================================================================================
    // Chuong trinh kiem tra ky so, ki tu.
    printf("\n========================================================================");
    printf("\nChuong tirnh nay kiem tra ki tu nhap vao.");
    printf("\nNhap vao ky tu char: ");
    char thamChieu='y';
    scanf(" %c", &thamChieu);
    int thamChieuInt = int(thamChieu);
    if (thamChieuInt >= int('0') && thamChieuInt <= int('9')){
        printf("\nKy tu nay la ky so");
    } else if (thamChieuInt >= int('a') && thamChieuInt <= int('z')){
        printf("\nKy tu nay la chu thuong");
    } else if (thamChieuInt >= int('A') && thamChieuInt <= int('Z')){
        printf("\nKy tu da nhap la chu hoa");
    } else printf("\nDay la ky tu khac");
    //=====================================================================================================
    // Chuogn trinh tim uoc so.
    printf("\n==========================================================");
    int soTimUoc = 0;
    printf("\nNhan so n de tim uoc so cua n= ");
    scanf("%d",&soTimUoc);
    printf("\nCac uoc so cua %d la:",soTimUoc);
    uocSo(soTimUoc);
    //=====================================================================================================
    // Chuong trinh tinh tong cac chu so 
    printf("\n=============================================================");
    printf("\nChuong trinh sau day la chuong trinh tim tong cac chu so cau 1 so \n"); int sumChar =0;
    printf("\nNhap so can tinh tong cac chu so SumChar: "); scanf("%d",&sumChar);
    sumCharInNumber(sumChar);
    //======================================================================================================
    // Chuong Trinh tim so ngay trong thang
    printf("\n===============================================================");
    printf("\nSAU Day la chuong trinh tinh sao ngay co trong 1 thang");
    int month = 0;
    int year = 0;
    printf("\nNhap vao so thang: "); scanf("%d",&month);
    printf("\nNhap so nam: ");scanf("%d",&year);
    DayInMonthOfYear(month,year);

    system("pause");
    return 0;
}
