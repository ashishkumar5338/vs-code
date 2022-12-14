//Write a menu-driven program to perform following Matrix operations (2-D array implementation):
//   a) Sum      b) Difference      c) Product      d) Transpose
#include<stdio.h>
#include<stdlib.h>

void input(int a,int b,int matrix[a][b],char *num);
void print(int a,int b,int matrix[a][b]);
void sum(int m,int n,int a,int b,int matrix1[m][n],int matrix2[a][b],int result[a][b]);
void dif(int m,int n,int a,int b,int matrix1[m][n],int matrix2[a][b],int result[a][b]);
void mul(int m,int n,int a,int b,int matrix1[m][n],int matrix2[a][b],int result[a][b]);
void transpose(int a,int b,int matrix1[a][b],int result[a][b]);

int main()
{
    int m,n,a,b,s,t,matrix1[10][10],matrix2[10][10],result[10][10];
    re_enter :
    printf("Enter the size of first Matrix :\n");
    scanf("%d%d",&m,&n);
    input(m,n,matrix1,"first");
    printf("First Matrix\n");
    print(m,n,matrix1);

    printf("Enter the size of second Matrix :\n");
    scanf("%d%d",&a,&b);
    input(a,b,matrix2,"second");
    printf("Second Matrix\n");
    print(a,b,matrix2);

    choice:    
    printf("\n\nEnter any one options from below :\n1. Sum\n2. Difference\n3. Product\n4. Transpose\n5. Re-enter Matrix.\n6. Exit.\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
            if(m!=a || n!=b)
            {
                printf("\nError! Matrix addition for %dx%d and %dx%d is not possible.\n",m,n,a,b);
                goto choice;
            }
            else
            {
                sum(m,n,a,b,matrix1,matrix2,result);
                printf("Sum of First matrix and Second matrix is :\n");
                print(a,b,result);            
                goto choice;
            }
        case 2:
            if(m!=a || n!=b)
            {
                printf("\nError! Matrix Subtraction for %dx%d and %dx%d is not possible.\n",m,n,a,b);
                goto choice;               
            }
            else
            {
                dif(m,n,a,b,matrix1,matrix2,result);
                printf("Difference of First matrix and Second matrix is :\n");
                print(a,b,result);            
                goto choice;                
            }
        case 3:
            if(n!=a)
            {
                printf("\nError! Matrix Product for %dx%d and %dx%d is not possible.\n",m,n,a,b);
                goto choice;
            }
            printf("Product of First matrix and Second matrix is :\n");
            mul(m,n,a,b,matrix1,matrix2,result);
            print(m,b,result);            
            goto choice;
        case 4:
            again :
            printf("Enter any option from below\n1. for First Matrix\n2. for Second Matrix\n");
            scanf("%d",&t);
            if(t==1)
            {
                printf("Transpose of First Matrix is :\n");
                transpose(m,n,matrix1,result);            
                goto choice;
                break;
            }
            if(t==2)
            {
                printf("Transpose of Second Matrix is :\n");
                transpose(a,b,matrix2,result);           
                goto choice;
                break;
            }
            else
                printf("\nEnter again a valid option.");
                goto again;
        case 5:
            goto re_enter;
        case 6:
            printf("Exiting.....\nExited.");
            exit(0);
        default:
            printf("\nEnter valid option.");
    }


    return 0;
}

void input(int a,int b,int matrix[a][b],char *num)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter element %d,%d of %s matrix :\n",i+1,j+1,num);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
}

void print(int a,int b,int matrix[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf(" %3d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void sum(int m,int n,int a,int b,int matrix1[m][n],int matrix2[a][b],int result[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            result[i][j]= matrix1[i][j] + matrix2[i][j];
        }
    }    
}

void dif(int m,int n,int a,int b,int matrix1[m][n],int matrix2[a][b],int result[a][b])
{    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            result[i][j]= matrix1[i][j] - matrix2[i][j];
        }
    }    
}

void mul(int m,int n,int a,int b,int matrix1[m][n],int matrix2[a][b],int result[a][b])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<b;j++)
        {
            result[i][j]=0;
            for(int k=0;k<n;k++)
            {
                result[i][j] = result[i][j] + matrix1[i][k]*matrix2[k][j];
            }
        }
    }    
}

void transpose(int a,int b,int matrix1[a][b],int result[a][b])
{
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            result[i][j]= matrix1[j][i];
            printf(" %3d ",result[i][j]);
        }
        printf("\n");
    }
}