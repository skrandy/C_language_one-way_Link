#include<stdio.h>
#include<stdlib.h>
#include"Link_function.h"
#include"jiegouti.h"
//增加
//链尾插入
void AddList_Till(int a)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node)); //创建新节点，申请内存

//对节点的数据进行赋值
	temp->a = a;
	temp->next = NULL;//将节点的指针设定为空指针

	//分为两种情况来添加

	//第一种如果头指针为空就把这个变为头指针
	if (head == NULL)
	{
		head = temp;
		end = temp;
	}
	else	//头指针不为空就在后面添加链表
	{
		end->next = temp;
		//使用尾指针来链接新的节点
		end = temp;
		//改变尾指针的位置
	}
}
//链头插入
void AddList_top(int a)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));//申请内存
	temp->a = a;
	temp->next = head;//新链指向头指针
	head = temp;//头指针移动到新的头指针位置
}
//指定位置插入,指定a，插入b
void AddList(int a, int b)
{
	struct node* ADD_list = NULL;
	ADD_list = FindNode_Location_Pointer(a);
	ADD_list->a = b;
}






//删除
//清空链表
void DeleteList()
{
	struct node* move_node = head;//申明move指针来移动链表
	struct node* Delete_node = NULL;//申明删除指针来释放内存
	//链表为空
	if (head == NULL)
	{
		printf("链表已为空\n");
	}
	else
	{
		while (!(move_node == NULL))
		{
			Delete_node = move_node; //将移动指针的内存位置赋值给删除指针
			move_node = move_node->next;//移动move指针到下一个链上
			free(Delete_node);
		}
		printf("删除完毕\n");
		head = move_node;
		end = move_node;
	}
}
//头删除一个
void DeleteList_top()
{
	if (head == NULL)
	{
		printf("链表为空\n");
		return ;
	}
	struct node* delete_list = head;//申明指针用来删除
	head = head->next;//把头指针移动到头指针的下一个指针
	free(delete_list);//删除掉之前的头指针
}
//尾删除一个
void DeleteList_Till()
{
	NODE* pe = NULL;//利用pe指针来释放
	NODE* move_list = head;
	//首先判断是否为空
	if (head == NULL)
	{
		printf("链表为空\n");
		//链表为空则不用删除。

	}
	else
	{
		while (!(move_list->next->next = NULL))//使move指针移动到倒数第二个链表
		{
			move_list = move_list->next;
		}
		pe = move_list->next;//将删除指针移动到最后一个
		free(pe);
		move_list->next = NULL;

	}
}
//删除指定数据节点
void DeleteList_Number(int a)
{
	struct node* move_list = NULL;
	struct node* delete_list = NULL;
	move_list = FindNode_Number_Previous_Pointer(a);
	delete_list = move_list->next;
	move_list->next = move_list->next->next;
	free(delete_list);
}
//删除指定位置节点
void DeleteList_Location(int a)
{
	struct node* move_list = NULL;
	struct node* delete_list = NULL;
	move_list = FindNode_Location_Previous_Pointer(a);
	delete_list = move_list->next;
	move_list->next = move_list->next->next;
	free(delete_list);
}







//查看
//遍历整个链表
void ErgodicList()
{
	int a = 1;
	struct node* pe = head;//使用pe指针来移动链表输出
	//使用while循环来判定
	if (pe == NULL)
	{
		printf("链表为空\n");
		return;
	}
	while (!(pe == NULL))
	{
		printf("第%d个链表的数值为%d\n", a, pe->a);
		a++;
		pe = pe->next;
	}
}
//返回指定数据的指针
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
	printf("该数据%d不存在链表中", a);
	return NULL;
}
//返回指定数据的上一个指针
struct node* FindNode_Number_Previous_Pointer(int a){
	NODE* move_list = head;
	while (!(move_list == NULL))
	{
		if (move_list->a == a-1)
		{
			return move_list;
		}
	}
	printf("该数据%d不存在链表中", a);
	return NULL;
}
//返回指定位置的指针
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
//返回指定位置的上一个指针
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
//找到指定数据的链表位置
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
		printf("该数据%d不在链表中", a);
		return 0;
	}
	return i;
}
//返回链表的长度
int Length_List()
{
	int i = 0;
	NODE* move_list = head;//申明move指针来移动链表
	while (!(move_list == NULL))
	{
		i++;
		move_list = move_list->next;
	}
	return i;
}





//修改
//在指定位置修改指定数据
void UpdateList(int a, int b)
{
	NODE* update_list = NULL;
	update_list = FindNode_Location_Pointer(a);
	update_list->a = b;
}
//用一个数据替换另一个数据,用a替换b
void UpdateList_data(int a, int b)
{
	NODE* update_list = NULL;
	update_list = FindNode_Number_Pointer(a);
	update_list->a = b;
}