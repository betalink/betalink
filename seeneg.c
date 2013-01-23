/*************************************
 *1.Running
  2.Masukkan nilai
  3.Silahkan pembuktian dengan Kertas
    dan penmu
  *bug still alive -_-
  ------------------
  betalinker
  ------------------
 **************************************/
#include <stdio.h>

main(void)
{
    int c;
    
    for(;;){
        printf("\n=======================================\n");
        printf("[+] let's practice                       \n");
        printf("[+] scratching your paper with 16-bit    \n");
        printf("[+] look...                              \n");
        printf("[+] 16-bit                               \n");
        printf("=========================================\n");
        printf("Input value, uptoyou\t = ");
        scanf("%d",&c);
        c = (~c);
        printf("Result of negation c = %d",c);
        printf("\n=======================================\n");
    }
