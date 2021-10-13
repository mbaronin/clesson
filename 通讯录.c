#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//�����ʼ�� 
struct People
{
	char name[20];
	char number[12];
	struct People* next;
};

static struct People* tail;

//�ͷ��ڴ� 
void release(struct People* head)
{
	struct People* temp;
	
	printf("...�ͷ��ڴ���...\n");
	while (head != NULL){
		temp = head;
		printf("...�ͷ��ڴ���..temp = head;.\n");
		printf("����: %-20s�绰: %s\n",temp->name,temp->number); 
		head = head->next;
		
		free(temp);
		
		printf("...�ͷ��ڴ���..free(temp);.\n");
		printf("����: %-20s�绰: %s\n",temp->name,temp->number); 
	}
	return ; 
}

//��ӡ 
void printPeople(struct People* head)
{
	struct People* print = head;
	int count=0;
	 
	while(print){
			printf("NO.%d   ����: %-20s�绰: %s\n",++count ,print->name,print->number);
			print = print->next;
			if(count>30) break; 
	}
	putchar('\n');
}

//��ֵ 
void getInput(struct People* node)
{
	printf("����������:");
	scanf("%s",node->name);
	printf("������绰:");
	scanf("%s",node->number);
} 

//������� 
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
	
//���Ĭ����ϵ�� 
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

//����
struct People* searchPeople(struct People*head)
{
	char target[20];
	struct People *person;
	person = head;
	
	scanf("%s",target);//printf("target is :%s\n",target);
	
	while(person){	//printf("ѭ����ʼperson name is :%s		",person->name);	
		if (!strcmp(person->name,target)){//printf("if yes\n");
			break;
		}else {
			person = person->next;//printf("if no\n");
		} 
	} 
	printf("�������\n\n");
	
	if(person  == NULL)  {  printf("ûtm�ҵ������\n");
	}else  {
		//������������[δʵװ] 
		//do{	printf("����: %-20s�绰: %s\n",person->name,person->number);
		//}while((person = searchPeople(person->next)) != NULL);
		printf("����: %-20s�绰: %s\n",person->name,person->number); 
	}
	
	return person;
 } 

//����
void changePeople(struct People*head)
{
	struct People *person;
	
	printf("������Ҫ���ĵ���ϵ��:");
	person = searchPeople(head); 
	printf("������Ҫ���ĵ��²���:\n");
	getInput(person); 
}

//ɾ��
struct People* deletePeople(struct People*head) 
{
	struct People *person;
	struct People *previous;
	char target[20];
	
	person = head;
	previous = person; 
	printf("������Ҫɾ������ϵ��:");
	scanf("%s",target);
	
	while(person){	
		if (!strcmp(person->name,target)){	break;
		}else {
			previous = person;
			person = person->next;
		} 
	} 
	
	if(person == NULL)  {  printf("ûtm�ҵ������\n");
	}else  {
		printf("����: %-20s�绰: %s		ɾ�����\n\n",person->name,person->number); 
		if(previous == person ){ head = person->next ;//��һ���ļ�Ҫ�����ж� 
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
	//printf("���ɳ�ʼͨ��¼\n"); 
	str1 = "q" ;		 	str2 = "17621507eva" ;	head = addStart( head, str1, str2);
	str1 = "����" ; 		str2 = "11099073333" ;	head = addStart( head, str1, str2); 
	str1 = "����"; 			str2 = "15900974444" ;	head = addStart( head, str1, str2); 
	str1 = "����" ; 		str2 = "15900985555" ;	head = addStart( head, str1, str2); 
	str1 = "����" ; 		str2 = "15900976666" ;	head = addStart( head, str1, str2); 
	str1 = "�¶���" ; 		str2 = "15900972222" ;	head = addStart( head, str1, str2); 
	str1 = "self" ;		 	str2 = "15900971320" ;	head = addStart( head, str1, str2); 
	str1 = "self" ;		 	str2 = "17621507159" ;	head = addStart( head, str1, str2);
	str1 = "w" ;		 	str2 = "17621507159" ;	head = addStart( head, str1, str2);
	printPeople(head);
	
	while(1)
	{
		printf("\n�������ѡ����\n	1.�����µ���ϵ��\n	2.����������ϵ��\n	3.����������ϵ��\n"); 
		printf("	4.ɾ��������ϵ��\n	5.��ʾ��ǰͨ��¼\n	6.�˳�\n"); 
		do {  ch = getchar();  }while(ch!='1' && ch!= '2' && ch!= '3' && ch!= '4' && ch!= '5' && ch!= '6');
		
		switch(ch){
			case '1' : head = addPeople(head);		break;
			case '2' : printf("������Ҫ����������:");searchPeople(head); break;
			case '3' : changePeople(head) ;			break;
			case '4' : head =deletePeople(head) ;  	break;
			case '5' : printPeople(head);			break;
			case '6' : goto END;
		}
		
	}
END:	
	printf("������������\n"); 
	release(head);
	printPeople(head);
	return 0;
}
