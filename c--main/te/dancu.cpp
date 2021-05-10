
#include "dancu.h"

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<string>


void File(ifstream &FileIn, DAN_CU &D)       // Doc du lieu tu File
{
		getline(FileIn, D.Ho_Va_Ten, ',');
    	getline(FileIn, D.So_DT,',');
		getline(FileIn, D.Dia_Chi, ',');
		FileIn >>D.So_Dien;

		string temp;
		getline(FileIn, temp);
}

void Doc_Thong_Tin_KH( DAN_CU &D)
{
	cout<<"\t Khac Hang : "<<D.Ho_Va_Ten<<endl;
	cout<<"\t SDT : "<<D.So_DT<<endl;
	cout<<"\t Dia chi : "<<D.Dia_Chi<<endl;
	cout<<"\t So dien (kWh): "<<D.So_Dien<<endl;
}

void Doc_Danh_Sach (ifstream &FileIn , DANHSACH &DS)   //Doc DS_Khach hang tu File
{
	for (int i = 0 ; i<DS.n ; i++)
	{
		File(FileIn ,DS.arr[i]);
	}
}

void Xuat_Danh_Sach(DANHSACH &DS)
{
	for (int i = 0;i<DS.n; i++)
	{
		cout<<"\n\n\t\t Khach Hang "<<i+1<<endl;
		Doc_Thong_Tin_KH (DS.arr[i]);
	}
}


