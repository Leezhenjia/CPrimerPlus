#include <stdio.h>
int main(void)
{
        int n1=0,n2=0,n3=0;
        char c;
        printf("Please enter some words\n");
        while('#'!=(c=getchar()))
        {
                if(c==' ')n1++;
                else if(c=='\n')n2++;
                else n3++;
        }
        printf("空格：%d\n",n1);
        printf("换行符：%d\n",n2);
        printf("其他字符：%d\n",n3);
        return 0;
}

