# include <stdio.h>
struct queue
{
    int qhead;
    int qdiff;
}q[20],temp;
void main()
{
   int start,i,t,n,j,tot_mov=0;
   printf("SSTF DISK SCHEDULING\n");
   printf("-------------------------------\n");
   printf("\nEnter the size of Queue: ");
   scanf("%d",&n);
   printf("\nEnter the Head Positions:\n");
   for(i=1;i<=n;i++)
      scanf("%d",&q[i].qhead);
   printf("\nEnter the head start: ");
   scanf("%d",&start);
   for(i=1;i<=n;i++)
   {
       t=abs(start-q[i].qhead);
       q[i].qdiff=t;
   }
   for(i=1;i<=n-1;i++)
     for(j=i+1;j<=n;j++)
     {
	 if (q[i].qdiff > q[j].qdiff)
	 {
	     temp=q[i];
	     q[i]=q[j];
	     q[j]=temp;
	 }
     }
   printf("\n\nHead moves....to : %d",q[1].qhead);
   tot_mov=q[1].qdiff;
   for(i=2;i<=n;i++)
   {
       printf("\n\nHead moves....to : %d",q[i].qhead);
       tot_mov=tot_mov+abs(q[i].qhead-q[i-1].qhead);
   }
       printf("\n\nTotal head movements is : %d",tot_mov);
   }

