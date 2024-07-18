#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int quantidade, codigo, id;
    float preco, comissao;
    comissao = 0.05;
    printf("Bem vindo ao sistema de comissao \n");
    printf("Insira o seu codigo de identificação de funcionario \n");
    scanf("%d", &id);
    printf("Insira a quantidade de vendas que voce fez \n");
    scanf("%d", &quantidade);
    printf("Insira o codigo do produto que voce vendeu \n");
    scanf("%d", &codigo);
    printf("Insira o valor do produto que voce vendeu \n");
    scanf("%f", &preco);
    printf("O valor total das suas vendas foi %g \n A comissao das vendas é de 5 por cento. \n O valor total que voce recebera é %g", (quantidade*preco), (quantidade*preco*comissao));


    return 0;



}