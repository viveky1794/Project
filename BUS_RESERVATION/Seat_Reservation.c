#include"headerfiles.h"
#define NAME_SIZE 20
extern int flag;

/*
// funcation for confirmation of Seat and 
// user details are stores into file
//
   typedef struct reservation{

    int age;
    int seatno;
    char name[NAME_SIZE];
    char gender[1];
    struct reservation *next;

    }Reserve;

*/ 
Reserve *details(void){

    Reserve *head=NULL;
	
	head = calloc(1,sizeof (Reserve)); // make new struct to information
	
    printf("\n\t\tEnter name,age[0-64],gender[M/F]\n");

	head->seatno = ++cnt; // to conunt the seat no
                          // cnt is decalre into headerfile  
	printf("\n\t\tSeatno:\t%d",head->seatno);

	printf("\n\t\tName:\t");

	__fpurge(stdin);

	scanf("%[^\n]s",head->name);
	
	   
	int i;
	for(i=strlen(head->name); i < NAME_SIZE-1; i++)
		head->name[i] = ' ';// space padding to make all name equal size so that while printing they 
	// look good and align.

		head->name[i] = '\0';

	printf("\n\t\tAge:\t");

    __fpurge(stdin);

	scanf(" %d",&head->age);

	printf("\n\t\tGender:\t");

	__fpurge(stdin);

	scanf("%[^\n]s",head->gender);


return head; // data will not collaspse when fucation will terminated.
}

Reserve* Seat_Reservation(Reserve *head){ // Main funcation 

	Reserve *rev=NULL;

	if(head==NULL){	// when there is no entry into bus reservation list //
	
    head = details();
    }
	else{
		// when there is some entry available 
		
        rev = head; // already exiting data entry point
		
        while(rev->next != NULL){
		rev = rev->next;
		}
        // Add next entry after at last node
		rev->next = details();
	}
	
return head;
}
