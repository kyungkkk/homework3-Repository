#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{

int one[] = {0, 1, 2, 3, 4};
printf("one = %p\n", one);
printf("&one = %p\n", &one);
printf("&one[0] = %p\n", &one[0]);
printf("\n");
print1(&one[0], 5);//lab2-1과 달리 포인터로 가리키는 주소의 값이 변경되기 때문에 함수 밖에서도 사용 가능
return 0;
}

void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i));
printf("\n");

}