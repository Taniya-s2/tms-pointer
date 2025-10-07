#include <stdio.h>
int main() {
int arr[7];
int *ptr;
int i;
ptr = arr;
printf("Enter 7 velements:\n");
for(i = 0; i < 7; i++) {
scanf("%d", (ptr + i));

}
printf("Accessing array elements using pointer:\n");
for(i = 0; i < 7; i++) {
printf("Element %d = %d\n", i, *(ptr + i));
}
return 0;
}

