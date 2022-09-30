#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int exec01();
int exec02();
int exec03();
int exec04();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int q;
    printf("Insira o número da questão: \n");
    scanf("%i", &q);
    switch (q)
    {
    case 1:
        exec01();
        break;
    case 2:
        exec02();
        break;
    case 3:
        exec03();
        break;
    case 4:
        exec04();
        break;
    case 5:
        exec05();
        break;
    case 6:
        exec06();
        break;
    case 7:
        exec07();
        break;
    case 8:
        exec08();
        break;
    case 9:
        exec09();
        break;
    case 10:
        exec10();
        break;
    default:
        printf("Questão não existe.");
    }
    return 0;
}

/* 1. - Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
(QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como
sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3 */
int exec01()
{
    int num, qpares=0, qimpares=0;
    float res;
    do{
        printf("Digite um número: \n");
        scanf("%d", &num);
        if (num!=9999){
            res=num%2;

            if(res==0){
                qpares++;
                }else{
                qimpares++;
                }
            }
    }while ((num!=9999));
        printf("Números pares: %d\n", qpares);
        printf("Números ímpares: %d \n", qimpares);
    return 0;
}
/* 2. Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o
menor e a média aritmética desse conjunto de dados. (Flag -1).
Execute este programa para os seguintes valores
1.1,2,3,-1
2.3,2,1,-1
3.1,3,2,-1  */

int exec02()
{


}
/* 3. Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um número lido do teclado.
Ex. Fatorial de 5! = 5x4x3x2x1=120
 */
int exec03()
{
int n, i, fatorial=1;
    printf("Digite um número:\n");
    scanf("%d", &i);
    for (n=1; n<=i; n=n+1)
    {
        fatorial = fatorial*n;
        }
        printf("O fatorial de %d = %d \n", i, fatorial);

    return 0;
}
/* 4 – Calcule o valor da seguinte série lido a quantidade de termos. */
int exec04()
{

}
/* 5 - A série de fibonacci é formada pela seqüência:
1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este n-ésimo
termo. */
int exec05()
{
    int i, Fib[100], n;
    printf("Atribua um número para N:\n");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            Fib[i] = 0;
        }
        else if(i == 1 || i == 2)
        {
            Fib[i] = 1;
        }
        else
        {
            Fib[i] = Fib[i-1] + Fib[i-2];
        }
        printf("Fib[%d] = %d \n", i, Fib[i]);
    }

    return 0;
}
/*6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá se lido do teclado. */
int exec06()
{

}
/* 7 - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita
tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números
palíndromos de 10000 a 99999. */
int exec07()
{
    int num, a,b, c, d, e, aux;
    for (num=10000;num<=99999;num++) {
        e=num%10;
        aux=num/10;
        d=num%10;
        aux=num/10;
        c=num%10;
        aux=num/10;
        b=num%10;
        aux=num/10;
        a=num%10;
        if (a==e && b==d) {
            printf("%i\n", num);
        }
    }
    return 0;
}
/* 8 - O numero 3025 possui a seguinte característica:
30 + 25 = 55
55^2 = 3025
Quantos e quais são os números de 4 dígitos possuem essa característica? */
int exec08()
{
int num, p1,p2, qte=0, soma;
for (num=1000; num<9999; num++){
    p1=num%100;
    p2=num/100;
    soma=p1+p2;

}
}
/* 9. Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0 –
cara e 1 – para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.
(utilize o comando - para que o computador escolha o resultado).*/
int exec09()
{

}
/* 10. Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao
final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo
usuário em no máximo 10 tentativas!
Utilize a seguinte proposta. Pegue o valor intermediário e pergunte ao usuário se o número é
igual(=), maior(>) ou menor(<) que o que foi escolhido. Se for (=) implica que acertou! Se for maior
escolha agora o número intermediário entre o que foi perguntado e o último, caso contrário escolha o
intermediário entre o primeiro e o que foi perguntado, seguindo assim até acertar! */
int exec10()
{

}
