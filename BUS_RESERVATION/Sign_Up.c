#include"headerfiles.h"

/*  typedef struct info{
    int count;
    char name[NAME_SIZE];
    char password[20];
    }info;
*/

/************************************************/
void Sign_Up(){

info st;

printf("\n\t\tUser name/Email id  :\t");
__fpurge(stdin);
scanf("%[^\n]s",st.name);

printf("\t\tpassword\t    :\t");
__fpurge(stdin);
scanf("%[^\n]s",st.password);

int flag =0;
char pass[20];
while( flag == 0){
printf("\t\tConfirm password    :\t");
__fpurge(stdin);
scanf("%[^\n]s",pass);

if(! strcmp(st.password,pass) ){
        if( Save_Info(st.name,st.password) )
                printf("\n\t\t*****Successfull Sign UP*****\n");
        flag = 1;
}
else{
        printf("\n\t\t*****Password does not match*****\n");

}
}
}


int Save_Info(char* name,char* password){

FILE* fp = NULL;

fp = fopen("Info.txt","a+");

if(fp == NULL){
        perror("Unable to open File\n");
}

fprintf(fp,"%s %s\n",name,password);

close(fp);
}
/*********************************************************/
                      
