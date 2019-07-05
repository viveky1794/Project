/*
 * Project: This is a mini C language project for BUS RESERVATION.
 * 	    
 * Ubuntu kernal versoin: 4.15.0-15
 *
 * compiler : gcc
 *
 * Author: Vivek Yadav
 *
 * Date:  13/06/2019
 *
 * Email id: viveky1794@gmail.com
 *
 * version : 1
 *
 * contributors :
 */



#include"headerfiles.h"
//void Save_Reservation(Reserve *);
int flag=0;

int main(){
int sign;
Reserve *head=NULL;
 // This is for displaying front page.
 // along with Sign_In and Sign_Up
  
  FrontPage(); 

    After_Sign_Up:
printf("\t\t1:Sign in\t2:Sign UP\n");
printf("\t\tEnter your choice: ");
scanf("%d",&sign);

switch(sign){
        case 1:
                Sign_In();
                break;
        case 2:
                Sign_Up();
                puts(" ");
                goto After_Sign_Up; // jump bacck to sign In
                flag =0;
                break;

}

#define TOTAL_SEAT 20

if(flag == 1){
	int seat;
 	printf("\n\t\tHOW MANY SEATS YOU WANT:\t");
        scanf("%d",&seat);

	if(seat>20){
	perror("Seat are too many\n");
	exit(0);
	}

	/* Total seats are available is 20 */
    // check first that seats are available Or not.
    // check into data base that how many entries
    // are there.
    while(head){

        cnt++;
        head = head->next;
      }
    
    printf("\n\t\t%d Seats are already reserved\n",cnt);
    
    if(seat < TOTAL_SEAT - cnt){

        for(int i =0; i<seat && cnt<=20; i++){
        	 head = Seat_Reservation(head);
}
}
}
    // save data into file.
    display(head);
    Save_Reservation(head);
return 0;
}







