#include<stdio.h>
#include<stdlib.h>
#define size 10
int stk[size];
int sp=-1;
void main()
{
void push(int);
int pop();
void print();
int opt,item;//program for push,pop&exit
do
{
printf("\n1.push\n2.pop\n3display\n4.exit\n");
printf(" Enter your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("enter your item:");
scanf("%d",&item);
push(item);
break;
case 2:item=pop();
if(item!=-9)
printf("popped value=%d\n",item);
break;
case 3:
print();
break;
case 4:
exit(0);
}
}
while(1);
}
//function to push on item from stack
void push(int x)
{
if(sp==size-1)
{
printf("stack is full");
return ;
}
else
stk[++sp]=x;
return;
}
//function to pop an item from stack
int pop()
{
if(sp==-1)
{
printf("empty stack...\n");
return -9;
}
else
return stk[sp--];
}
//function to display the elements
void print()
{
int i;
if(sp==-1)
{
printf("stack is empty...\n");
}
else
{
for(i=0;i<=sp;i++)
{
printf("%d\t",stk[i]);
}
}
return;
}

