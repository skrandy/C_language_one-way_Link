#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Link_function.h"

//��Ϊȫ�ֱ�����ͷָ���βָ�������㴦��͵��á�


int main()
{
    int length = 0;
    AddList_Till(11);
    AddList_Till(2);
    AddList_top(4);
    AddList_Till(33);
    length = Length_List();
    printf("%d\n", length);
    ErgodicList();
    DeleteList();
    ErgodicList();
    return 0;
}
