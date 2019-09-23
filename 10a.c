#include<stdio.h>
void main()
{
    int q[20];
    int start,n,i;
    int tot_mov=0,t;
    printf("FCFS DISK SCHEDULING\n");
    printf("--------------------------\n");
    printf("Enter the Queue size: ");
    scanf("%d",&n);
    printf("\n\nEnter the disk queue elements:\n");
    for(i=1;i<=n;i++)
	scanf("%d",&q[i]);
    printf("\nEnter the head start: ");
    scanf("%d",&start);
    for(i=1;i<=n;i++)
    {
	  if (i==1)
		t=abs(q[i]-start);
	    else
		t=abs(q[i-1]-q[i]);
	    tot_mov=tot_mov + t;
	    printf("Head Moves....to : %d\n\n",q[i]);
    }
       printf("\n\nTotal Head Movements is : %d cylinders",tot_mov);
    }

