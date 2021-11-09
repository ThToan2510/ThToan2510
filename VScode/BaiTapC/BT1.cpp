#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void chuoiKiTu();
void arr2();
void arr1();
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
    chuoiKiTu();
    arr2();
    arr1();
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
/////////////////////////////////////////////////////////////////////////
void locateOfMax(int arr[],int n){
    int max = 0;
    for(int i = 0 ; i< n; i++){
        if(max < arr[i]) max = arr[i];
    }
    printf("\n<>Max is: %d,Locate of max in array is : ",max);
    for (int i = 0; i < n; i++){
        if(arr[i]== max) printf("%d, ",i+1);
    }
}
void minInArr1(int arr[],int n){
    int minInArr = arr[0];
    for(int i = 1 ; i<n;i++){
        if(minInArr > arr[i]) minInArr = arr[i];
    }
    printf("\n<>Gia tri nho nhat trong mang la: %d",minInArr);
}
void sumIfPosive(int arr[],int n){
    long sumIfPosive = 0;
    for (int i =0;i < n; i++){
        if (arr[i]>0){
            sumIfPosive+=arr[i];
        }
    }
    printf("\n<>Sum posive in array is: %d",sumIfPosive);
}
void soChanInArr(int arr[],int n){
    printf("\n<>So chan in array la: ");
    for (int i = 0; i<n;i++){
        if(arr[i]%2==0) printf("%d, ",arr[i]);
    }
}
void numberOfChiaHetCho3(int arr[],int n){
    int counter = 0;
    for(int i =0; i<n;i++){
        if(arr[i]%3==0) counter ++;
    }
    printf("\n<>Number of so chia het cho 3 in array is: %d",counter);
}
bool checkAppear(int arr[],int taget,int n){
    for(int i=0;i<n;i++){
        if(taget == arr[i]) return 1;
    }
    return 0;
}
bool checkSoNguyenTo(int taget){
    if(taget <= 1) return 0;
    for(int i = 2;i<taget;i++){
        if(taget%i==0) return 0;
    }
    return 1;
}
void soNguyenTo(int arr[],int n){
    printf("\nCac So nguyen to trong array la : ");
    for(int i = 0 ; i < n ;i++){
        if(checkSoNguyenTo(arr[i])) printf("%d, ",arr[i]);
    }
}
void numberOfAppear(int arr[],int n){
    int taget = 0;
    int locate = -1;
    int arrDifferane[n];
    for(int i = 0 ;i<n;i++){
        arrDifferane[i]=0;
    }
    arrDifferane[0]=arr[0];
    int arrNumberAppear[n];
    for(int i = 0; i<n;i++){
        arrNumberAppear[i]=0;
    }
    arrNumberAppear[0]=1;
    int counter = 1;
    for(int i =1;i<n;i++){
        taget = arr[i];
        if(checkAppear(arrDifferane,arr[i],counter)){
            for(int j = 0; j < counter;j++){
                if(arrDifferane[j]==taget){
                    locate = j;
                    arrNumberAppear[locate]++;
                }
            }
        }else{
            counter ++;
            arrDifferane[counter-1]=arr[i];
            arrNumberAppear[counter -1]=1;
        }
    }
    for (int i = 0 ; i < counter;i++){
        printf("\n#Phan tu %d xuat hien %d lan.",arrDifferane[i],arrNumberAppear[i]);
    }
}
void tongS1(int arr[],int n){
    float S1 = 0.0;
    for(int i =0; i<n;i++){
        int mauso = 0;
        for(int j = 0 ; j<= i+1;j++){
            mauso += j;
        }
        S1 += 1.0*((float)arr[i]/(float)mauso);
    }
    printf("<>Tong s1 cua array la : %.4f",S1);
}
void arr1(){
    int n=0;
    int arr[100];
    long int s=0;
    printf("\nNhap do dai cua mang");
    scanf("%d",&n);
    printf("\nChuong trinh nhap mang va tinh tong");
    for(int i=0;i<n;i++){
        printf("\nNhap phan tu thu %d cua mang",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nMang da nhap la: \n");
    for(int i=0;i<n;i++){
        printf("%d ,",arr[i]);
        s+=arr[i];
        if(i>0){
            if(i%5==0) printf("\n");
        }
    }
    printf("\nTong la : %d",s);
    minInArr1(arr,n);
    sumIfPosive(arr,n);
    locateOfMax(arr,n);
    soChanInArr(arr,n);
    numberOfChiaHetCho3(arr,n);
    numberOfAppear(arr,n);
    soNguyenTo(arr,n);
    tongS1(arr,n);
}
/////////////////////////////////////Mang2Chieu////////////////////////////////////
void sumArr2(float arr[][10],int h,int c){
    float sum = 0;
    for(int i = 0 ; i<h;i++){
        for(int j = 0; j < c;j++){
            sum += arr[i][j];
        }
    }
    printf("\n<>Tong arr la: %.4f",sum);
}
void maxArr2(float arr[][10],int h,int c){
    float max = arr[0][0];
    for(int i = 0 ; i<h;i++){
        for(int j = 0; j < c;j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
    }
    printf("\n<>Max in array is: %.4f",max);
}
void sumArr2Nagative(float arr[][10],int h, int c){
    float sumNagative = 0;
    for(int i = 0 ; i<h;i++){
        for(int j = 0; j < c;j++){
            if(arr[i][j]<0) sumNagative += arr[i][j];
        }
    }
    printf("\n<>Sum nagative in array is : %.4f",sumNagative);
}
void numberOfPosive(float arr[][10],int h, int c){
    int number = 0;
    for(int i = 0 ; i<h;i++){
        for(int j = 0; j < c;j++){
            if(arr[i][j]>0) number++;
        }
    }
    printf("\n<>Number of posive in array is: %d",number);
}
bool checkAppArr2(float arr[],float taget,int n){
    for(int i = 0; i < n;i++){
        if(taget == arr[i]) return 1;
    }
    return 0; 
}
void numberAppearArr2(float arr[][10],int h, int c){
    int counter =1;
    float arrDifferane[100];
    int numberApp[100];
    for(int i = 0; i < 100;i++) numberApp[i]=0;
    for(int i = 0 ; i <100; i++) arrDifferane[i]=0;
    arrDifferane[0]=arr[0][0];
    for(int i = 0 ; i<h;i++){
        for(int j = 0; j<c;j++){
            if(checkAppArr2(arrDifferane,arr[i][j],counter)){
                for(int k = 0; k < counter;k++){
                    if(arr[i][j]==arrDifferane[k]){
                        numberApp[k]++;
                    } else;
                }
            } else{
                counter ++;
                arrDifferane[counter-1]=arr[i][j];
                numberApp[counter-1]=1;
            }
        }
    }
    for (int i = 0; i<counter;i++){
        printf("\n#So %.2f xuat hien %d lan.",arrDifferane[i],numberApp[i]);
    }
}
void soChinhPhuongArr2(float arr[][10],int h,int c){
    int thamChieu = 0;
    printf("\n<>Cac so chinh phuong la: ");
    for(int i = 0 ; i<h;i++){
        for(int j = 0; j < c;j++){
            if(arr[i][j]>0){
                thamChieu = (int)sqrt(arr[i][j]);
                if((float)pow(thamChieu,2)==arr[i][j]){
                    printf("%.2f, ",arr[i][j]);
                }
            }
        }
    }
}
void arr2(){
    printf("\n========================ARR2Line================================");
    float arr[10][10];
    int h = 0;
    int c = 0;
    printf("\nNhan so hang"); scanf("%d",&h);
    printf("\nNhap so cot"); scanf("%d",&c);
    printf("\nNhan cac phan tu cua mang.");
    for(int i = 0 ; i <h;i++){
        for(int j = 0; j<c;j++){
            printf("\nNhan phan tu hang %d, cot %d: ",i+1,j+1); scanf("%f",&arr[i][j]);
        }
    }
    printf("\n<>Mang da nhap la: \n");
    for(int i = 0 ; i < h;i++){
        for(int j = 0; j < c;j++){
            printf("%.2f      ",arr[i][j]);
        }
        printf("\n");
    }
    sumArr2(arr,h,c);
    maxArr2(arr,h,c);
    sumArr2Nagative(arr,h,c);
    numberOfPosive(arr,h,c);
    numberAppearArr2(arr,h,c);
    soChinhPhuongArr2(arr,h,c);
}
///////////////////////////////////////////////////////////////////////
void createNewString(char arr1[],char arr2[]){
    char arr3[1000];
    for(int i = 0 ; i< 1000;i++){
        arr3[i]=0;
    }
    char kiTu = NULL;
    int i =0;
    while(1){
        for(int j = 0; j<500;j++){
            kiTu = arr1[j];
            if(kiTu != '0'){
                arr3[j]=kiTu;
            }
            else{
                i = j;
                break;
            }
        }
        arr3[i]='.';
        i++;
        arr3[i]=' ';
        for(int t = i+1;t<1000;t++){
            kiTu = arr2[t-(i+1)];
            if(kiTu != '0'){
                arr3[t]=kiTu;
            }
            else break;
        }
        break;
    }
    i = 0;
    printf("\n<> Chuoi moi la: ");
    while(1){
        kiTu = arr3[i];
        if(kiTu != 0){
            printf("%c",kiTu);
            i++;
        }
        else break;
    }
}
void chuoiKiTu(){
    printf("\n======================ChuoiKiTu===============================");
    char kiTu = NULL;
    char arr1[500]; 
    char arr2[500];
    for(int i = 0 ; i<500;i++){
        arr1[i]='0';
        arr2[i]='0';
    }
    printf("\nNhan chuoi thu 1: ");
    int i = 0;
    while(1){
        kiTu = getchar();
        if((char)kiTu == '\n'){
            break;
        }else{
            arr1[i]=kiTu;
            i++;
        }
    }
    i = 0;
    printf("\nNhap chuoi 2: ");
    while(1){
        kiTu = getchar();
        if((char)kiTu =='\n') break;
        else{
            arr2[i]=kiTu;
            i++;
        }
    }
    i = 0;
    int length = 0;
    while(1){
        kiTu = arr1[i];
        if(kiTu=='0') break;
        else{
            length++;
            i++;
        }
    }
    printf("\n<>Chieu dai chuoi 1: %d",length);
    i = 0;
    length = 0;
    while(1){
        kiTu = arr2[i];
        if(kiTu=='0') break;
        else{
            length++;
            i++;
        }
    }
    printf("\n<>Chieu dai chuoi 2: %d",length);
    createNewString(arr1, arr2);
    printf("\nNhap chuoi 1");
    fgets(arr1,sizeof(arr1),stdin);
    i = 0;
    while(1){
        if(arr1[i]=='\n') {
            arr1[i]=0;
            break;
        } else {
            i++;
        }
    }
    fgets(arr2,sizeof(arr2),stdin);
    printf("%s. %s",arr1,arr2);
}