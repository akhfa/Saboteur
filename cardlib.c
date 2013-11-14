#include "cardlib.h"
/* deklarasi kartu*/
cardstock P[];


/* realisasi kartu */
/* penamaan kartu */
ID(P[1]) = "path1";
ID(P[2]) = "path2";
ID(P[3]) = "path3";
ID(P[4]) = "path4";
ID(P[5]) = "path5";
ID(P[6]) = "path6";
ID(P[7]) = "path7";
ID(P[8]) = "path8";
ID(P[9]) = "path9";
ID(P[10]) = "path10";
ID(P[11]) = "path11";
ID(P[12]) = "path12";
ID(P[13]) = "path13";
ID(P[14]) = "path14";
ID(P[15]) = "path15";
ID(P[16]) = "path16";

/* jumlah kartu */
Stock(P[1]) = 5;
Stock(P[2]) = 4;
Stock(P[3]) = 3;
Stock(P[4]) = 4;
Stock(P[5]) = 5;
Stock(P[6]) = 5;
Stock(P[7]) = 5;
Stock(P[8]) = 1;
Stock(P[9]) = 1;
Stock(P[10]) = 1;
Stock(P[11]) = 1;
Stock(P[12]) = 2;
Stock(P[13]) = 1;
Stock(P[14]) = 1;
Stock(P[15]) = 1;
Stock(P[16]) = 1;

/* elemen kartu */
up(P[1]) = true;
down(P[1]) = true;
center(P[1]) = true;
right(P[1]) = true;
left(P[1]) = true;

up(P[2]) = false;
down(P[2]) = false;
center(P[2]) = true;
right(P[2]) = true;
left(P[2]) = true;

up(P[3]) = true;
down(P[3]) = true;
center(P[3]) = true;
right(P[3]) = false;
left(P[3]) = false;

up(P[4]) = true;
down(P[4]) = false;
center(P[4]) = true;
right(P[4]) = true;
left(P[4]) = false;

up(P[5]) = true;
down(P[5]) =  false;
center(P[5]) = true;
right(P[5]) = false;
left(P[5]) = true;

up(P[6]) = true;
down(P[6]) = false;
center(P[6]) = true;
right(P[6]) = true;
left(P[6]) = true;

up(P[7]) = true;
down(P[7]) = true;
center(P[7]) = true;
right(P[7]) = false;
left(P[7]) = true;

up(P[8]) = false;
down(P[8]) = false;
center(P[8]) = false;
right(P[8]) = true;
left(P[8]) = false;

up(P[9]) = true;
down(P[9]) = false;
center(P[9]) = false;
right(P[9]) =false;
left(P[9]) = false;

up(P[10]) = false;
down(P[10]) = false;
center(P[10]) = false;
right(P[10]) = true;
left(P[10]) = true;

up(P[11]) = true;
down(P[11]) = true;
center(P[11]) = false;
right(P[11]) = false;
left(P[11]) = false;

up(P[12]) = true;
down(P[12]) = false;
center(P[12]) = false;
right(P[12]) = false;
left(P[12]) = true;

up(P[13]) = true;
down(P[13]) = false;
center(P[13]) = false;
right(P[13]) = true;
left(P[13]) = false;

up(P[14]) = true;
down(P[14]) = false;
center(P[14]) = false;
right(P[14]) = true;
left(P[14]) = true;

up(P[15]) = true;
down(P[15]) = true;
center(P[15]) = false;
right(P[15]) = false;
left(P[15]) = true;

up(P[16]) = true;
down(P[16]) = true;
center(P[16]) = false;
right(P[16]) = true;
left(P[16]) = true;
