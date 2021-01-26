#include<stdio.h>//输入，显示，插入，删除，查询，修改
#include<string.h>
#include<stdlib.h>
#include<windows.h> 
typedef struct node{
	char name[20];
	int number;
	char num[20];
	char address[20];
	struct node*next;
}Node,*linklist;
linklist i();
 void input(linklist head,int e);//输入 
 void output(linklist head);//输出 
 void amend(linklist head, int m, char*n);// 修改 
 void insert(linklist head,int e);//插入 
 void delete(linklist head,int e);//删除 
 void inquir(linklist head,int e);//查询 
 void *createlink();
 void outlink(Node *head);
 
 int main(void)//主函数 
 
 { 
 createlink();

    system("color 0B");
     int e;
     printf("请输入学生的个数:\n");
    scanf("%d",&e); 
 	linklist ha;
 	printf("%d\n",sizeof(ha)); 
 	ha=i();
 	input(ha,e);
 	output(ha);
 	printf("是否想要插入数据？(请输入是或否)\n");
 	char v[20];
	  scanf("%s",v);
	  int t=strcmp(v,"是"); 
	  if(t==0){
	  	printf("请输入想在第几个结点后插入数据：\n");
	  	scanf("%d",&e);
	  	insert(ha,e);
	  	output(ha);
	  }
	  printf("是否想要删除数据？(请输入是或否)\n");
	  scanf("%s",v);
	   t=strcmp(v,"是"); 
	  if(t==0){
	  	printf("请输入想删除第几项数据：\n");
	  	scanf("%d",&e);
	  	delete(ha,e);
	  	output(ha);
	  }
	   printf("是否想要查询数据？(请输入是或否)\n");
	  scanf("%s",v);
	   t=strcmp(v,"是"); 
	  if(t==0){
	  	printf("请输入想查询第几项数据：\n");
	  	scanf("%d",&e);
	  	inquir(ha,e);
	  	
	  }
	  printf("是否想要修改数据？(请输入是或否)\n");
	    scanf("%s",v);
	   t=strcmp(v,"是");
	   if(t==0){
 	int m,o,i;
	char n[20];//修改第m个节点的什么数据 
	do{
	printf("请输入想要修改的次数:\n");
 	scanf("%d",&o);
 	for(i=0;i<o;i++){
 		printf("请输入想要修改的节点，想要修改的信息：(以空格分隔)\n");
 		printf("如: 1 name,2 address,3 number,4 num\n");
 		scanf("%d %s",&m,n); 
 		amend(ha,m,n);
	 }
 	output(ha);
 	printf("是否还想再修改数据(请输入是或否)\n");
 	char a[20];
	 scanf("%s",a);
	 t=strcmp(a,"是"); 
	
	}while(t=='0');}
	outlink(ha);
}





 linklist i()
{
	Node*head;
	head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	return head;
 } 
 void input(linklist head,int e){
 	Node *s,*r;
 	r=head;
 	char name[20],num[20],address[20];
 	int number;
 	printf("请输入学生的姓名，学号，电话号码，家庭地址:\n"); 
 	printf("请一行输入，以空格分隔每个信息\n");
 	printf("如：张三 1 13506045123 陕西省西安市\n");
 	while(e>0){
 		scanf("%s %d %s %s",name,&number,num,address);
 		  
 		if(number==0){
        break;}
		 s=(Node*)malloc(sizeof(Node));
		 strcpy(s->name,name);
		 s->number=number;
		 strcpy(s->num,num);
		 strcpy(s->address,address);	
         r->next=s;
	     r=s;
	     e--;
	     if(e>0){
	     	printf("请输入下一个学生的信息：\n");
		 }
		}
		r->next=NULL;
 }
 void output(linklist head){//显示函数 
 	Node* p;
 	p=head->next;
 	printf("学生信息为：\n");
 	while(p){
 		printf("学生的姓名为：%s\n",p->name);
 		printf("学生的学号为：%d\n",p->number);
 		printf("学生的电话号码为：%s\n",p->num);
 		printf("学生的家庭地址为：%s\n\n",p->address);
 		p=p->next;
	 }
 }
 void amend(linklist head, int m, char*n){ //修改函数 
 	Node*k=head; 
 	while(m>0){
 	k=k->next;
 	m--;}
 	printf("请输入修改后的信息：\n"); 
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
	 if(strcmp(n,"address")==0)
	 {
 		scanf("%s",&k->address);
 	}
 }
 void insert(linklist head,int e){
 	linklist t;
 	t=head;
 	while(e--){
 		t=t->next;
	 }
	 printf("请输入新加的数据，一行输入，以空格分隔\n");
	 Node *r;
	 scanf("%s %d %s %s",r->name,&r->number,r->num,r->address);
	r->next=t->next;
	t->next=r;
 }
 void delete(linklist head,int e){
 	linklist t;
 	t=head;
 	e--; 
 	while(e--){
 		t=t->next;
	 }
	 t->next=t->next->next;
 }
 void inquir(linklist head,int e){
 	linklist t;
 	t=head;
 	while(e--){
 		t=t->next;
	 }
	 	printf("学生的姓名为：%s\n",t->name);
 		printf("学生的学号为：%d\n",t->number);
 		printf("学生的电话号码为：%s\n",t->num);
 		printf("学生的家庭地址为：%s\n\n",t->address);
 } 
 void *createlink()
  {
    Node *head =(Node*)malloc(sizeof(Node));
    int number;
    char name[20],num[20],address[20];
    Node *p;
    Node *q;
    p=q=head;
    FILE * r= fopen("input.txt","r");
    if(r==NULL)
    {
        printf("打开文件失败!");
        return NULL; 
    }
     
    while(fscanf(r,"%s %d %s %s",name,&number,num,address)!=EOF)
    {  
       q= (Node*)malloc(sizeof(Node));
       strcpy(p->name,name);
       p->number=number;
       strcpy(p->num,num);
       strcpy(p->address,address);
       p->next=q;
       p=q;
    }
    p->next=NULL;
}
 void outlink(Node *head)
{
   Node *p=head->next;
   FILE *w =fopen("output.txt","w");
   if(w==NULL)
   {
       printf("打开文件失败!");
       return; 
   }
   printf("打开文件成功，文件内容为：\n");
   while(p)
   {
       //输出链表节点数据到屏幕 
       printf("学生的姓名为：%s\n",p->name);
 		printf("学生的学号为：%d\n",p->number);
 		printf("学生的电话号码为：%s\n",p->num);
 		printf("学生的家庭地址为：%s\n\n",p->address);
       //输出链表节点数据到文件output.txt 
       fprintf(w,"学生的姓名为：%s\n",p->name);
       fprintf(w,"学生的学号为：%d\n",p->number);
       fprintf(w,"学生的电话号码为：%s\n",p->num);
       fprintf(w,"学生的家庭地址为：%s\n",p->address);
       p=p->next;        
   }     
   printf("\n");
   fprintf(w,"\n");
   fclose(w);
   return;
}
 
 
 
