#include <stdio.h>
#include <math.h> // b


void computeHomeValue(void) {
    int popularity, size;
    int homeValue;
      printf("Enter the  popularity of the neighborhood:\n ");
    scanf("%d", &popularity);
    
    printf("Enter the  size of house:\n");
    scanf("%d", &size);
    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
    printf("Home value is: %d\n", homeValue);
}

int main() {
    computeHomeValue();
    
    return 0;
}
