
#include "timkiem.h"
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<string>

void TT_KHACH_HANG (Tim_Kiem &TK)     // Nhap thong tin khach hang de tim kiem
{
	cout<<"\tMOI NHAP THONG TIN KHACH HANG:"<<endl;
	cin.ignore();
	cout<<"\tHo & Ten:";
	getline(cin,TK.HoTen);
	cout<<"\tSDT:";
	getline(cin,TK.SDT);

}

void TK_KHACH_HANG(Tim_Kiem &TK ,DANHSACH &DS, BAC_DIEN &X, SO_TIEN_DIEN &STD)
{
	char ch1;
	int num;
	do
	{
		TT_KHACH_HANG (TK);
		int dem = 0 ;
		for(int i = 0;i<DS.n;i++)
		{
			if (DS.arr[i].Ho_Va_Ten == TK.HoTen && DS.arr[i].So_DT == TK.SDT )           // Tim kiem thong tin khach hang
			{
				dem ++ ;
				cout<<"\t*DA TIM THAY THONG TIN KHACH HANG* \n\n";
				Doc_Thong_Tin_KH (DS.arr[i]);
				cout<<"\tBan co muon in hoa don khong. "<<endl;
				cout<<"\t<Nhan phim 1 de in hoa don>\n";
				cout<<"\t<Nhan phim 2 de khong in hoa don>\n";
				cout<<"\t";cin>>num;
				system("cls");
				if (num == 1)                          // Xuat Hoa don
				{
					BACDIEN(X , DS.arr[i]);
					SOTIENDIEN (X, STD, DS.arr[i]);
					Doc_Hoa_Don(DS.arr[i], X, STD);;
				}
				if (num == 2)                         // Khong Xuat hoa don
				{
					Doc_Thong_Tin_KH (DS.arr[i]);
					BANGTIENDIEN();
					BACDIEN(X , DS.arr[i]);
					SOTIENDIEN (X, STD, DS.arr[i]);
					cout<<"\t Tong so tien thanh toan : "<<STD.So_Tien_Dien<<"(VND)\n";
				}
			}
		}
		if (dem == 0)
		{

			cout<<"KHONG TIM THAY THONG TIN KHACH HANG !"<<endl;
		}

		cout<<"BAN CO MUON TINH KHACH HANG TIEP THEO KHONG [Y/N]: ";
		cin>>ch1;
		system("cls");
	}while(toupper(ch1)=='Y');
}
void CT_Tien_Dien(Tim_Kiem &TK ,DANHSACH &DS, BAC_DIEN &X, SO_TIEN_DIEN &STD)
{
	int num;
	cout<<"\t\t----- CHUONG TRINH TINH SO TIEN DIEN----\n"<<endl;
	cout<<"\t*-------- MENU------------*\n";
	cout<<"\t1. Tinh tien dien tat ca ho dan.\n";
	cout<<"\t2.Tinh tien dien 1 khach hang.\n";
	cout<<"\t";cin>>num;
	if(num == 1)
	{
	//	BANGTIENDIEN();
		Tien_Dien_Cac_Ho(DS, X,STD);
	}
	if(num == 2)
	{
		TK_KHACH_HANG(TK ,DS, X, STD);
	}

}

