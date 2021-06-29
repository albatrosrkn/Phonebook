#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <string.h>
FILE *fp,*ft;
struct phonebook
{
    char LName[50];
    char FName[50];
    int phoneno;
    int t=0;
};
struct phonebook p;
void ScanList();
void SearchList();
void AddList();
void DeleteList();
int Numberoflines2(int counter2);
void Sort( char *sorted,int count6,char *value);
void exit1();
void menu();
int numberoflines(int count);
int main()
{
/*FILE *fp;
fp=fopen("phone1.txt","r");
char sorted[1024];
int count5=0;

if(fp==NULL)
printf("Dosya acılamadı");

while(!feof(fp)){
    fscanf(fp,"%s\n",p.LName);
   // if(value!=',' && value!='\n'){
printf("(%s)",p.LName);
strcpy(sorted,p.LName);
printf("%s",sorted);
printf("|%c|",sorted[0]);
Sort(sorted,count5,p.LName);
fgets(p.LName,1,fp);
    count5++;
    }
printf("Sorted values:\n");
for(int j=0; j<count5; j++){
    printf("%c",sorted[j]);
} */
fclose(fp);
menu();
    return 0;
}
void menu(){
  int option;
   printf("\t\t MENU(Please select option)\n");
   printf("\t\t 1.Scan list\n \t\t 2.Search record\n \t\t 3.Add record \n \t\t 4.Delete record \n \t\t 5.Exit\n");
   scanf("%d",&option);
   switch(option)
   {
   case 1:
       ScanList();
   case 2:
       SearchList();
   case 3:
       AddList();
   case 4:
//       DeleteList();
   case 5:
       exit1();

}}
void Sort(char *sorted,int count6,char *value){
int i=0;
sorted[count6]=*value;
if(count6==0) return;
for(i=count6; i>=0; i--){
    if(*value<sorted[i-1])
        sorted[i]=sorted[i-1];
        else break;
}
sorted[i]=*value;
}
void ScanList(){
FILE *fp;
char names[5][20]={"phone1.txt","phone2.txt","phone3.txt","phone4.txt","phone5.txt"};
int counter2;
int count=0;
char c;
printf("All of Record:\n");
int a;
for(int j=0; j<=p.t+1; j++){
fp=fopen(names[j],"rb");
while(!feof(fp)){
    fflush(stdout);

    fscanf(fp,"%s , %s , %d\n",p.LName,p.FName,&p.phoneno);
    if(p.FName!=NULL){

    printf("%s,%s,%d\n",p.LName,p.FName,p.phoneno);
}}}
if(fp==NULL){
    printf("Dosya acilamadi");
exit(1);
}
for (c = getc(fp); c != EOF; c = getc(fp))
           if (c == '\n')
            count = count + 1;
            counter2=count;
if((counter2+1)%6==0){
fp=fopen(names[p.t+1],"rb");
 while(!feof(fp))
{
    fflush(stdout);
    fscanf(fp,"%s , %s , %d \n",p.LName,p.FName,&p.phoneno);
    if(p.FName!=NULL){
    printf("\n%s List of record:",names[p.t+1]);
    printf("%s %s %d\n",p.LName,p.FName,p.phoneno);
    }
p.t++;
}
}
else if((counter2+1)%6!=0){
fp=fopen(names[p.t],"rb");
for(int i=0; i<=p.t+1; i++){
    fp=fopen(names[i],"rb");
printf("\n%s List of record:\n",names[i]);

while(!feof(fp)){
    fflush(stdout);
    fscanf(fp,"%s , %s , %d \n",p.LName,p.FName,&p.phoneno);
    if(p.FName!=NULL){

    printf("%s %s %d\n",p.LName,p.FName,p.phoneno);
}
}
}}
fclose(fp);
menu();
}
void SearchList(){
char c;
int counter2,count=0;
char name[50];
char surname[50];
char names[5][20]={"phone1.txt","phone2.txt","phone3.txt","phone4.txt","phone5.txt"};
int stat=0;
 fflush(stdin);
 printf("\n Please enter SurnameName: ");
 gets(surname);
printf("\n Please enter Name: ");
 gets(name);
 FILE *fp;
 for(int j=0; j<=p.t+1; j++){
fp=fopen(names[j],"rb");

 while(!feof(fp)){
   fscanf(fp,"%s , %s , %d\n",p.LName,p.FName,&p.phoneno);
   if(strcmp(p.FName,name) == 0){
    printf("%s  %s  %d\n\n Enter the continue...",p.LName,p.FName,p.phoneno);
    stat=1;
   }
  }}
for (c = getc(fp); c != EOF; c = getc(fp))
           if (c == '\n')
            count = count + 1;
            counter2=count;
if((counter2+1)%6==0){
int k=0;
fp=fopen(names[p.t+1],"rb");
 while(!feof(fp)){
   fscanf(fp,"%s , %s , %d\n",p.LName,p.FName,&p.phoneno);
   if(strcmp(p.FName,name) == 0){
    printf("%s  %s  %d\n\n Enter the continue...",p.LName,p.FName,p.phoneno);
    stat=1;
   }
  }
k++;
p.t=k;
}

else if((counter2+1)%6!=0){
fp=fopen(names[p.t],"rb");
for(int i=0; i<=p.t+1; i++){
    fp=fopen(names[i],"rb");
printf("\n%s List of record:\n",names[i]);

while(!feof(fp)){
   fscanf(fp,"%s , %s , %d\n",p.LName,p.FName,&p.phoneno);
   if(strcmp(p.FName,name) == 0){
    printf("%s  %s  %d\n\n Enter the continue...",p.LName,p.FName,p.phoneno);
    stat=1;
   }
  }
}}
  fclose(fp);
  if(stat == 0){
   puts("There is no record you searched for enter the continue...");
  }

 menu();
}
void AddList(){
    int count1;
numberoflines(count1);
menu();
.
void DeleteList(){// delete islemi yapilinca dosyadan siliyor fakat consolda listeyi bozuyor.satır 67 de delete fonksiyonu çagıriliyor.yorum satırında
int flag=0;
char name[50];
fp=fopen("phone1.txt","rb");
if(fp==NULL){
    printf("File is not opening");
}
else{
    ft=fopen("temp.txt","wb");
}
    if(ft==NULL){
        printf("File is not opening");
    }
    else{
        printf("Please enter you want to delete name:");
        getchar();
        gets(name);
        fflush(stdin);
    }
    while(!feof(fp)){
   fflush(stdout);
   fscanf(fp,"%s , %s , %d\n",p.LName,p.FName,&p.phoneno);
   if(strcmp(p.FName,name) != 0){
        fprintf(ft,"%s %s %d\n",p.LName,p.FName,p.phoneno);
   }
   else flag=1;
  }

  fclose(fp);
  fclose(ft);
    if(flag==1)
	{
	    remove("phone1.txt");
        rename("temp.txt","phone1.txt");
	}
		else
		{

			remove("temp.txt");
			printf("RECORD DELETED SUCCESSFULLY.\n");
		}
fflush(stdin);
menu();
}
int numberoflines(int count){
FILE *fp;
count = 0;
int counter=0;
int temp=0;
int a;
char c;

char names[5][20]={"phone1.txt","phone2.txt","phone3.txt","phone4.txt","phone5.txt"};

fp=fopen(names[p.t],"r");
if (fp == NULL)
{
   printf("Could not open file %s.txt",names[p.t]);
    exit(1);
    }
for (c = getc(fp); c != EOF; c = getc(fp))
           if (c == '\n')
            count = count + 1;
            counter=count;

fclose(fp);
printf("The file phone1.txt has %d lines\n ", count); //phone1.txt yazýlan yer deðiþecek
for(int i=0; i<count+1; i++){
if((count+1)%6==0){
int k=0;
fp=fopen(names[p.t+1],"r");
fp = fopen(names[p.t+1],"ab");
fflush(stdin);
printf("\n Please enter Last name:");
gets(p.LName);
//fwrite(&p.LName,sizeof p.LName,1,fp);
printf("\n Please enter First name:");
gets(p.FName);
//fwrite(&p.LName,sizeof p.FName,1,fp);
printf("\n Please enter Phone number:");
scanf("%d",&p.phoneno);
printf("\n");
fprintf(fp,"%s , %s , %d\n",p.LName,p.FName,p.phoneno);
fclose(fp);
k++;
p.t=k;
menu();
      }
else if((count+1)%6!=0){
fp=fopen(names[p.t],"r");
fp=fopen(names[p.t],"ab");
printf("\n Please enter Last name:");
getchar();
gets(p.LName);
//fwrite(&p.LName,sizeof p.LName,1,fp);
printf("\n Please enter First name:");
gets(p.FName);
//fwrite(&p.LName,sizeof p.FName,1,fp);
printf("\n Please enter Phone number:");
scanf("%d",&p.phoneno);
printf("\n");
fprintf(fp,"%s , %s , %d\n",p.LName,p.FName,p.phoneno);
fclose(fp);
menu();
      }
    }
return count;
}
void exit1(){


}
