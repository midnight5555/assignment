#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct patients
{ 
	char name[50];
	char doctor[50];
         int age;
      float bill;
};
void populatepatient(struct patients []);
void printpatient( struct patients[]);

#endif
