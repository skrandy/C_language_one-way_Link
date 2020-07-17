#pragma once
//增加
void AddList_Till(int a);//链尾插入
void AddList_top(int a);//链头插入
void AddList(int a, int b);//在指定位置插入链表

//删除
void DeleteList();//清空链表
void DeleteList_top();//头删除
void DeleteList_Till();//尾删除
//删除指定数据节点
void DeleteList_Number(int a);
//删除指定位置节点
void DeleteList_Location(int a);


//查看
//遍历整个链表
void ErgodicList();
//返回指定数据的指针
struct node* FindNode_Number_Pointer(int a);
//返回指定数据的上一个指针
struct node* FindNode_Number_Previous_Pointer(int a);
//返回指定位置的指针
struct node* FindNode_Location_Pointer(int a);
//返回指定位置的上一个指针
struct node* FindNode_Location_Previous_Pointer(int a);
//找到指定数据的链表位置
int FindNode_Location_Number(int a);
//返回链表的长度
int Length_List();




//修改
void UpdateList(int a, int b);//在指定位置修改指定数据
//用一个数据替换另一个数据,用a替换b
void UpdateList_data(int a, int b);