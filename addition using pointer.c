#include <stdio.h>
int main() {
int i = 5, *j, *k;
j = &i;
j++;
j += 4;
k = j + 5;
printf("The value of pointer i is: %d\n", i);
printf("The value of pointer j is: %d\n", *j);
printf("The value of pointer k is: %d\n", k);
return 0;
}
