/*5) Considere a situação em que um cliente faz uma determinada compra em uma loja. Ao
realizar o pagamento, são oferecidas as seguintes condições para pagamento (faça um
menu de opções:
Pagamento à vista - 15% de desconto sobre o valor total da compra.
Pagamento com cheque pré-datado para 30 dias - 10% de desconto sobre o valor
total da compra.
Pagamento parcelado em 3 vezes - 5% de desconto sobre o valor total da compra.
Pagamento parcelado em 6 vezes - não tem desconto.
Pagamento parcelado em 12 vezes - 8% de acréscimo sobre o valor total da
compra.
De acordo com o valor total da compra, verifique a opção de pagamento do cliente,
calcule o valor final da compra e se a escolha for por pagamento parcelado, calcule
também o valor das parcelas.
Apresente ao usuário uma mensagem com o valor total da compra, o valor final da
compra, a diferença entre os dois, identifique como desconto se a diferença for positiva,
como juros se for negativa, e mostre também a quantidade e o valor das parcelas. */


#include <stdio.h>

int main(){
	
    float total,final,diferenca,parcela;
    int opcao,num;

    printf("Informe o valor total da compra: R$ ");
    scanf("%f",&total);

    printf("\nOpcoes de pagamento:\n");
    printf("1 - Pagamento a vista (15%% de desconto)\n");
    printf("2 - Cheque pre-datado para 30 dias (10%% de desconto)\n");
    printf("3 - Parcelado em 3 vezes (5%% de desconto)\n");
    printf("4 - Parcelado em 6 vezes (sem desconto)\n");
    printf("5 - Parcelado em 12 vezes (8%% de acrescimo)\n");
    printf("\nEscolha a opcao de pagamento (1-5): ");
    scanf("%d",&opcao);

    switch (opcao) {
        case 1:
            final = total * 0.85;
            diferenca = total - final;
            num = 1;
            break;
        case 2:
            final = total * 0.90;
            diferenca = total - final;
            num = 1;
            break;
        case 3:
            final = total * 0.95;
            diferenca = total - final;
            num = 3;
            break;
        case 4:
            final = total;
            diferenca = total - final;
            num = 6;
            break;
        case 5:
            final = total * 1.08;
            diferenca = total - final;
            num = 12;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("\nResumo do pagamento:\n");
    printf("Valor total da compra: R$ %.2f\n", total);
    printf("Valor final da compra: R$ %.2f\n", final);

    if (diferenca > 0) {
        printf("Desconto: R$ %.2f\n", diferenca);
    } else if (diferenca < 0) {
        printf("Juros: R$ %.2f\n", -diferenca);
    } else {
        printf("Sem desconto ou juros.\n");
    }

    if (num > 1) {
        parcela = final / num;
        printf("Numero de parcelas: %d\n", num);
        printf("Valor da parcela: R$ %.2f\n", parcela);
    } else {
        printf("Pagamento a vista.\n");
    }

    return 0;
}
	
