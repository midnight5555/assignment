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
int main(int argc, char const *argv[])
{
    populate_inpatient();
    print_inpatient();
    return 0;
}
