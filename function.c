#include <stdio.h>
void populate_patient(struct inpatient *patient)
 {

    int i;
    for (i = 0; i < 10; i++)
     {
        printf("Enter name of patient  %d: ", i + 1);
        scanf("%s",patient->patient[i].name);
        printf("Enter name of  consultant%d: ", i + 1);
        scanf("%s", patient->patients[i].consultant);
        printf("Enter %d: ", i + 1);
        scanf("%d", &patient->patients[i].age);
    }
}

void print_inpatient(struct inpatient *shelf) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("\npatient %d:\n", i + 1);
        printf("name: %s\n", patient->patients[i].title);
        printf("consultant: %s\n", patient->patients[i].author);
        printf("age: %d\n", patient->patients[i].age);
    }
}

int main() {
    struct inpatient patient;
    populate_inpatient(&patient);
    print_inpatient(&patient);
    return 0;

}