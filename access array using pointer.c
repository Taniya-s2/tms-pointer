#include <stdio.h>
int main() {
int arr[6] = {10, 20, 30 , 40, 50, 78};
int *ptr;
int i;
ptr = arr;
printf("Accessing array elements using pointer:\n");
for(i = 0; i < 6; i++) {
printf("Element %d = %d\n", i, *(ptr + i));

}
return 0;

}
