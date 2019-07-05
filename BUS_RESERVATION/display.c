/* OUTPUT:
 *
 * 	Seatno |    Name          |  Age  |  Gender  |
 *   ========================================================
 * 	  1.   | Vivek Yadav      |  25   |    M     |
 * 	  --------------------------------------------
 *	  2.   | Vishant Singh    |  18   |    M     |
 *	  --------------------------------------------
 *	  3.   | Shiva Singh      |  23   |    F     |
 *	  --------------------------------------------
 *	  :				       :
 *	  :       UPTO N NO.                   :
 *	  :                                    :
 *	  :                                    :
 *
 */


/* PROBLEM:
 *
 * when we we are adding variable length of data like name then vartical
 * lines are moving uneven. i am not getting desire output.
 *
 * SOLUTION:
 *
 * Do padding of sapce into name array. So that size of each array
 * become same. i did this thing. SEE Seat_Reservation.c file. 
 *
 */

 	

 



#include"headerfiles.h"

void display(Reserve *head){
	int flag = 1;
	Reserve *temp = head;

	while(temp){

		if(flag == 1){
			printf("\n\tSeatno");
		        printf("|        Name         ");
		  	printf("| Age ");
		      	printf("| Gender | \n");
			printf("\t=================================================");
			flag=0;
		}

		printf("\n\t   %d. ",temp->seatno);
		printf("| %s ",temp->name);
		printf("| %d ",temp->age);
		printf(" |    %s   |\n",temp->gender);
		printf("\t-------------------------------------------------");


			temp = temp->next;
	}
	printf("\n");
}
