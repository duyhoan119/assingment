#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// bai1
int KTSN(int x){
	if(x==(int)x){
		printf("\n%d  La so nguyen.",x);
	}
	else{
		printf("\n%d Khong phai la so nguyen.",x);
	}
}
int KTSNT(int x){
	int c = 0;
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			c++;
		}
	}
	if(c==0){
		printf("\n%d  la so nguyen to.",x);
		return x;
	}
	else if(c != 0){
		printf("\n%d khong phai la so nguyen to.",x);
	}
}
int KTSCP(int x){
	int i;
	int c = 0;
	for(i=1 ; i<x ; i++){
		if(i*i==x){
			c++;
			printf("\n%d la so chinh phuong.",x);
		}
	}
	if(c==0){
		printf("\n%d khong phai la so chinh phuong.",x);

	}
}
 
 //bai 2
 int UCLN(int a, int b){
	if (b==0)return a;
	return UCLN(b,a%b);
}
int UCNN(int a, int b){
	return (a*b)/UCLN(a,b);
}
 
 
 // bai 3
int TTH(){
	double bd,kt,gh,th;
	printf("\nMoi nhap gioi bat dau:");
	scanf("%lf",&bd);
	printf("\nMoi nhap gioi ket thuc:");
	scanf("%lf",&kt);
	gh=kt-bd;
	if(bd >=12 && kt<=24){
		if(gh<=3){
		th=gh*1500000;
		
		}
		if(gh>=4){	
			int gtt,ttt;			
			gtt=gh-3;
			ttt=(gtt*150000)*0.7;
			th=(gh*150000)+ttt;
		}
		if(bd>=14 && kt <=17){
			th=th*0.9;
		}
		printf(" So tien can thanh toan la:%0.2f \n ",th);
	  	}
  	else{
  		printf("So gio nhap khong hop le.");
	  }
}

// bai 4

int TTD(){
	int sd,td;
	printf("\nMoi nhap so dien: ");
	scanf("%d",&sd);
	if(sd<=50){
		td=sd*1.678;
		printf("So tien dien phai tra la: %d",td);
	}
	else if(sd>=51&&sd<=100){
		td=(50*1.678)+((sd-50)*1.734);
		printf("So tien dien phai tra la: %d",td);
	}
	else if(sd>=101 && sd<=200){
		td = (50*1.678)+(50*1.734)+((sd-100)*2.014);
		printf("So tien dien phai tra la: %d",td);
	}
	else if(sd>=201 && sd<=300){
		td = (50*1.678)+(50*1.734)+(100*2.014)+((sd-200)*2.536);
		printf("So tien dien phai tra la: %d",td);
	}
	else if(sd>=301 && sd<=400){
		td = (50*1.678)+(50*1.734)+(100*2.014)+(100*2.536)+((sd-300)*2.834);
		printf("So tien dien phai tra la: %d",td);
	}
	else if(sd>400){
		td = (50*1.678)+(50*1.734)+(100*2.014)+(100*2.536)+(100*2.834)+((sd-400)*2.927);
		printf("So tien dien phai tra la: %d",td);
	}
	return td;
}

// bai 5

int DTM(){
	int t	;
	printf("Chi nhan doi cac menh gia (500 ,400,300,200,100,50).\n");
	printf("Moi nhap menh gia tien can doi:");
	scanf("%d",&t);
	if(t==500){
		printf("500000 VND.\n");
	}
	else if(t==400){
		printf("200.000 VND.\n200.000 VND.\n");
	}
	else if(t==300){
		printf("200.000 VND.\n100.000 VND.\n");
	}
	else if(t==200){
		printf("200.000 VND. VND.\n");
	}
	else if(t==100){
		printf("100.000 VND.\n");
	}
	else if(t==50){
		printf("50.000 VND.\n");
	}
	else if(t==20){
		printf("20.000 VND.\n");
	}
	else if(t==10){
		printf("10.000 VND.\n");
	} 
	else if(t==5){
		printf("5.000 VND.\n");
	}
	else if(t==2){
		printf("2.000 VND.\n");
	}
	else if(t==1){
		printf("1.000 VND.\n");
	}
	else {
		printf("So tien ban nhap khong hop le.");
	}
	return t;
}

//bai 6
int TLXNH(){
	double TV;
	printf("Moi nhap so tien muon vay: ");
	scanf("%lf",&TV);
	double KH = 12;
	double PTL = 0.05;
	double TLT1, TVHT, TLT2, TLT3, TLT4, TLT5, TLT6, TLT7, TLT8, TLT9, TLT10, TLT11, TLT12;
	double TTT1 , TTT2, TTT3, TTT4, TTT5, TTT6, TTT7, TTT8, TTT9, TTT10, TTT11, TTT12;
	TLT1=TV*PTL;
	TVHT = TV / 12;
	TTT1 = TLT1 + TVHT;
	printf("\nTong so tien thang 1 phai tra la: %.0lf VND",TTT1);
	TLT2 = (TV-TVHT)*PTL;
	TTT2 = TLT2 + TVHT;
	printf("\nTong so tien thang 2 phai tra la: %.0lf VND",TTT2);
	TLT3 = (TV-(TVHT*2))*PTL;
	TTT3 = TLT3 + TVHT;
	printf("\nTong so tien thang 3 phai tra la: %.0lf VND",TTT3);
	TLT4 = (TV-(TVHT*3))*PTL;
	TTT4 = TLT4 + TVHT;
	printf("\nTong so tien thang 4 phai tra la: %.0lf VND",TTT4);
	TLT5 = (TV-(TVHT*4))*PTL;
	TTT5 = TLT5 + TVHT;
	printf("\nTong so tien thang 5 phai tra la: %.0lf VND",TTT5);
	TLT6 = (TV-(TVHT*5))*PTL;
	TTT6 = TLT6 + TVHT;
	printf("\nTong so tien thang 6 phai tra la: %.0lf VND",TTT6);
	TLT7 = (TV-(TVHT*6))*PTL;
	TTT7 = TLT7 + TVHT;
	printf("\nTong so tien thang 7 phai tra la: %.0lf VND",TTT7);
	TLT8 = (TV-(TVHT*7))*PTL;
	TTT8 = TLT8 + TVHT;
	printf("\nTong so tien thang 8 phai tra la: %.0lf VND",TTT8);
	TLT9 = (TV-(TVHT*8))*PTL;
	TTT9 = TLT9 + TVHT;
	printf("\nTong so tien thang 9 phai tra la: %.0lf VND",TTT9);
	TLT10 = (TV-(TVHT*9))*PTL;
	TTT10 = TLT10 + TVHT;
	printf("\nTong so tien thang 10 phai tra la: %.0lf VND",TTT10);
	TLT11 = (TV-(TVHT*10))*PTL;
	TTT11 = TLT11 + TVHT;
	printf("\nTong so tien thang 11 phai tra la: %.0lf VND",TTT11);
	TLT12 = (TV-(TVHT*11))*PTL;
	TTT12 = TLT12 + TVHT;
	printf("\nTong so tien thang 12 phai tra la: %.0lf VND",TTT12);
	
}

//bai 7
int VTMX(){
	double PTV,GTX,THV;
	printf("Moi nhap so phan tram vay: ");
	scanf("%lf",&PTV);
	printf("Moi nhap gia tri xe: ");
	scanf("%lf",&GTX);
	printf("Moi nhap moi nhap thoi han vay: ");
	scanf("%lf",&THV);
	double THVTD = 24;
	double LSVN = 0.072;
	double TVCD = 500000000;
	double TTLD, TTHT, TV, TLHT, TVTN, TVTT ;
	TTLD = (100 - PTV) / 100*GTX;
	TV = GTX - TTLD;
	TVTN = TV / THV;
	TLHT = TV / (LSVN*12);
	TVTT = TVTN / 12;
	if(TV <= TVCD && THV <= THVTD){
		TTHT = TLHT + TVTT;
	}
	else{
		printf("Quy khach khong du dieu kien de vay tien (Tien vay <= 500000000 VND)!");	
	}
	printf("So tien phai tra lan dau cua quy khach la: %0.lf VND. \n",TTLD);
	printf("Tong so tien phai tra hang thang cho den khi het ki han la: %lf VND",TTHT);
}

//bai 8

int GPL(){
	int a,b;
	printf("\n==============FPOLY-LOTT================.");
	printf("\n=============mai do mai do==============.");
	printf("\n________________________________________.");	
	printf("\nMoi nhap so thu nhat: ");
	scanf("%d",&b);
	printf("\nMoi nhap so thu hai: ");
	scanf("%d",&a);
	int GT[2];
	int c;
	int i;
	srand((int) time(0));
	for(i=0;i<2; i++){
		int kq = rand()%15+1;
		GT[i]=kq;
	}
	for(i=0;i<2;i++){
		if(a==GT[i]){
			c++;
		}
		if(b==GT[i]){
			c++;
		}
	}
	printf("\n=============================================");
	printf("\nHAI SO DUOC CHON LA: \n");
	printf("So 1: %d\n",GT[0]);
	printf("So 2: %d\n",GT[1]);
	printf("\n=============================================");
	if(c==1){
		printf("\nChuc mung ban da trung giai nhi.");
	}
	if(c==2){
		printf("\nChuc mung ban da trung giai nhat.");
	}
	else{
		printf("\nChuc ban may man lan sau.");
	}
}


 //bai 9
int TPS(){
	int a,b,c,d;
	printf("\nmoi nhap tu so thu nhat");
	scanf("%d",&a);
	printf("\n\moi nhap mau so thu nhat");
	scanf("%d",&b);
	printf("So thu nhat la: %d/%d",a,b);
	printf("\nmoi nhap tu so thu hai");
	scanf("%d",&c);
	printf("\nmoi nhap mau so thu hai");
	scanf("%d",&d);
	printf("\nSo thu hai la: %d/%d",c,d);
	int x;
	printf("\n1:Tinh tong hai phan so. ");
	printf("\n2:Tinh hieu hai phan so. ");
	printf("\n3:Tinh tich hai phan so. ");
	printf("\n4:Tinh thuong hai phan so. ");
	printf("\n Moi chon: ");
	scanf("%d",&x);
	switch (x){
		case 1:{
			int e,f;
			if(b=d){
				e=a+c;
				printf("\nTong hai phan so la: T= %d/%d",e,b);
			}
			else if(b!=d){
				e=a+c;
				f=(a*c)+(b*d);
				printf("\nTong hai so la: T = %d/%d",e,f);
			}
			break;
		}
		case 2:{
			int y,u;
			if(b=d){
				y =a-c;
				printf("\nHieu hai phan so la: %d/%d",y,b);
			}
			else if(b!=d){
				y = a-c;
				u = (a*c)+(b*d);
				printf("\nTong hai so la: T = %d/%d",y,u);
			}
			break;
		}
		case 3:{
			int r,t;
			r = a*c;
			t = b*d;
			printf("\nTich hai phan so la: %d/%d",r,t);
			break;
		}
		case 4:{
			double i,o;
			i = a/c;
			o = b/d;
				printf("\nThuong hai phan so la: %lf/%lf",i,o);
			break;
		}
		
	}
}
int main(int argc, char** argv) {
	printf("\n<+===========================MENU===========================+>");
	printf("\n |Chuc nang 1: Kiem tra so nghuyen.                         |");
	printf("\n |Chuc nang 2: Tim uoc trung va boi trung cua 2 so.         |");
	printf("\n |Chuc nang 3: Tinh tien cho quan KARAOK.                   |");
	printf("\n |Chuc nang 4: Tinh tien dien.                              |");
	printf("\n |Chuc nang 5: Doi tien mat.                                |");
	printf("\n |Chuc nang 6: Tinh lai xuat ngan hang va vay tra gop.      |");
	printf("\n |Chuc nang 7: Vay tien mua xe.                             |");
	printf("\n |Chuc nang 8: GAME FPOLY-LOTT.                             |");
	printf("\n |Chuc nang 9: Tinh toan phan so                            |");
	printf("\n<+==========================================================+>");
	printf("\nMoi chon chuc nang(1,2,3,4,5,6,7,8,9): ");
	int x;
	scanf("%d",&x);
	switch (x){
		case 1:{
			printf("\nBai 1:");
			int x;
			printf("\nNhap vao 1 so nguyen: ");
			scanf("%d",&x);
			KTSN(x);
			KTSNT(x);
			KTSCP(x);
			printf("\n_____________________________________________________");
		}
		case 2:{
			printf("\nBai 2:");
          	int a,b;
			printf("\nMoi nhap so thu nhat: ");
			scanf("%d",&a);
			printf("\nMoi nhap so thu hai: ");
			scanf("%d",&b);
			UCLN(a,b);
			UCNN(a,b);
			printf("\nUoc chung lon nhat cua %d va %d la: %d \n",a,b,UCLN(a,b));
			printf("\nBoi chung nho nhat cua %d va %d la: %d",a,b,UCNN(a,b));
			printf("\n_____________________________________________________");
		}
		case 3:{
			printf("\nBai 3:");
			TTH();
			printf("\n_____________________________________________________");
		}
		case 4:{
			printf("\nBai 4:");
			TTD();
			printf("\n_____________________________________________________");
		}
		case 5:{
			printf("\nBai 5:");
			DTM();
			printf("\n_____________________________________________________");
		}
		case 6:{
			printf("\nBai 6:");
			TLXNH();
			printf("\n_____________________________________________________");
		}
		case 7:{
			printf("\nBai 7:");
			VTMX();
			printf("\n_____________________________________________________");
		}
		case 8:{
			printf("\nBai 8:");
			GPL();
			printf("\n_____________________________________________________");
		}
		case 9:{
			printf("\nBai 9:");
			TPS();
			break;
		}
	}
}
//thay doi cap nhap code bai assingment