#include<stdio.h>
int main()
{
    char s[20]="anbanabhishek";
    int i=0,c=0;
    while(i<20)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
        }

        {
            i++;
        }
        printf("%d",c);
    }

}
