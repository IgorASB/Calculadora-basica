#include <stdio.h>
#define pf printf
#define sf scanf

int main()
{
    int opcao;
    float N1, N2, NF;
    char repetir;

    while (1) {
        N1 = 0.0; N2 = 0.0; NF = 0.0;
        pf("\n\tMenu\n");
        pf("1 - Adicao\n");
        pf("2 - Subtracao\n");
        pf("3 - Multiplicacao\n");
        pf("4 - Divisao\n");
        pf("Opcao: ");
        sf("%d", &opcao);

        if (opcao < 1 || opcao > 4) { 
            pf("\nOpcao invalida\n");
            continue;
        }

        pf("Digite o primeiro numero: ");
        sf("%f", &N1);
        pf("Digite o segundo numero: "); 
        sf("%f", &N2);

        switch (opcao) {
            case 1:
                NF = N1 + N2;
                pf("\tRESULTADO: %.2f\n", NF);
                break;
            case 2:
                NF = N1 - N2;
                pf("\tRESULTADO: %.2f\n", NF);
                break;
            case 3:
                NF = N1 * N2;
                pf("\tRESULTADO: %.2f\n", NF);
                break;
            case 4:
                if (N2 == 0.0) {
                    pf("\tERRO: Divisao por zero!\n");
                    break; 
                }
                NF = N1 / N2;
                pf("\tRESULTADO: %.2f\n", NF);
                break;
        }

        pf("\nOutra operacao? (s/n): ");
        sf(" %c", &repetir);
        if (repetir != 's' && repetir != 'S')
            break;
    }

    pf("\nPrograma encerrado!\n");
    return 0;
}
