#include<stdio.h>//���룬�޸ģ������
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
 	printf("������ѧ����������ѧ�ţ��绰���룬��ͥ��ַ:(�������ʾ����)\n"); 
 	printf("��һ�����룬�Կո�ָ�ÿ����Ϣ\n");
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
 	printf("ѧ����ϢΪ��\n");
 	while(p){
 		printf("ѧ��������Ϊ��%s\n",p->name);
 		printf("ѧ����ѧ��Ϊ��%d\n",p->number);
 		printf("ѧ���ĵ绰����Ϊ��%s\n",p->num);
 		printf("ѧ���ļ�ͥ��ַΪ��%s\n\n",p->dizhi);
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
 printf("������ѧ���ĸ���:\n");
 scanf("%d",&e); 
 	l ha;
 	ha=i();
 	input(ha,e);
 	output(ha);
 	int m,o,t;
	char n[20];//�޸ĵ�m���ڵ��ʲô���� 
	do{
	printf("��������Ҫ�޸ĵĴ���:\n");
 	scanf("%d",&o);
 	for(t=0;t<o;t++){
 		printf("��������Ҫ�޸ĵĽڵ㣬��Ҫ�޸ĵ���Ϣ��\n");
 		scanf("%d %s",&m,n); 
 		xiugai(ha,m,n);
	 }
 	output(ha);
 	printf("�Ƿ������޸�����(�������ǻ��)\n");
 	char a[20];
	 scanf("%s",a);
	 int t=strcmp(a,"��"); 
	
	}while(t=='0');
}
 
 
 
 
 
 
 
 
 
 
 
