#ifndef TIENDIEN_H_
#define TIENDIEN_H_

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<string>
#include "dancu.h"
using namespace std;
const float DON_GIA_B1 = 1.549;
const float DON_GIA_B2 = 1.734;
const float DON_GIA_B3 = 2.014;
const float DON_GIA_B4 = 2.536;
const float DON_GIA_B5 = 2.834;
const float DON_GIA_B6 = 2.927;
struct bacdien
{
	float Bac1 , Bac2 , Bac3 ;
	float Bac4 , Bac5 , Bac6 ;
};
typedef struct bacdien BAC_DIEN;

struct Tiendien
{
	float So_Tien_Dien1 ,So_Tien_Dien2 ,So_Tien_Dien3 ;
	float So_Tien_Dien4 ,So_Tien_Dien5 ,So_Tien_Dien6 ;
	float So_Tien_Dien ;
};
typedef struct Tiendien SO_TIEN_DIEN;


void BANGTIENDIEN() ;
float BACDIEN(BAC_DIEN &X , DAN_CU &D);
float SOTIENDIEN (BAC_DIEN &X,SO_TIEN_DIEN &STD,DAN_CU &D );
void Doc_Hoa_Don(DAN_CU &D,BAC_DIEN &X,SO_TIEN_DIEN &STD);
void Tien_Dien_Cac_Ho(DANHSACH &DS, BAC_DIEN &X,SO_TIEN_DIEN &STD);
#endif // TIENDIEN_H_
