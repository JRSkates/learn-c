#include <stdio.h>

int main() {

  int studentRank;
  float studentFeeTotal;
  char studentGradeLetter;

  studentRank = 1;
  studentFeeTotal = 100.56;
  studentGradeLetter = "A";

  printf("Student's Rank in class: %dst\n", studentRank);
  printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
  printf("Student's Grade: %c\n", studentGradeLetter);
}
