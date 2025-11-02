#include <stdio.h>

void test()
{

static int a = 100;
   a++;

printf("%d\t",a );

}


int main()
{
    int i = 0;
   while (i < 99)
{

    test ();
    i++;


}


return 0;

}



