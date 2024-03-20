// lab2-2.c

#include <stdio.h>

int main()
{
    printf("[----- [오현승] [2023041001] -----]\n");

    int i; //정수형 변수
    int *ptr; //정수형 포인터
    int **dptr; //정수형 이중 포인터

    i = 1234; //i에 1234 할당

    // i의 값과 주소, ptr의 값과 주소 출력
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    
    // ptr에 i 주소 할당
    ptr = &i; /* ptr is now holding the address of i */
    
    // i 값과 주소, ptr 값과 주소, ptr이 가리키는 값 출력
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    
    // dptr에 ptr 주소 할당
    dptr = &ptr; /* dptr is now holding the address of ptr */
    
    // i 값과 주소, ptr 값과 주소, ptr이 가리키는 값, dptr 값과 주소, dptr이 가리키는 값 출력
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);
    printf("value of **dptr == %d\n", **dptr);
    
    // ptr 값 변경 후 i 값과 ptr 값, ptr이 가리키는 값, dptr 값과 dptr이 가리키는 값 출력
    *ptr = 7777; /* changing the value of *ptr */
    
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    
    // dptr 값 변경 후 i 값과 ptr 값, ptr이 가리키는 값, dptr 값과 dptr이 가리키는 값 출력
    **dptr = 8888; /* changing the value of **dptr */
    
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    
    return 0;
}