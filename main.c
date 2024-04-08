#include <stdio.h>
#include <stdlib.h>

struct patient
 {
     char name[50];
     char consultant[50];
     int age;
};

struct inpatient{
struct patient patients[10];
};