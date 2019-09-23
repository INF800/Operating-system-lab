#include<stdio.h>
#include<stdlib.h>
void scan(int x[]);
void sort(int x[]);
void display(int x[]);
int n,curr,prev,dir,totcyl;
int main()
{
int i,j;
curr=143;
prev=125;
totcyl=4999;
int req[20]={86,1470,913,1774,948,1509,1022,1750,130};
int sreq[20]={86,1470,913,1774,948,1509,1022,1750,130};
n=9;
printf("\nDISK SCHEDULING SIMULATION");
printf("\n\n Given Ref.String..\n");
display(req);
printf("\n\nSorted Ref.String...\n");
sort(sreq);
display(sreq);
printf("\nSCAN Algorithm\n");
scan(sreq);
}

void sort(int x[])
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(x[i]<x[j])
{
t=x[i];
x[i]=x[j];
x[j]=t;
}
}
}
x[i]=-1;
}
void display(int x[])
{
int i;
for(i=0;i<n;i++)
printf("%d\t",x[i]);
}
void scan(int x[])
{
int i,j,p,toh=0,c,pp;
c=curr;
if((curr-prev)<0)
dir=-1;
else if((curr-prev)>=0)
dir=1;
for(i=1;i<n;i++)
{
if( x[i-1]<c&&x[i]>c)
{
if(dir==1)
{
p=i;
pp=i-1;
}
else if(dir==-1)
{
p=i-1;
pp=i+1;
}
break;
}
}
printf("\nRequest\t\tHead Movements\t\tTOH");
for(i=0;i<n;i++)
{
toh=toh+abs((x[p]-c));
printf("\n%d\t\t%d\t\t%d",x[p],abs((x[p]-c)),toh);
c=x[p];
if(dir==1)
{
if(x[p+1]==-1)
{
printf("\nEC%d\t\t%d",totcyl,(totcyl-x[p]));
toh=toh+(totcyl-x[p]);
p=pp;
c=totcyl;
dir=-1;
printf("\t\tTOH::%d",toh);
}
else
p++;
}
else if(dir==-1)
{
if(p==-1)
{
printf("\nSC%d\t\t%d",p,x[p]);
toh=toh+x[p];
p=pp;
c=0;
dir=1;
}
else
p--;
}
}
printf("\nTotal Head Movements:%d\n",toh);
}

