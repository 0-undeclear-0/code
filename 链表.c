#include<stdio.h>//输入，修改，输出，
#include<string.h>
#include<stdlib.h>
#include<windows.h> 
typedef struct node{
	char name[20];
	int number;
	char num[20];
	char dizhi[20];
	struct node*next;
}Node,*l;
l i()
{
	Node*head;
	head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	return head;
 } 
 void input(l head,int e){
 	Node *s,*r;
 	r=head;
 	char name[20],num[20],dizhi[20];
 	int number;
 	printf("请输入学生的姓名，学号，电话号码，家庭地址:(输入零表示结束)\n"); 
 	printf("请一行输入，以空格分隔每个信息\n");
 	while(e>0){
 		scanf("%s %d %s %s",name,&number,num,dizhi);
 		if(number==0){
        break;}
		 s=(Node*)malloc(sizeof(Node));
		 strcpy(s->name,name);
		 s->number=number;
		 strcpy(s->num,num);
		 strcpy(s->dizhi,dizhi);	
         r->next=s;
	     r=s;
	     e--;
		}
		r->next=NULL;
 }
 void output(l head){
 	Node* p;
 	p=head->next;
 	printf("学生信息为：\n");
 	while(p){
 		printf("学生的姓名为：%s\n",p->name);
 		printf("学生的学号为：%d\n",p->number);
 		printf("学生的电话号码为：%s\n",p->num);
 		printf("学生的家庭地址为：%s\n\n",p->dizhi);
 		p=p->next;
	 }
 }
 void xiugai(l head, int m, char*n){
 	Node*k=head; 
 	while(m>0){
 	k=k->next;
 	m--;}
 	if(strcmp(n,"name")==0)
 	{
 		scanf("%s",&k->name);
	 }
  if(strcmp(n,"number")==0)
 	{
 		scanf("%d",&k->number);
    }
     if(strcmp(n,"num")==0)
 	{
 		scanf("%s",&k->num);
	 }
	 if(strcmp(n,"dizhi")==0)
	 {
 		scanf("%s",&k->dizhi);
 	}
 }
 int main(void)
 { system("color 0B");
 int e;
 printf("请输入学生的个数:\n");
 scanf("%d",&e); 
 	l ha;
 	ha=i();
 	input(ha,e);
 	output(ha);
 	int m,o,t;
	char n[20];//修改第m个节点的什么数据 
	do{
	printf("请输入想要修改的次数:\n");
 	scanf("%d",&o);
 	for(t=0;t<o;t++){
 		printf("请输入想要修改的节点，想要修改的信息：\n");
 		scanf("%d %s",&m,n); 
 		xiugai(ha,m,n);
	 }
 	output(ha);
 	printf("是否还想再修改数据(请输入是或否)\n");
 	char a[20];
	 scanf("%s",a);
	 int t=strcmp(a,"是"); 
	
	}while(t=='0');
}
 
 
 
 
 
 
 
 
 
 
 
