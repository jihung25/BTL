#include"tiendien.h"
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>


void BANGTIENDIEN()   // Bang Tien Dien ung voi cac bac
{
	cout<<"\t------------------------------------------------"<<endl;
	cout<<"\t|"<<setw(37)<<"BANG GIA DIEN SINH HOAT 2021"<<setw(10)<<"|"<<endl;
	cout<<"\t------------------------------------------------"<<endl;
	cout<<"\t|"<<setw(20)<<"NHOM DOI TUONG"<<setw(8)<<"|"<<setw(15)<<"GIA BAN DIEN"<<setw(4)<<"|"<<endl;
	cout<<"\t|"<<" Bac 1: Cho kWh tu 0-50"<<setw(22)<<" 1.678 (VND/kWh) "<<setw(3)<<"|\n";
	cout<<"\t|"<<" Bac 2: Cho kWh tu 51-100"<<setw(20)<<" 1.734 (VND/kWh) "<<setw(3)<<"|\n";
	cout<<"\t|"<<" Bac 3: Cho kWh tu 101-200"<<setw(19)<<" 2.014 (VND/kWh) "<<setw(3)<<"|\n";
	cout<<"\t|"<<" Bac 4: Cho kWh tu 201-300"<<setw(19)<<" 2.536 (VND/kWh) "<<setw(3)<<"|\n";
	cout<<"\t|"<<" Bac 5: Cho kWh tu 301-400"<<setw(19)<<" 2.834 (VND/kWh) "<<setw(3)<<"|\n";
	cout<<"\t|"<<" Bac 6: Cho kWh hon 401 "<<setw(21)<<" 2.536 (VND/kWh) "<<setw(3)<<"|\n";
	cout<<"\t------------------------------------------------"<<endl;
}

float BACDIEN(BAC_DIEN &X , DAN_CU &D)            // Tinh Bac Dien
{
	if (D.So_Dien <= 50)                         // bac1
	{
		X.Bac1 = D.So_Dien;
	}
	if (D.So_Dien >= 50 && D.So_Dien <= 100)    // bac2
	{
		X.Bac1 = 50;
		X.Bac2= D.So_Dien - X.Bac1;
	}
	if (D.So_Dien >= 101 && D.So_Dien <= 200)   // bac3
	{
		X.Bac1 = 50;
		X.Bac2 = 50;
		X.Bac3 = D.So_Dien - X.Bac1 - X.Bac2;
	}
	if (D.So_Dien >= 201 && D.So_Dien <= 300)   // bac 4
	{
		X.Bac1 = 50;
		X.Bac2 = 50;
		X.Bac3 = 100;
		X.Bac4 = D.So_Dien - X.Bac1 - X.Bac2 - X.Bac3;
	}
	if (D.So_Dien >= 301 && D.So_Dien <= 400)   // bac 5
	{
		X.Bac1 = 50;
		X.Bac2 = 50;
		X.Bac3 = 100;
		X.Bac4 = 100;
		X.Bac5 = D.So_Dien - X.Bac1 - X.Bac2 - X.Bac3 - X.Bac4;
	}
	if (D.So_Dien >= 401 )                     // bac 6
	{
		X.Bac1 = 50;
		X.Bac2 = 50;
		X.Bac3 = 100;
		X.Bac4 = 100;
		X.Bac5 = 100;
		X.Bac6 = D.So_Dien - X.Bac1 - X.Bac2 - X.Bac3 - X.Bac4 - X.Bac5;
	}
}
float SOTIENDIEN (BAC_DIEN &X,SO_TIEN_DIEN &STD,DAN_CU &D )     // So Tien Dien voi bac Bac tuong ung
{

	if (D.So_Dien <= 50)                               //tien B1
		STD.So_Tien_Dien1 = X.Bac1 * DON_GIA_B1 ;

	if (D.So_Dien <= 50)                              //tien B2
	{
		STD.So_Tien_Dien1 = X.Bac1 * DON_GIA_B1 ;
		STD.So_Tien_Dien2 = X.Bac2 * DON_GIA_B2 ;
	}

	if(D.So_Dien >= 101 && D.So_Dien <= 200)          //tien B3
	{
		STD.So_Tien_Dien1 = X.Bac1 * DON_GIA_B1 ;
		STD.So_Tien_Dien2 = X.Bac2 * DON_GIA_B2 ;
		STD.So_Tien_Dien3 = X.Bac3 * DON_GIA_B3 ;
	}

	if(D.So_Dien >= 201 && D.So_Dien <= 300)          //tien B4
	{
		STD.So_Tien_Dien1 = X.Bac1 * DON_GIA_B1 ;
		STD.So_Tien_Dien2 = X.Bac2 * DON_GIA_B2 ;
		STD.So_Tien_Dien3 = X.Bac3 * DON_GIA_B3 ;
		STD.So_Tien_Dien4 = X.Bac4 * DON_GIA_B4 ;
	}

	if(D.So_Dien >= 301 && D.So_Dien <= 400)          //tien B5
	{
		STD.So_Tien_Dien1 = X.Bac1 * DON_GIA_B1 ;
		STD.So_Tien_Dien2 = X.Bac2 * DON_GIA_B2 ;
		STD.So_Tien_Dien3 = X.Bac3 * DON_GIA_B3 ;
		STD.So_Tien_Dien4 = X.Bac4 * DON_GIA_B4 ;
		STD.So_Tien_Dien5 = X.Bac5 * DON_GIA_B5 ;
	}

	if(D.So_Dien >= 401)                             //tien B6
	{
		STD.So_Tien_Dien1 = X.Bac1 * DON_GIA_B1 ;
		STD.So_Tien_Dien2 = X.Bac2 * DON_GIA_B2 ;
		STD.So_Tien_Dien3 = X.Bac3 * DON_GIA_B3 ;
		STD.So_Tien_Dien4 = X.Bac4 * DON_GIA_B4 ;
		STD.So_Tien_Dien5 = X.Bac5 * DON_GIA_B5 ;
		STD.So_Tien_Dien6 = X.Bac6 * DON_GIA_B6 ;
	}

	STD.So_Tien_Dien = STD.So_Tien_Dien1 + STD.So_Tien_Dien2 + STD.So_Tien_Dien3 + STD.So_Tien_Dien4 + STD.So_Tien_Dien5 + STD.So_Tien_Dien6 ;
	return STD.So_Tien_Dien;
}
void Doc_Hoa_Don(DAN_CU &D,BAC_DIEN &X,SO_TIEN_DIEN &STD)       // Hoa Don Tien Dien
{
	cout<<"\t------------------------------------------------"<<endl;
	cout<<"\t|"<<setw(36)<<"HOA DON GTGT (TIEN DIEN)"<<setw(11)<<"|"<<endl;
	cout<<"\t|"<<setw(41)<<"( Ban the hien cua hoa don dien tu)"<<setw(6)<<"|"<<endl;
	cout<<"\t| Khach Hang : "<<D.Ho_Va_Ten<<setw(17)<<"|"<<endl;
	cout<<"\t| SDT : "<<D.So_DT<<setw(30)<<"|"<<endl;
	cout<<"\t| Dia Chi : "<<D.Dia_Chi<<setw(25)<<"|"<<endl;
	cout<<"\t| Muc dich su dung dien : Sinh hoat "<<setw(12)<<"|"<<endl;
	cout<<"\t| So ho su dung : 1"<<setw(29)<<"|"<<endl;
	cout<<"\t| Dien nang tieu thu : "<<D.So_Dien<<"(kWh)"<<setw(17)<<"|"<<endl;
	cout<<"\t------------------------------------------------"<<endl;
	cout<<"\t| Bac tieu thu "<<"  Don gia "<<" San luong "<<" Thanh Tien|"<<endl;

	if(D.So_Dien <= 50)
	{
		cout<<"\t|"<<setw(13)<<"Bac 1"<<setw(10)<<DON_GIA_B1<<setw(11)<<X.Bac1<<setw(12)<<STD.So_Tien_Dien1<<"|"<<endl;
		cout<<"\t| Tong dien nang tieu thu kWh"<<setw(6)<<D.So_Dien<<setw(13)<<"|"<<endl;
		cout<<"\t| Tong so tien dien chua thue (dong)"<<setw(11)<<STD.So_Tien_Dien<<"|\n";
		cout<<"\t| Thue suat GTGT "<<setw(32)<<"10%|\n";
		cout<<"\t| Tong so tien thanh toan (dong)"<<setw(15)<<STD.So_Tien_Dien<<"|\n";
		cout<<"\t------------------------------------------------"<<endl;
	}

	if (D.So_Dien >= 51 && D.So_Dien <= 100)
	{
		cout<<"\t|"<<setw(13)<<"Bac 1"<<setw(10)<<DON_GIA_B1<<setw(11)<<X.Bac2<<setw(12)<<STD.So_Tien_Dien1<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 2"<<setw(10)<<DON_GIA_B2<<setw(11)<<X.Bac2<<setw(12)<<STD.So_Tien_Dien2<<"|"<<endl;
		cout<<"\t| Tong dien nang tieu thu kWh"<<setw(6)<<D.So_Dien<<setw(13)<<"|"<<endl;
		cout<<"\t| Tong so tien dien chua thue (dong)"<<setw(11)<<STD.So_Tien_Dien<<"|\n";
		cout<<"\t| Thue suat GTGT "<<setw(32)<<"10%|\n";
		cout<<"\t| Tong so tien thanh toan (dong)"<<setw(15)<<STD.So_Tien_Dien*1.1<<"|\n";
		cout<<"\t------------------------------------------------"<<endl;
	}

	if (D.So_Dien >= 101 && D.So_Dien <= 200)
	{
		cout<<"\t|"<<setw(13)<<"Bac 1"<<setw(10)<<DON_GIA_B1<<setw(11)<<X.Bac1<<setw(12)<<STD.So_Tien_Dien1<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 2"<<setw(10)<<DON_GIA_B2<<setw(11)<<X.Bac2<<setw(12)<<STD.So_Tien_Dien2<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 3"<<setw(10)<<DON_GIA_B3<<setw(11)<<X.Bac3<<setw(12)<<STD.So_Tien_Dien3<<"|"<<endl;
		cout<<"\t| Tong dien nang tieu thu kWh"<<setw(6)<<D.So_Dien<<setw(13)<<"|"<<endl;
		cout<<"\t| Tong so tien dien chua thue (dong)"<<setw(11)<<STD.So_Tien_Dien<<"|\n";
		cout<<"\t| Thue suat GTGT "<<setw(32)<<"10%|\n";
		cout<<"\t| Tong so tien thanh toan (dong)"<<setw(15)<<STD.So_Tien_Dien * 1.1<<"|\n";
		cout<<"\t------------------------------------------------"<<endl;
	}

	if (D.So_Dien >= 201 && D.So_Dien <= 300)  // bac 4
	{
		cout<<"\t|"<<setw(13)<<"Bac 1"<<setw(10)<<DON_GIA_B1<<setw(11)<<X.Bac1<<setw(12)<<STD.So_Tien_Dien1<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 2"<<setw(10)<<DON_GIA_B2<<setw(11)<<X.Bac2<<setw(12)<<STD.So_Tien_Dien2<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 3"<<setw(10)<<DON_GIA_B3<<setw(11)<<X.Bac3<<setw(12)<<STD.So_Tien_Dien3<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 4"<<setw(10)<<DON_GIA_B4<<setw(11)<<X.Bac4<<setw(12)<<STD.So_Tien_Dien4<<"|"<<endl;
		cout<<"\t| Tong dien nang tieu thu kWh"<<setw(6)<<D.So_Dien<<setw(13)<<"|"<<endl;
		cout<<"\t| Tong so tien dien chua thue (dong)"<<setw(11)<<STD.So_Tien_Dien<<"|\n";
		cout<<"\t| Thue suat GTGT "<<setw(32)<<"10%|\n";
		cout<<"\t| Tong so tien thanh toan (dong)"<<setw(15)<<STD.So_Tien_Dien * 1.1<<"|\n";
		cout<<"\t------------------------------------------------"<<endl;
	}

	if (D.So_Dien >= 301 && D.So_Dien <= 400)  // bac 5
	{
		cout<<"\t|"<<setw(13)<<"Bac 1"<<setw(10)<<DON_GIA_B1<<setw(11)<<X.Bac1<<setw(12)<<STD.So_Tien_Dien1<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 2"<<setw(10)<<DON_GIA_B2<<setw(11)<<X.Bac2<<setw(12)<<STD.So_Tien_Dien2<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 3"<<setw(10)<<DON_GIA_B3<<setw(11)<<X.Bac3<<setw(12)<<STD.So_Tien_Dien3<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 4"<<setw(10)<<DON_GIA_B4<<setw(11)<<X.Bac4<<setw(12)<<STD.So_Tien_Dien4<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 5"<<setw(10)<<DON_GIA_B5<<setw(11)<<X.Bac5<<setw(12)<<STD.So_Tien_Dien5<<"|"<<endl;
		cout<<"\t| Tong dien nang tieu thu kWh"<<setw(6)<<D.So_Dien<<setw(13)<<"|"<<endl;
		cout<<"\t| Tong so tien dien chua thue (dong)"<<setw(11)<<STD.So_Tien_Dien<<"|\n";
		cout<<"\t| Thue suat GTGT "<<setw(32)<<"10%|\n";
		cout<<"\t| Tong so tien thanh toan (dong)"<<setw(15)<<STD.So_Tien_Dien * 1.1<<"|\n";
		cout<<"\t------------------------------------------------"<<endl;
	}

	if (D.So_Dien >= 401 )                  // bac 6
	{
		cout<<"\t|"<<setw(13)<<"Bac 1"<<setw(10)<<DON_GIA_B1<<setw(11)<<X.Bac1<<setw(12)<<STD.So_Tien_Dien1<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 2"<<setw(10)<<DON_GIA_B2<<setw(11)<<X.Bac2<<setw(12)<<STD.So_Tien_Dien2<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 3"<<setw(10)<<DON_GIA_B3<<setw(11)<<X.Bac3<<setw(12)<<STD.So_Tien_Dien3<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 4"<<setw(10)<<DON_GIA_B4<<setw(11)<<X.Bac4<<setw(12)<<STD.So_Tien_Dien4<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 5"<<setw(10)<<DON_GIA_B5<<setw(11)<<X.Bac5<<setw(12)<<STD.So_Tien_Dien5<<"|"<<endl;
		cout<<"\t|"<<setw(13)<<"Bac 6"<<setw(10)<<DON_GIA_B6<<setw(11)<<X.Bac6<<setw(12)<<STD.So_Tien_Dien6<<"|"<<endl;
		cout<<"\t| Tong dien nang tieu thu kWh"<<setw(6)<<D.So_Dien<<setw(13)<<"|"<<endl;
		cout<<"\t| Tong so tien dien chua thue (dong)"<<setw(11)<<STD.So_Tien_Dien<<"|\n";
		cout<<"\t| Thue suat GTGT "<<setw(32)<<"10%|\n";
		cout<<"\t| Tong so tien thanh toan (dong)"<<setw(15)<<STD.So_Tien_Dien * 1.1<<"|\n";
		cout<<"\t------------------------------------------------"<<endl;
	}
}
void Tien_Dien_Cac_Ho(DANHSACH &DS, BAC_DIEN &X,SO_TIEN_DIEN &STD)  // Danh Sach Tien Dien Cac Ho Dan
{
	cout<<"\t\t----- CHUONG TRINH TINH SO TIEN DIEN----\n"<<endl;
	BANGTIENDIEN();
	for (int i = 0 ; i<DS.n; i++)
	{
		cout<<"\n\n\t\t Khach Hang "<<i+1<<endl;
		Doc_Thong_Tin_KH (DS.arr[i]);
		BACDIEN(X , DS.arr[i]);
		SOTIENDIEN (X, STD, DS.arr[i]);
		cout<<"\t Tong so tien thanh toan : "<<STD.So_Tien_Dien<<"(VND)\n";
    }
}
