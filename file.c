#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
int f,r,w;
char b;
f=open("/home/sam/Desktop/q.txt",O_RDWR);
if(f==-1)
{
printf("error");
}
else
{
printf("Open-Success");
}
printf("\n");
r=read(f,&b,100);
if(r==-1)
{
printf("error");
}
else
{
printf("Read-Success");
}
printf("\n");
w=write(f,"heyyy sam",100);
if(w==-1)
{
printf("error");
}
else
{
printf("write-Success");
}
return 0;
close(f);
}