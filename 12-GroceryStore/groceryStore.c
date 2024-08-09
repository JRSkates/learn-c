#include <stdio.h>

int main() {

  int appleQuantity = 0;
  double applePrice = 1.49;
  double appleReview = 0.00;
  int appleReviewDisplay = 0;
  const char APPLELOCATION = 'F';

  appleQuantity = 23;
  appleReview = 82.5;

  appleReviewDisplay = (int)appleReview;

  // Final print return
  printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!\n", 
  applePrice, appleQuantity, APPLELOCATION, appleReviewDisplay);
}