#include <stdio.h>
#include "function.h"

void populatepatient(struct patient[])
{
for(int i=0;i<10;i++)
{
	printf("Enter patient's name %d:",i+1);
	scanf("%s",patient[i].name);

	printf( "Enter doctor's name %d:",i+1);
	scanf("%s"patient[i].doctor);
	
	printf("Enter patient's age %d:",i+1);
	scanf("%s" patient[i].age);

	printf("Enter patient's bill %d:",i+1);
	scanf("%s"patient[i].bill);

}
}
void printpatient(struct patients patient[10])
{
	printf("\n patients who are admitted include:\n");

for(int i=0;i<10;i++)
{
	printf("patient %d :%s by %s\n,i+1,patient[i].name,patient[i].doctor,patient[i].age,patient[i].bill");
}
return 0;
}
       
