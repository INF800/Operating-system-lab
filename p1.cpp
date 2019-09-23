#include<sys/types.h>
#include<errno.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
pid_t child;
cout<<"pid:"<<getpid()<<"patent:"<<getppid()<<endl;
switch(child=fork())
  	{
case (pid_t) -1: perror ("fork");
break;
case (pid_t) 0: cout<<"child created:pid:"<<getpid()<<"patent:"<<getppid()<<endl;
exit(0);
default:cout<<"parent after fork pid:"<<"child pid:"<<child<<endl;
}
return 0;
}

