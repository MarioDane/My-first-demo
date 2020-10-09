#include <stdio.h>

#define  message_for(a, b)  \  
printf(#a " and " #b ": We love you!\n")
 /*宏延续运算符（\）一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）。
 字符串常量化运算符（#）在宏定义中，当需要把一个宏的参数转换为字符串常量时，则使用字符串常量化运算符（#）。在宏中使用的该运算符有一个特定的参数或参数列表。*/
int main(void)
{
   message_for(Carole, Debra);
   return 0;
}