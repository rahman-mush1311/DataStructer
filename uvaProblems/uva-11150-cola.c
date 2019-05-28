 #include<stdio.h>


int main()
{
    int p,uvapain,N;
    while(scanf("%d",&N)==1)
    {
        uvapain = 0;
        p = 1;
        while(p<=N)
        {
            if(p%2!=0)
                uvapain += 2;
            if(p%2==0)
                uvapain += 1;
            p++;
        }

        printf("%d\n",uvapain);

    }
    return 0;
}
