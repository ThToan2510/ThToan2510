#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
void uocSo(int);
int giathua(int);
int Luythua(int,int);
int S1(int);
int S2(int);
int S3(int);
int S4(int);
int S5(int);
int S6(int);
int S7(int);
int S8(int);
int S9(int);
int S10(int);
int S11(int);
int S12(int);
int maxInFour(int,int,int,int);
void sumCharInNumber(int);
void DayInMonthOfYear(int,int);
float binhPhuong(float);
float lapPhuong(float);
float fToC(float);
void BT6();
void BTS3_BTCuoiChuong();
void kiemTraTamGiac();
void kiemTraTamGiac2();
int main(){
    system("cls");
    printf("========================================================\n");
    kiemTraTamGiac2();
    kiemTraTamGiac();
    BTS3_BTCuoiChuong();
    BT6();
    printf("\nChuong Trinh Tinh cac chuoi so");
    printf("\nNhap so n: ");
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
float binhPhuong(float coSo){
    return pow(coSo,2);
}
float lapPhuong(float coSo){
    return pow(coSo,3);
}
float fToC(float input){
    return 1.0*(input-32)*(5/9);
}
void BT6(){
    char input = NULL;
    printf("\nNhap 1 ki tu tu ban phim: "); 
    scanf("%c",&input);
    if (input <= 'Z'&& input>='A'){
        printf("\nKet qua: %c",input + ('z'-'Z'));
    }
    else if(input <= 'z' && input >= 'a'){
        printf("\nKet qua: %c",input);
    }
    else if(input <= '9' && input >= '0'){
        printf("\nDay la mot ky so");
    }
}
////////////////////////BAI_TAP_3/////////////////////////////////////
void SapSep(int n1, int n2, int n3, int n4,int LuaChon){
    int temp = 0;
    for (int i =0; i <3; i++){   // Sap sep theo thu tu tang dan
        if (n1-n2 > 0){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n2-n3  >0){
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        if (n3-n4 >0){
            temp = n3;
            n3 = n4;
            n4 = temp; 
        }
    }
    switch(LuaChon){
        case 1:
        printf("\nTu lon den nho: %d, %d, %d, %d",n4,n3,n2,n1);
        break;
        case 2:
        printf("\nTu nho den lon: %d, %d, %d, %d",n1,n2,n3,n4);
        break;
        default:
        printf("Undefine");
    }
}
void BTS3_BTCuoiChuong(){
    int n1,n2,n3,n4,temp;
    while(1){
        printf("\nMoi Ban nhap 4 so :");
        printf("\nnhap n1: \n");
        scanf("%d",&n1);
        printf("nhap n2: \n");
        scanf("%d",&n2);
        printf("nhap n3: \n");
        scanf("%d",&n3);
        printf("nhap n4: \n");
        scanf("%d",&n4);
        int luaChon = 0;
        printf("\nMoi ban lua chon thao tac: \n1. Tu lon den nho.\n2. Tu nho den lon.\n3. Ket thuc.\n<>Nhap su lua chon cua ban: \n");
        scanf("%d",&luaChon);
        if (luaChon==3){
            printf("Ket thuc chuong trinh, dai truyen hinh den day la het\n");
            break;
        }
        else{
            SapSep(n1,n2,n3,n4,luaChon);
            system("pause"); // Tam ngung xem ket qua
        }
        system("cls");  // xoa mang hinh
    }
}
/////////////////////////////////// BT4 ///////////////////////////////////////////////
void kiemTraTamGiac(){
    float n1,n2,n3,temp =0;
    printf("\nNhap cac canh cua tam giac: ");
    printf("\nCanh thu nhat: "); scanf("%f",&n1);
    printf("\nCanh thu hai: "); scanf("%f",&n2);
    printf("\nCanh thu ba: "); scanf("%f",&n3);
    if(n2-n1 > 0){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n3-n1 > 0){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n1 -(n2+n3) >= 0){
        printf("\n<> Day [khong phai] la mot lam giac");
    } else{
        printf("\n<> Day [dung] la mot tam giac");
    }
}
//////////////////////////////////BT5/////////////////////////////////////
void kiemTraTamGiac2(){
    float n1,n2,n3,temp =0;
    printf("\nNhap cac canh cua tam giac: ");
    printf("\nCanh thu nhat: "); scanf("%f",&n1);
    printf("\nCanh thu hai: "); scanf("%f",&n2);
    printf("\nCanh thu ba: "); scanf("%f",&n3);
    if(n2-n1 > 0){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n3-n1 > 0){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n1 -(n2+n3) >= 0){
        printf("\n<> Day [khong phai] la mot lam giac");
    } else{
        if(n1==n2 && n2 == n3){
            printf("\n<> Day la tam giac deu");
        }
        else if (abs((float)n1-pow(pow(n2,2)+pow(n3,2),0.5)<0.001)){     // sai so 0.001
            printf("\n<> Day la tam giac vuong co canh huyen bang %.3f",n1);
        }
        else if (n1==n2){
            printf("\n<> Day la tam giac can, co do dai hai canh bang nhau la %.3f",n1);
        }
        else if (n2==n3){
            printf("\n<> Day la tam giac can, co do dai hai canh bang nhau la %.3f",n2);
        }
        else if (n1==n3){
            printf("\n<> Day la tam giac can, co do dai hai canh bang nhau la %.3f",n1);
        }
        else printf("\n<> Day la tam giac thuong");
    }
}
