#include <stdio.h>
int A=10;
int B=20;
char buy;
int sum,number;//��ͷ�ļ��ж���ȫ�ֱ���

int main(){
    printf("�����Ǳ������Ʒ���۸�\n A ��Ʒÿ��ʮԪ��\n B ��Ʒÿ����ʮԪ��\n\n");
    printf("������������Ĳ�Ʒ(A �� B):");
    scanf("%c",&buy);
    printf("�����������������");
    scanf("%d",&number);
    sum=buy=='A'?A*number:B*number;
    printf("\n������Ҫ��%d��%c��Ʒ�ܹ�%dԪ��\n",number,buy,sum);
    return 0;
}