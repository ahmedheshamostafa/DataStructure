#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <string.h>

int main()
{
char in[50]="",post[50]="";
printf("Enter infix String:\n ");
gets(in);
infix_to_post(in,post);
printf("The postfix for %s is =%s",in,post);
printf("\nthe eval of %s is =%f \n ",post,infixEval(post));

    return 0;
}
