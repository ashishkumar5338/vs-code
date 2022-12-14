/*14. WAP to perform following actions on an array entered by the user:
      a) Print the even-valued elements
      b) Print the odd-valued elements
      c) Calculate and print the sum and average of the elements of array
      d) Print the maximum and minimum element of array
      e) Remove the duplicates from the array
      f) Print the array in reverse order
    The program should present a menu to the user and ask for one of the options.
    The menu should also include options to re-enter array and to quit the program.
*/

#include<stdio.h>
#include<stdlib.h>

void menu();
void even_valued(int arr[], int n);
void odd_valued(int arr[], int n);
void sum_avg(int arr[], int n);
void min_max(int arr[], int n);
void duplicate(int arr[], int *n);
void reverse(int arr[], int n);

int main()
{
    int *arr,n,i,s;
    re_enter :
    printf("Enter the number of integers to be entered in Array: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr!=NULL)
    {
        for(i=0;i<n;i++)
        {
            printf("\nEnter the %d element : ",i+1);
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("\nEntered %d element is : %d",i+1,arr[i]);
        }
    }
    choice : menu();
    scanf("%d",&s);
    switch(s)
    {
        case 1:
            even_valued(arr,n);
            goto choice;
            break;
        case 2:
            odd_valued(arr,n);
            goto choice;
            break;
        case 3:
            sum_avg(arr,n);
            goto choice;
            break;
        case 4:
            min_max(arr,n);
            goto choice;
            break;
        case 5:
            duplicate(arr,&n);
            goto choice;
            break;
        case 6:
            reverse(arr,n);
            goto choice;
            break;
        case 7:
            goto re_enter;
        case 8:
            printf("Exiting.....\nExited.");
            exit(0);
        default:
            printf("\nEnter valid option.");
    }


    free (arr);
    return 0;
}
//fuction definition    
void menu()
{
    printf("\n\nEnter any one options from below :");
    printf("\n1. Print the even-valued elements.");
    printf("\n2. Print the odd-valued elements.");
    printf("\n3. Calculate and print the sum and average of the elements of array.");
    printf("\n4. Print the maximum and minimum element of array.");
    printf("\n5. Remove the duplicates from the array.");
    printf("\n6. Print the array in reverse order.");
    printf("\n7. Re-enter Array.");
    printf("\n8. Exit.\n");
}
void even_valued(int arr[] ,int n)
{
    printf("\nEven-valued Elements are : ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf(" %d  ",arr[i]);
        }
    }
}
void odd_valued(int arr[], int n)
{
    printf("\nOdd-valued Elements are : ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf(" %d  ",arr[i]);
        }
    }
}
void sum_avg(int arr[], int n)
{
    int sum=0;
    float avg;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];        
    }
    avg=(float)sum/n;
    printf("\nThe Sum of the elements is %d and Average is %.2f",sum,avg);
}
void min_max(int arr[], int n)
{
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<min)
        {
            min=arr[i+1];
        }
        if(arr[i+1]>max)
        {
               max=arr[i+1];
        }
    }
    printf("\nThe Maximum is %d and Minimum is %d",max,min);
}
void duplicate(int arr[], int *n)
{
    printf("\nAfter removing duplicates : ");
    for(int i=0;i<*n;i++)
    {
        for(int j=i+1;j<*n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<*(n-1);k++)
                {
                    arr[k]=arr[k+1];
                }
                (*n)--;
            }
        }
    }
    for(int i=0;i<*n;i++)   
        printf(" %d  ",arr[i]);
}
void reverse(int arr[], int n)
{
    int t;
    printf("\nArray in Reverse order are :");
    // for(int i=0;i<n/2;i++)
    // {
    //     t=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=t;
    // }
    for(int i=n-1;i>=0;i--)
    {
        printf(" %d  ",arr[i]);
    }
}