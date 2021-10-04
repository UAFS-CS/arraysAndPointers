#include <stdio.h>
#include <string.h>

#define STRSIZE 50

struct record{
   int id;
   char fname[STRSIZE];
   char lname[STRSIZE];
};

void show(struct record rec);
void showP(struct record *rec);

int main(int argc, char *argv[]){
   struct record rec1;

   rec1.id=1001;
   strcpy(rec1.fname,"Joe");
   strcpy(rec1.lname,"Smith");

   show(rec1);
   showP(&rec1);

   return 0;
}

void show(struct record rec){
   printf("ID:     %d\n",rec.id);
   printf("Last:   %s\n",rec.lname);
   printf("First:  %s\n",rec.fname);
}

void showP(struct record *rec){
   printf("ID:     %d\n",rec->id);
   printf("Last:   %s\n",rec->lname);
   printf("First:  %s\n",rec->fname);
}
