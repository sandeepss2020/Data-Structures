// #include <stdio.h>
// struct student {
//     char firstName[50];
//     int roll;
//     float marks;
// } s[5];
// int main() {
//     int i;
//     printf("Enter information of students:\n");
//     // storing information
//     for (i = 0; i < 5; ++i) {
//         s[i].roll = i + 1;
//         printf("\nFor roll number%d,\n", s[i].roll);
//         printf("Enter first name: ");
//         scanf("%s", s[i].firstName);
//         printf("Enter marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     printf("Displaying Information:\n\n");
//     // displaying information
//     for (i = 0; i < 5; ++i) {
//         printf("\nRoll number: %d\n", i + 1);
//         printf("First name: ");
//         puts(s[i].firstName);
//         printf("Marks: %.1f", s[i].marks);
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
struct course {
  int marks;
  char subject[30];
};

int main() {
  struct course *ptr;
  int noOfRecords;
  printf("Enter the number of records: ");
  scanf("%d", &noOfRecords);

  // Memory allocation for noOfRecords structures
  ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
  for (int i = 0; i < noOfRecords; ++i) {
    printf("Enter subject and marks:\n");
    scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < noOfRecords; ++i) {
    printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
  }

  free(ptr);

  return 0;
}

