#include<stdio.h>
using namespace std;

main()
{
int i,n,w[10],e[10],b[10];
float wa=0,ea=0;
printf("\nEnter the no of jobs: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the burst time of job %d :",i+1);
scanf("%d",&b[i]);
if(i==0)
{
w[0]=0;
e[0]=b[0];
}
else
{
e[i]=e[i-1]+b[i];
w[i]=e[i-1];
}
}
printf("\n\n\tJobs\tWaiting time   \tBursttime\tExecution time\n");
printf("\t-------------------------------------------------------\n");
for(i=0;i<n;i++)
{
printf("\t%d\t\t%d\t\t%d\t\t%d\n",i+1,w[i],b[i],e[i]);
wa+=w[i];
ea+=e[i];
}
wa=wa/n;
ea=ea/n;
printf("\n\nAverage waiting time is :%2.2f ms\n",wa);
printf("\nAverage execution time is:%2.2f ms\n\n",ea);
}


