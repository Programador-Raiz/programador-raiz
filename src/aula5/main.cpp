#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5

//This is my struct I wanted to add to the hashtable
struct customer{
    char name[20];
    int id;
    int pin;
    double money;
    struct customer *next;
};

//creating the table
struct customer *hash_table[size];
struct customer *next=NULL;
//my hashfunction
int hash_function(int id){
    unsigned int adress_hash;
    adress_hash = 31 * id;
    return adress_hash % 5;
}

//Adding the cust elements to my table
void add_customer(){
    int id_set = rand() % 8999 + 1000;
    struct customer *start;
    struct customer *pointer;
    int adress = hash_function(id_set);

     //first element

    if(hash_table[adress]==NULL)
    {
        hash_table[adress] = (struct customer *)malloc(sizeof(struct customer));
        hash_table[adress]->id= id_set;
        hash_table[adress]->pin= rand() % 8999 + 1000;

        hash_table[adress]->money= 0;
        hash_table[adress]->next=NULL;
    } else {
        //Adding new files if the first element of the table is NOT NULL
        pointer=hash_table[adress];
        while(pointer->next != NULL)
        {
            pointer= pointer->next;
        }
        pointer->next = (struct customer *)malloc(sizeof(struct customer));
        pointer=pointer->next;
        pointer->id=id_set;
        pointer->pin= rand() % 8999 + 1000;
        pointer->money = 0;

        pointer->next=NULL;
    }
}

void list_customer(int a){
    struct customer *pointer;
    int x;
    for(x=0;x<5;x++){
        pointer = hash_table[x];
        printf("%d. ----------\n", x);
        while(pointer != 0){
            printf("KNR: %d, PIN: %d\n", pointer->id, pointer->pin);
            pointer = pointer->next;
        }
        printf("-------------------------\n");
    }
}

int main(){
    int adr,x;
    srand(time(NULL));
    for(x=0;x<5;x++){
        add_customer();
    }
    list_customer(size);
    getchar();getchar();
    return 0;
}