#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
	int id;
	char name[50];
};
void main(){
	int n,i;
	struct student s[50];
	printf("Enter the number of Students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter ID of student number %d :",i+1);
		scanf("%d",&s[i].id);
		printf("\nEnter name of student number %d :",i+1);
		scanf("%s",&s[i].name);
	}
	printf("\nData:");
	
	for(i=0;i<n;i++){
		printf("\nID number: %d",s[i].id);
		printf("\nName: %s",s[i].name);
	}	
	getch();
}
