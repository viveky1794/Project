#include "headerfiles.h"

void Save_Reservation_Details(Reserve *head)
{
    FILE *fp =NULL;
    Reserve  *temp =head;

    if((fp = fopen("SaveReservationDetails","a")) < 0)
    {
        perror("Error while opening file into Save_Reservation_Details Funcation\n");
        exit(0);

    }

    char buffer[100];
    memset(buffer,'\0',100);

    while(temp)
    {
        sprintf(buffer,"%d %d %s %s",temp->age,temp->seatno,temp->name,temp->gender); // convert all data into string and store into a single buffer.

        fprintf(fp,"%s",buffer);
        temp = temp->next;

    }
fclose(fp);
}
