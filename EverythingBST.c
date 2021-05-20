#include<stdio.h>
#include<stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
}*node;

int c=0;
int c1=0;
int c2=0;
int x=0;
int i;

node create();
void insert(node ,node );
void preorder(node );
void inorder(node );
void postorder(node );
int search(node , int );
node delete(node ,int );
node find_min(node );
node find_max(node );
int count(node );
int count_leaf(node );
int count_nonleaf(node );
int height(node root);
int max(int a,int b);
void level(node);
void level_count(node , int);
void printlevel(node);
void printlevel_count(node ,int, int);


int main()
{
    char ch;
    int item,f,z,k;
    node root=NULL,temp;
    do
    {
        temp=create();
        if(root==NULL)
        {
            root=temp;
        }
        else
            insert(root,temp);
        printf("To Enter more nodes, Enter Y\N\t");
        getchar();
        scanf("%c",&ch);

    }while(ch=='Y' || ch=='y');

    printf("\n\nPre-order:\n");
    preorder(root);
    printf("\n\nInOrder\n");
    inorder(root);
    printf("\n\nPost-Order\n");
    postorder(root);
    printf("\n\nSearch Function\nEnter data you want to search\n");
    scanf("%d",&item);
    f=search(root,item);
    if(f==1)
        printf("\nKey Found\n");
    else
        printf("\nKey not Found\n");
    printf("\nEnter 1 to Delete a Value from BST, 0 to Exit\n");
    scanf("%d",&z);
    if(z==1)
    {
        printf("\nEnter Value to be deleted\n");
        scanf("%d",&k);
        delete(root,k);
    }
     printf("\n\nPre-order After Deletion:\n");
    preorder(root);
    printf("\n\nIn-Order After Deletion:\n");
    inorder(root);
    printf("\n\nPost-Order After Deletion:\n");
    postorder(root);
    printf("\n\nTotal Nodes in tree=%d\n",count(root));
    printf("\nLeaf Nodes:");
    printf("\nNo of leaf nodes=%d\n",count_leaf(root));
    printf("\nNo of Non-leaf nodes=%d\n",count_nonleaf(root));
    printf("\nHeight of tree=%d\n",height(root));
    printf("\nMaximum in tree is %d\n",find_max(root)->data);
    printf("\nMinimum in tree is %d\n",find_min(root)->data);
    printf("\nLevel Order Traversal:");
    level(root);
    printf("\n");
    printf("\nNodes at Each level:\n");
    printlevel(root);
    printf("\n");
    return 0;

}
void insert(node root, node temp)
{
    if(temp->data>root->data)
    {
        if(root->right!=NULL)
            insert(root->right,temp);
        else
            root->right=temp;
    }
    if(temp->data < root->data)
    {
        if(root->left!=NULL)
            insert(root->left,temp);
        else
            root->left=temp;
    }
    if(temp->data==root->data)
        printf("\nValue cannot be inserted\n");
}

void preorder(node root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}

void postorder(node root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}

int search(node root,int item)
{
    while(root!=NULL)
    {
        x++;
        if(item>root->data)
            return search(root->right,item);
        else if(item<root->data)
            return search(root->left,item);
        else
        {
            printf("\nLevel of Node is %d\n",x);
            return 1;
        }
    }
}

node create()
{
    int data;
    printf("\nEnter the data to be inserted in tree\n");
    scanf("%d",&data);
    node temp=(node)malloc(sizeof(struct BST));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

node delete(node root,int x)
{
    if (root==NULL)
        return NULL;
    if(x>root->data)
        root->right=delete(root->right,x);
    else if(x<root->data)
        root->left=delete(root->left,x);
    else
    {
        if(root->left==NULL && root->left==NULL)
        {
            free(root); //Free Root when only root exists
            return NULL;
        }
        else if(root->left==NULL || root->right==NULL) //Free Root when tree is either right skewed or left skewed respectively
        {
                node temp;
                if(root->left==NULL)//Right Skewed
                    temp=root->right;
                else//Left Skewed
                    temp=root->left;
                free(root);
                return temp;
        }
        else
        {
            node temp=find_min(root->right);
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
        }
    }
    return root;
}

node find_min(node root)
{
    if(root==NULL)
        return NULL;
    else if(root->left!=NULL)
        return find_min(root->left);
    return root;
}
node find_max(node root)
{
    if(root==NULL)
        return NULL;
    else if(root->right!=NULL)
        return(find_max(root->right));
    return root;
}

int count(node root)
{
    if(root!=NULL)
    {
        count(root->left);
        c++;
        count(root->right);
    }
    return c;

}

int count_leaf(node root)
{
    if(root!=NULL)
    {
        count_leaf(root->left);
        if(root->left==NULL && root->right==NULL)
        {
                c1++;
                printf("\t%d",root->data);
        }
        count_leaf(root->right);
    }
    return c1;

}

int count_nonleaf(node root)
{
    if(root!=NULL)
    {
        count_nonleaf(root->left);
        if(root->left!=NULL || root->right!=NULL || (root->left!=NULL && root->right!=NULL))
        {
            c2++;
        }
        count_nonleaf(root->right);
    }
    return c2;
}
int height(node root)
{
    if(root==NULL)
        return 0;
    else
        return 1+max(height(root->left),height(root->right));
}

int max(int a,int b)
{
    if(a>b) return a;
    else
        return b;
}


void level(node root)
{
    for(i=0;i<=height(root);i++)
    {
        level_count(root,i);
    }
}

void level_count(node root, int l)
{
    if(root==NULL)
        return ;
    if(l==1)
        printf("%d\t",root->data);
    else
    {
        level_count(root->left,l-1);
        level_count(root->right,l-1);
    }

}

void printlevel(node root)
{
    for(i=1;i<=height(root);i++)
    {
        printf("Level %d: ",i);
        printlevel_count(root,i,1);

        printf("\n");
    }
}

void printlevel_count(node root, int desired, int current)
{
    if(root==NULL)
        return ;
    if(desired==current)
        printf("%d\t",root->data);
    else
    {
        printlevel_count(root->left,desired,current+1);
        printlevel_count(root->right,desired,current+1);
    }
}
