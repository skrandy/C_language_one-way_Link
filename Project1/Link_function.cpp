#include<stdio.h>
#include<stdlib.h>
#include"Link_function.h"
#include"jiegouti.h"
//����
//��β����
void AddList_Till(int a)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node)); //�����½ڵ㣬�����ڴ�

//�Խڵ�����ݽ��и�ֵ
	temp->a = a;
	temp->next = NULL;//���ڵ��ָ���趨Ϊ��ָ��

	//��Ϊ������������

	//��һ�����ͷָ��Ϊ�վͰ������Ϊͷָ��
	if (head == NULL)
	{
		head = temp;
		end = temp;
	}
	else	//ͷָ�벻Ϊ�վ��ں����������
	{
		end->next = temp;
		//ʹ��βָ���������µĽڵ�
		end = temp;
		//�ı�βָ���λ��
	}
}
//��ͷ����
void AddList_top(int a)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));//�����ڴ�
	temp->a = a;
	temp->next = head;//����ָ��ͷָ��
	head = temp;//ͷָ���ƶ����µ�ͷָ��λ��
}
//ָ��λ�ò���,ָ��a������b
void AddList(int a, int b)
{
	struct node* ADD_list = NULL;
	ADD_list = FindNode_Location_Pointer(a);
	ADD_list->a = b;
}






//ɾ��
//�������
void DeleteList()
{
	struct node* move_node = head;//����moveָ�����ƶ�����
	struct node* Delete_node = NULL;//����ɾ��ָ�����ͷ��ڴ�
	//����Ϊ��
	if (head == NULL)
	{
		printf("������Ϊ��\n");
	}
	else
	{
		while (!(move_node == NULL))
		{
			Delete_node = move_node; //���ƶ�ָ����ڴ�λ�ø�ֵ��ɾ��ָ��
			move_node = move_node->next;//�ƶ�moveָ�뵽��һ������
			free(Delete_node);
		}
		printf("ɾ�����\n");
		head = move_node;
		end = move_node;
	}
}
//ͷɾ��һ��
void DeleteList_top()
{
	if (head == NULL)
	{
		printf("����Ϊ��\n");
		return ;
	}
	struct node* delete_list = head;//����ָ������ɾ��
	head = head->next;//��ͷָ���ƶ���ͷָ�����һ��ָ��
	free(delete_list);//ɾ����֮ǰ��ͷָ��
}
//βɾ��һ��
void DeleteList_Till()
{
	NODE* pe = NULL;//����peָ�����ͷ�
	NODE* move_list = head;
	//�����ж��Ƿ�Ϊ��
	if (head == NULL)
	{
		printf("����Ϊ��\n");
		//����Ϊ������ɾ����

	}
	else
	{
		while (!(move_list->next->next = NULL))//ʹmoveָ���ƶ��������ڶ�������
		{
			move_list = move_list->next;
		}
		pe = move_list->next;//��ɾ��ָ���ƶ������һ��
		free(pe);
		move_list->next = NULL;

	}
}
//ɾ��ָ�����ݽڵ�
void DeleteList_Number(int a)
{
	struct node* move_list = NULL;
	struct node* delete_list = NULL;
	move_list = FindNode_Number_Previous_Pointer(a);
	delete_list = move_list->next;
	move_list->next = move_list->next->next;
	free(delete_list);
}
//ɾ��ָ��λ�ýڵ�
void DeleteList_Location(int a)
{
	struct node* move_list = NULL;
	struct node* delete_list = NULL;
	move_list = FindNode_Location_Previous_Pointer(a);
	delete_list = move_list->next;
	move_list->next = move_list->next->next;
	free(delete_list);
}







//�鿴
//������������
void ErgodicList()
{
	int a = 1;
	struct node* pe = head;//ʹ��peָ�����ƶ��������
	//ʹ��whileѭ�����ж�
	if (pe == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	while (!(pe == NULL))
	{
		printf("��%d���������ֵΪ%d\n", a, pe->a);
		a++;
		pe = pe->next;
	}
}
//����ָ�����ݵ�ָ��
struct node* FindNode_Number_Pointer(int a)
{
	NODE* move_list = head;
	while (!(move_list == NULL))
	{
		if (move_list->a == a)
		{
			return move_list;
		}
	}
	printf("������%d������������", a);
	return NULL;
}
//����ָ�����ݵ���һ��ָ��
struct node* FindNode_Number_Previous_Pointer(int a){
	NODE* move_list = head;
	while (!(move_list == NULL))
	{
		if (move_list->a == a-1)
		{
			return move_list;
		}
	}
	printf("������%d������������", a);
	return NULL;
}
//����ָ��λ�õ�ָ��
struct node* FindNode_Location_Pointer(int a)
{
	int i = 0;
	NODE* move_list = head;
	while (move_list != NULL)
	{
		i++;
		if (i == a)
		{
			return move_list;
		}
		move_list = move_list->next;
	}
	return NULL;
}
//����ָ��λ�õ���һ��ָ��
struct node* FindNode_Location_Previous_Pointer(int a)
{
	int i = 0;
	NODE* move_list = head;
	while (move_list != NULL)
	{
		i++;
		if (i == a-1)
		{
			return move_list;
		}
		move_list = move_list->next;
	}
	return NULL;
}
//�ҵ�ָ�����ݵ�����λ��
int FindNode_Location_Number(int a)
{
	int i = 0;
	NODE* move_list = head;
	while (!(move_list == NULL))
	{
		i++;
		if (move_list->a == a) {
			return i;
		}
		move_list = move_list->next;
	}
	if (move_list == NULL)
	{
		printf("������%d����������", a);
		return 0;
	}
	return i;
}
//��������ĳ���
int Length_List()
{
	int i = 0;
	NODE* move_list = head;//����moveָ�����ƶ�����
	while (!(move_list == NULL))
	{
		i++;
		move_list = move_list->next;
	}
	return i;
}





//�޸�
//��ָ��λ���޸�ָ������
void UpdateList(int a, int b)
{
	NODE* update_list = NULL;
	update_list = FindNode_Location_Pointer(a);
	update_list->a = b;
}
//��һ�������滻��һ������,��a�滻b
void UpdateList_data(int a, int b)
{
	NODE* update_list = NULL;
	update_list = FindNode_Number_Pointer(a);
	update_list->a = b;
}