#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//定义初始化 
struct People
{
	char name[20];
	char number[12];
	struct People* next;
};

static struct People* tail;

//释放内存 
void release(struct People* head)
{
	struct People* temp;
	
	printf("...释放内存中...\n");
	while (head != NULL){
		temp = head;
		printf("...释放内存中..temp = head;.\n");
		printf("姓名: %-20s电话: %s\n",temp->name,temp->number); 
		head = head->next;
		
		free(temp);
		
		printf("...释放内存中..free(temp);.\n");
		printf("姓名: %-20s电话: %s\n",temp->name,temp->number); 
	}
	return ; 
}

//打印 
void printPeople(struct People* head)
{
	struct People* print = head;
	int count=0;
	 
	while(print){
			printf("NO.%d   姓名: %-20s电话: %s\n",++count ,print->name,print->number);
			print = print->next;
			if(count>30) break; 
	}
	putchar('\n');
}

//赋值 
void getInput(struct People* node)
{
	printf("请输入姓名:");
	scanf("%s",node->name);
	printf("请输入电话:");
	scanf("%s",node->number);
} 

//添加区块 
struct People* addPeople(struct People* head)
{
	struct People* node = (struct People*)malloc(sizeof(struct People));
	
	getInput(node);
	node->next = NULL;
	
	if (head!= NULL){	tail->next = node;
	}else{				head = node;	}//head != NULL ?  tail->next = node : head = node;
	tail = node;
	return head;
} 
	
//添加默认联系人 
struct People* addStart(struct People* head,char* name,char* number)
{
	struct People* node = (struct People*)malloc(sizeof(struct People));
	
	strcpy( node->name, name);
	strcpy( node->number, number);
	node->next = NULL;
	
	if (head!= NULL){	tail->next = node;
	}else{				head = node;	}//head != NULL ?  (tail->next = node) : head = node;
	tail = node;
	return head;
}

//搜索
struct People* searchPeople(struct People*head)
{
	char target[20];
	struct People *person;
	person = head;
	
	scanf("%s",target);//printf("target is :%s\n",target);
	
	while(person){	//printf("循环开始person name is :%s		",person->name);	
		if (!strcmp(person->name,target)){//printf("if yes\n");
			break;
		}else {
			person = person->next;//printf("if no\n");
		} 
	} 
	printf("查找完毕\n\n");
	
	if(person  == NULL)  {  printf("没tm找到这个人\n");
	}else  {
		//查找重名功能[未实装] 
		//do{	printf("姓名: %-20s电话: %s\n",person->name,person->number);
		//}while((person = searchPeople(person->next)) != NULL);
		printf("姓名: %-20s电话: %s\n",person->name,person->number); 
	}
	
	return person;
 } 

//更改
void changePeople(struct People*head)
{
	struct People *person;
	
	printf("请输入要更改的联系人:");
	person = searchPeople(head); 
	printf("请输入要更改的新参数:\n");
	getInput(person); 
}

//删除
struct People* deletePeople(struct People*head) 
{
	struct People *person;
	struct People *previous;
	char target[20];
	
	person = head;
	previous = person; 
	printf("请输入要删除的联系人:");
	scanf("%s",target);
	
	while(person){	
		if (!strcmp(person->name,target)){	break;
		}else {
			previous = person;
			person = person->next;
		} 
	} 
	
	if(person == NULL)  {  printf("没tm找到这个人\n");
	}else  {
		printf("姓名: %-20s电话: %s		删除完毕\n\n",person->name,person->number); 
		if(previous == person ){ head = person->next ;//第一个文件要单独判断 
		}else 		previous->next = person->next ;
	}
	
	return head;
}

int main()
{
	struct People* head = (struct People*)malloc(sizeof(struct People));
	
	head = NULL;
	int i;
	char ch;
	
	char* str1,* str2;
	//printf("生成初始通信录\n"); 
	str1 = "q" ;		 	str2 = "17621507eva" ;	head = addStart( head, str1, str2);
	str1 = "张三" ; 		str2 = "11099073333" ;	head = addStart( head, str1, str2); 
	str1 = "李四"; 			str2 = "15900974444" ;	head = addStart( head, str1, str2); 
	str1 = "王五" ; 		str2 = "15900985555" ;	head = addStart( head, str1, str2); 
	str1 = "赵六" ; 		str2 = "15900976666" ;	head = addStart( head, str1, str2); 
	str1 = "陈二狗" ; 		str2 = "15900972222" ;	head = addStart( head, str1, str2); 
	str1 = "self" ;		 	str2 = "15900971320" ;	head = addStart( head, str1, str2); 
	str1 = "self" ;		 	str2 = "17621507159" ;	head = addStart( head, str1, str2);
	str1 = "w" ;		 	str2 = "17621507159" ;	head = addStart( head, str1, str2);
	printPeople(head);
	
	while(1)
	{
		printf("\n输入序号选择功能\n	1.插入新的联系人\n	2.查找已有联系人\n	3.更改已有联系人\n"); 
		printf("	4.删除已有联系人\n	5.显示当前通信录\n	6.退出\n"); 
		do {  ch = getchar();  }while(ch!='1' && ch!= '2' && ch!= '3' && ch!= '4' && ch!= '5' && ch!= '6');
		
		switch(ch){
			case '1' : head = addPeople(head);		break;
			case '2' : printf("请输入要搜索的姓名:");searchPeople(head); break;
			case '3' : changePeople(head) ;			break;
			case '4' : head =deletePeople(head) ;  	break;
			case '5' : printPeople(head);			break;
			case '6' : goto END;
		}
		
	}
END:	
	printf("程序正常结束\n"); 
	release(head);
	printPeople(head);
	return 0;
}
