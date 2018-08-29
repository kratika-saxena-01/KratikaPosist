#include<stdio.h>
#include<malloc.h>

#define oid 1;

struct node
{
    char timestamp[50];
    int data[20];
    int nodeNumber;
    char nodeId[4];
    char referenceNodeId[50];
    char childReferenceNodeId[50];
    char genesisReferenceNodeId[50];
    char HashValue[50];
    struct node *parent;
    //array of pointers of type struct node to store all the child nodes
    struct node *children[];
};

char[] encrypt(float data);
void createGenesis();
void createChild();

void main()
{
    int choice;
    printf("enter choice : ");
    printf("1.create genesis node : ");
    printf("2.create child nodes : ");
    printf("3.create child node that originates from a parent node : ");
    printf("4.encrypt and decrypt data inside node : ");
    printf("5.verify owner : ");
    scanf("%d",&choice);    
    switch(choice)
    {
        case 1:
            createGen();
        case 2:
            child();
        case 3:
             childfromPar();
        default:
             printf("wrong choice ");
    }
}


void createGenesis()
{
    int i;
    char enc[];
    float info;
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->parent=NULL;
    printf("enter data of genesis node : ");
    scanf("%f",&info);
    enc=encrypt(info);
    p->data=enc;
}        


void createChild(struct node *parent)
{
    printf("enter number of children of genesis node : ");
    scanf("%d",&n);        
    for(i=0;i<n;i++)
    {
        printf("enter data of child node upto 2 decimal places : ");
        struct node *q;
        q=(struct node *)malloc(siezof(struct node));
        scanf("%f",&info);               
        enc=encrypt(info);
        q->data=enc;
        p->children[i]=q;
    }
}

char[] encrypt(float data)
{
    char ret[];
    int count;
    ret[0]=oid;
    for(i=0;i<20;i++)
    {
        if(data[i]!=NULL)
            count++;
    }
    for(i=1;i<count;i++)
    {
        ret[i]=data[i];
    }
}                
    

    
