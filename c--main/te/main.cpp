
// -------Chuong Trinh Tinh Tien Dien-------

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<string>
#include "dancu.h"
#include "timkiem.h"
using namespace std;
int main()
{
	DAN_CU D;
	BAC_DIEN X;
	SO_TIEN_DIEN STD;
	Tim_Kiem TK;
	DANHSACH DS ;
	ifstream FileIn;
	FileIn.open("dancu.txt", ios_base::in);     // Mo file
	int dem = 0;
	while (FileIn.eof() == false)
	{
		string x;
		getline(FileIn , x);
		dem++ ;
	}
	DS.n = dem;
	DS.arr = new DAN_CU[DS.n];                       // Khai bao cap phat dong
	FileIn.seekg(ios::beg);                          // Cho con tro ve dau File
	Doc_Danh_Sach (FileIn , DS);                     // D.92 Doc het danh sach File

	Xuat_Danh_Sach(DS)   ;
	CT_Tien_Dien(TK ,DS, X, STD);
	FileIn.close() ;
	delete [] DS.arr;
	system("PAUSE");
	return 0;
}
