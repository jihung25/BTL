#ifndef TIMKIEM__H_
#define TIMKIEM__H_

#include "dancu.h"
#include "tiendien.h"
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
struct timkiem
{
	string HoTen;
	string DiaChi;
	string SDT;
};
typedef struct timkiem Tim_Kiem;

void TT_KHACH_HANG (Tim_Kiem &TK);
void TK_KHACH_HANG(Tim_Kiem &TK ,DANHSACH &DS, BAC_DIEN &X, SO_TIEN_DIEN &STD);
void CT_Tien_Dien(Tim_Kiem &TK ,DANHSACH &DS, BAC_DIEN &X, SO_TIEN_DIEN &STD);
#endif // TIMKIEM__H_



