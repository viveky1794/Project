#include"headerfiles.h"

/*
    typedef struct info{
    int count;
    char name[NAME_SIZE];
    char password[20];
    }info;

*/

extern int flag;// declare into main.c file
/**********************************************************/

void Sign_In(){
        
    info st; // structure

    printf("\t\tUser name/Email id  :\t");
    __fpurge(stdin);
    scanf("%[^\n]s",st.name);

    printf("\t\tpassword\t    :\t");
    __fpurge(stdin);
    scanf("%[^\n]s",st.password);

    /* Now check givien information is corrent OR not with your database */
    if( Check_Info(st.name,st.password) ){// check_Info is a funcation to tell this
          
        printf("\n\t\t*****Log in sucessfull*****\n");
        rewind(stdin); // to clear stdin and start from begninging
        flag = 1;

    }    
    else
            printf("\t\t*****Log in failed*****\n");
    }
            
           
    int Check_Info(char* name,char* password){

    FILE* fp=NULL;
    char buff1[20],buff2[20];

    fp = fopen("Info.txt","r");

    if(fp == NULL){
    perror("Error in file opening\n");
    exit(0);
    }

    while( fscanf(fp,"%s %s",buff1,buff2) !=EOF ){

    if( (strcmp(name,buff1) && strcmp(password,buff2) ) ){
            return 1; // name and password matched with data base.
    }
    }

     return 0; // name and password does not match with data base.
}

/************************************************************************/


