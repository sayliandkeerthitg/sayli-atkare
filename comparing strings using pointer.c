#include<stdio.h>
int main()
{
char a[]="string",b[]="string",*ptr,size;
ptr=&a;
ptr=&b;
size=strlen(a);
size=strlen(b);
//printf("%s\n%s",a,b);
//cmp=strcmp(a,b);
if (strlen(a)==strlen(b))
{
     printf("a is equal to b");
}
else
    {
     printf("a is not equal to b");
}}
//for(int i=0;i<=6;i++)
    //if (a==b)
    //{
       // printf("a is equal to b");
   // }
   // else
    //{
      //  printf("a is not equal to b");
   // }
//}
//cmp=strcmp(a,b);
//printf("%d",cmp);


