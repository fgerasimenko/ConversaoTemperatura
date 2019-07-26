#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()	
{
    float	fare, cel;
    char	op, cont, conv;

    inicio:
    printf("Digite o código da medida: \n");				// MENU
    printf("\n");											// DE
    printf("C - Celsius\n");								//OPÇÕES
    printf("F - Farenheit\n");								
    printf("X - Parar\n");
    printf("\n");
    op = getchar(); // Recebe a opção
    printf("\n");
    op=toupper(op); // Deixa maiúscula
    switch (op)
    {
        case 'C':
            printf("Digite quantos graus celsius você quer converter: ");
            scanf("%f", &cel);
            printf("\n");
            printf("%.1f graus Celsius é igual a %.2f Farenheit \n", cel, fare = cel * 1.8 + 32);		
            printf("\n");
            break;
        case 'F':
            printf("Digite quantos Farenheit você quer converter: ");
            scanf("%f", &fare);
            printf("\n");
            printf("%.1f graus Farenheit é igual a %.2f Celsius \n", fare, cel = (fare - 32) / 1.8);
            printf("\n");
            break;
        case 'X':
            goto fim;
        default:
            printf("Código inválido. Tente outra vez");
            printf("\n");
            goto inicio;
    }
	cont = 'S';
	while (cont == 'S')
	{	
        printf("Deseja continuar? <S ou N> \n");
        conv = getchar();
        conv=toupper(conv);				

        fim:
        switch (conv)
        {
            case 'S':
                goto inicio;
                break;
            case 'N':
                op = 'X';
                cont = 'N';
                printf("Obrigado por usar o software!");
                printf("\n");
                break;
            default:
                printf ("Digite S ou N!\n");
        }
	}
		
}