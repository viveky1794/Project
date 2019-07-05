#ifndef __HEADERFILES__
#define __HEADERFILES__

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include<unistd.h>

#define NAME_SIZE 20

int cnt;
/* Declare structure */

typedef struct info{
int count;
char name[NAME_SIZE];
char password[20];
}info;

typedef struct reservation{
int age;
int seatno;
char name[NAME_SIZE];
char gender[1];
struct reservation *next;
}Reserve;

/* Declare funaction */
void Save_Reservation(Reserve *);
Reserve *Seat_Reservation(Reserve *);

void Sign_In();
void Sign_Up();
int Check_Info(char*,char*);
int Save_Info(char*,char*);
void FrontPage();
void display(Reserve *);

/* Add funcation as per requirement */

#endif
