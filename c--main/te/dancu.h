#ifndef DANCU__H_
#define DANCU__H_

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;


struct dancu
{
	string Ho_Va_Ten;
	string Dia_Chi;
	string So_DT;
	float So_Dien;
};
typedef struct dancu DAN_CU;

struct danhsach
{
	DAN_CU *arr;
	int n;
};
typedef struct danhsach DANHSACH ;



void File(ifstream &FileIn, DAN_CU &D);
void Doc_Thong_Tin_KH( DAN_CU &D);
void Doc_Danh_Sach (ifstream &FileIn , DANHSACH &DS);
void Xuat_Danh_Sach(DANHSACH &DS);

#endif // DANCU__H_


