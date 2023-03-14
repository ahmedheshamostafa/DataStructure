#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*char* Num2Str(int n){
if(n==0)return n-'0';
else{

}
}*/

int isDigit(char c){
    if( c>='0'&&c<='9'){
        //printf("%c is digit ",c);
        return 1 ;
    }else{
    return 0;
    }


    }
int isNum(char n[10]){

 int i=0;
 while(n[i]){
    if(isDigit(n[i])){
             i++;
    }


    else return 0;
 }
 return 1;
}
int main()
{

char b[10];
 scanf("%s",&b);

 printf("%s is %d",b,isNum(b));

     return 0;
}
