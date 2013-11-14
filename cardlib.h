/* cardlib */
#ifndef CARDLIB_H
#define CARDLIB_H
#include "boolean.h"
/* deklarasi type */
typedef char[] string;
typedef struct
{ 
  string id; 
  boolean state; /* aktif / tidak */
}card;
typedef struct
{
	card id;
	boolean up;
	boolean right;
	boolean left;
	boolean down;
	boolean center;
}pathcard;
typedef struct
{
	pathcard card;
	int stock;
}cardstock;

/* deklarasi selektor */
#define ID(P) (P).card.id.id
#define Stock(P) (P).stock
#define up(P) (P).card.up
#define down(P) (P).card.down
#define left(P) (P).card.left
#define right(P) (P).card.right
#define center(P) (P).card.center

#endif
