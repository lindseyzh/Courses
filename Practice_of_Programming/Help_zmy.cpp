#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//定义链接队列（创建、判空、插入、删除）
//定义顺序栈（创建、判空、判满、压栈、弹栈、删除栈顶元素并返回其值）
struct node;
typedef struct node *pnode;
struct node{
    int info;
    pnode next;
};
struct linkqueue{
    pnode f;
    pnode r;
};
typedef struct linkqueue *plinkqueue;

plinkqueue createQ(){
    plinkqueue plqu=(plinkqueue)malloc(sizeof(struct linkqueue));
    if(plqu==NULL){
        printf("outofspace\n");
        return NULL;
    }
    plqu->f=NULL;
    plqu->r=NULL;
    return plqu;
}
int isemptyQ(plinkqueue plqu){
    return (plqu->f==NULL);//队列元素的删除以指针移动形式
}
void enqueue(plinkqueue plqu,int x){
    pnode q=(pnode)malloc(sizeof(struct node));
    if(q==NULL){
        printf("outofspace\n");
        return;
    }
    q->info=x;
    q->next=NULL;
    if(isemptyQ(plqu)){
        plqu->f=q;
        plqu->r=q;
    }
    else{
        plqu->r->next=q;
        plqu->r=q;
    }
}
void dequeue(plinkqueue plqu){
    if(!isemptyQ(plqu)){
        pnode q=(pnode)malloc(sizeof(struct node));
        q=plqu->f;
        plqu->f=q->next;
        free(q);
    }
}
int top(plinkqueue plqu){
    if(!isemptyQ(plqu))
        return (plqu->f->info);
    return -100;
}

struct seqstack{
    int MAXNUM;
    int t;
    int *e;
};
typedef struct seqstack *pseqstack;

pseqstack createS(int m){
    pseqstack s=(pseqstack)malloc(sizeof(struct seqstack));
    if(s==NULL){
        return NULL;
    }
    s->e=(int*)malloc(sizeof(int)*m);
    if(s->e){
        s->MAXNUM=m;
        s->t=-1;
        return s;
    }
    free(s);
    return NULL;
}

int isemptyS(pseqstack s){
    return (s->t==-1);
}
int isfullS(pseqstack s){
    return (s->t==s->MAXNUM-1);
}
void push(pseqstack s,int x){
    if(!isfullS(s)){
        s->t++;
        s->e[s->t]=x;
    }
}
void pop(pseqstack s){
    if(!isemptyS(s))
        --s->t;
}
int topS(pseqstack psst){//返回栈顶元素
    if(!isemptyS(psst))
        return (psst->e[psst->t]);
    return -102;
}


//dfs
//如果栈非满，则压栈；如果栈非空，则弹栈；
//递归结束条件：队空
//回溯：两次弹栈


//debug函数
void printqueue(plinkqueue plqu){
    printf("队列: ");
    pnode q=(pnode)malloc(sizeof(struct node));
    q=plqu->f;
    while(q!=plqu->r){
        printf("%d ",q->info);
        q=q->next;
    }
    printf("%d\n",q->info);
}
void printstack(pseqstack psst){
    printf("栈: ");
    int i;
    for(i=0;i<=psst->t;++i)
        printf("%d ",psst->e[i]);
    printf("\n");
}

int n;
int count;
plinkqueue QQ;
pseqstack SS;
//pnode tmp;//回溯用指针
//int temp;//回溯用整型变量
//这两个要放在函数体里面
void dfs(){
    printstack(SS);
    if(isemptyQ(QQ)){
        ++count;
        return;
    }
    if(!isemptyS(SS)){
        int temp=topS(SS);//保留栈顶元素用于回溯
        //修改：用于回溯的变量必须放在函数里面，否则是全局变量，在递归过程中会被更改
        pop(SS);
        dfs();
        push(SS,temp);//栈的回溯
    }
    if(!isfullS(SS)){
        push(SS,top(QQ));//取队头元素压栈
        pnode tmp=QQ->f;//保留队首指针用于回溯
        //修改理由同上
        QQ->f=QQ->f->next;//形式上删除队首元素
        dfs();
        QQ->f=tmp;//队头指针的回溯
        pop(SS);//栈元素的回溯
    }
    
}

int main(){
    scanf("%d",&n);
    //队列初始化
    QQ=createQ();
    int i;
    for(i=0;i<=n-1;++i)
        enqueue(QQ,i+1);
    printqueue(QQ);
    //栈初始化
    SS=createS(n);
    
    count=0;
    dfs();
    printf("%d\n",count);
    
    return 0;
}