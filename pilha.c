/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int pilha[10]; // pilha que recebe os valores em ordem
    int OBJ = 0; //
    int Value = 0; // valor a ser aplicado

    char R ;  // armazena a opção do usuario
    int Count = 0; // armazena em que posição estamos na pilha

    int exe = 1; // mantem ou não o progama funcionando

    int i =0;
    
    printf("\n•L para listagem \n•U para push\n•O para pop\n•X para encerrar (o modo de captura)\n");


    while(exe==1)
    {
    scanf("%c",&R);

        if(R == 'u' || R == 'U')
        {
            scanf("%d", &Value);
            pilha[Count] = Value; 
            Count ++;
        }
                if(R == 'o' || R == 'O')
        {
            
            Count --;
            pilha[Count] = {}; 
        }

        if(R == 'l' || R == 'L')
        {
            printf(" foi digitado %d\n",Count);
            for(i=0;i!=Count;i++)
            {
                printf("\nno lugar %d temos o valor %d\n",i+1,pilha[i]);
            }
        }
        if(R == 'x' || R == 'X')
        {
            exe=0;
        }
    }
    return 0;
}
