// lab2-2.c

#include <stdio.h>

int main()
{
    printf("[----- [������] [2023041001] -----]\n");

    int i; //������ ����
    int *ptr; //������ ������
    int **dptr; //������ ���� ������

    i = 1234; //i�� 1234 �Ҵ�

    // i�� ���� �ּ�, ptr�� ���� �ּ� ���
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    
    // ptr�� i �ּ� �Ҵ�
    ptr = &i; /* ptr is now holding the address of i */
    
    // i ���� �ּ�, ptr ���� �ּ�, ptr�� ����Ű�� �� ���
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    
    // dptr�� ptr �ּ� �Ҵ�
    dptr = &ptr; /* dptr is now holding the address of ptr */
    
    // i ���� �ּ�, ptr ���� �ּ�, ptr�� ����Ű�� ��, dptr ���� �ּ�, dptr�� ����Ű�� �� ���
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
    
    // ptr �� ���� �� i ���� ptr ��, ptr�� ����Ű�� ��, dptr ���� dptr�� ����Ű�� �� ���
    *ptr = 7777; /* changing the value of *ptr */
    
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    
    // dptr �� ���� �� i ���� ptr ��, ptr�� ����Ű�� ��, dptr ���� dptr�� ����Ű�� �� ���
    **dptr = 8888; /* changing the value of **dptr */
    
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    
    return 0;
}