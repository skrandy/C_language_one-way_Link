#pragma once
//����
void AddList_Till(int a);//��β����
void AddList_top(int a);//��ͷ����
void AddList(int a, int b);//��ָ��λ�ò�������

//ɾ��
void DeleteList();//�������
void DeleteList_top();//ͷɾ��
void DeleteList_Till();//βɾ��
//ɾ��ָ�����ݽڵ�
void DeleteList_Number(int a);
//ɾ��ָ��λ�ýڵ�
void DeleteList_Location(int a);


//�鿴
//������������
void ErgodicList();
//����ָ�����ݵ�ָ��
struct node* FindNode_Number_Pointer(int a);
//����ָ�����ݵ���һ��ָ��
struct node* FindNode_Number_Previous_Pointer(int a);
//����ָ��λ�õ�ָ��
struct node* FindNode_Location_Pointer(int a);
//����ָ��λ�õ���һ��ָ��
struct node* FindNode_Location_Previous_Pointer(int a);
//�ҵ�ָ�����ݵ�����λ��
int FindNode_Location_Number(int a);
//��������ĳ���
int Length_List();




//�޸�
void UpdateList(int a, int b);//��ָ��λ���޸�ָ������
//��һ�������滻��һ������,��a�滻b
void UpdateList_data(int a, int b);