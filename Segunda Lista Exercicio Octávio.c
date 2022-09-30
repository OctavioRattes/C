#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int exec01();
int exec02();
int exec03();
int exec04();
int exec05();
int exec06();
int exec07();
int exec08();
int exec09();
int exec10();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int q;
    printf("Insira o n�mero da quest�o: \n");
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
            printf("Quest�o n�o existe.");
    }
    return 0;
}

    /* 1. Fazer um algoritmo que leia um n�mero inteiro e mostre uma mensagem indecando se este n�mero � par ou �mpar.*/
int exec01()
{
     int numeroInteiro;
        printf("Digite um numero:\n");
        scanf("%i", &numeroInteiro);
        if(!(numeroInteiro%2))
    {
        printf("Seu n�mero � par.");
    }
        else
    {
        printf("Seu n�mero � impar");
    }
        return 0;
}

    /* 2. Fazer um algoritmo pedir o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da m�dia do aluno,
     uma mensagem de "Aprovado", caso a m�dia seja igual ou superior a 6, ou a mensagem "Reprovado", caso contr�rio*/
int exec02()
{
    char nome[50];
    int primeiraNota, segundaNota, terceiraNota;
    float mediadasNotas;

    printf("Digite seu nome:\n");
    fflush(stdin);
    gets(nome); //gets armazena o nome e sobrenome at� o limite estabelecido na inicial
    printf("Digite sua primeira nota:\n");
    scanf("%i", &primeiraNota);
    printf("Digite sua segunda nota:\n");
    scanf("%i", &segundaNota);
    printf("Digite sua terceira nota:\n");
    scanf("%i", &terceiraNota);
    mediadasNotas=(primeiraNota+segundaNota+terceiraNota)/3.0;
    printf("A nota media do usuario %s e %2.2f. \n", nome, mediadasNotas);
    if (mediadasNotas>=6.0) {

        printf("Aprovado!\n");
    }
    if (mediadasNotas<6.0) {
        printf("Reprovado \n");
    }
    return 0;
}

/* 3. Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado s�lido, l�quido ou gasoso.*/
int exec03()
{
   int temperaturaAgua;
    printf("Digite a temperatura da �gua:\n");
    scanf("%i", &temperaturaAgua);
    if(temperaturaAgua>=100)
    {
        printf("Ela est� no estado gasoso.");
    }
    else if(temperaturaAgua>0 && temperaturaAgua<100)
    {
        printf ("Ela est� no estado l�quido.");
    }
    else if(temperaturaAgua<0)
    {
        printf("Ela est� no estado s�lido.");
    }
    return 0;
}

/* 4. Leia um valor x e se ele for menor que 0 avalie y=x^2+4. Se ele for maior que 0 avalie x^3-3 e se ele for igual
 a 0 de uma mensagem de erro.*/
int exec04()
{
   float numero=0, ipslon=0;

    printf("Atribua um n�mero para X:\n");
    scanf("%f", &numero);
    if(numero<0)
    {
        ipslon=(pow(numero,2)+4);
        printf("O valor da express�o X^2+4 para o valor atribuido de x �: %2.2f", ipslon);
    }
    if(numero>0)
    {
        ipslon=(pow(numero,3)-3);
        printf ("O valor da express�o X^3-3 para o valor atribuido de x �: %2.2f", ipslon);
    }
    if(numero==0)
    {
        printf("Erro no c�digo. Retorne.");
    }
    return 0;
}
/* 5. Construa um algoritmo que receba como entrada tr�s valores (A, B, C). Ap�s o processamento
 o menor valor dever� estar entre A e o maior valor em C, e o valor intermedi�rio em B. Imprima A, B e C.*/
int exec05()
{
    float a,b,c, aux;
    printf("Digite um primeiro valor. \n");
    scanf("%f", &a);
     printf("Digite um segundo valor. \n");
    scanf("%f", &b);
     printf("Digite um terceiro valor. \n");
    scanf("%f", &c);
    if (a>b)
    {
       if (b > c)
        {
            aux = a;
            a = c;
            c = aux;
            printf("Os valores em ordem s�o: A=%2.2f, B=%2.2f, C=%2.2f", a, b, c);
        }
        else if (c > b)
        {
            aux = a;
            a = b;
            b = c;
            c = aux;
            printf("Os valores em ordem s�o: A=%2.2f, B=%2.2f, C=%2.2f", a, b, c);
        }
    }
    else if (b > a)
    {
        if (a > c)
        {
            aux = a;
            a = c;
            c = b;
            b = aux;
            printf("Os valores em ordem s�o: A=%2.2f, B=%2.2f, C=%2.2f", a, b, c);
        }
        else if (c > a)
        {
            if (b > c)
            {
                aux = b;
                b = c;
                c = aux;
                printf("Os valores em ordem s�o: A=%.2f, B=%.2f, C=%.2f", a, b, c);
            }
            else
            {
                printf("Os valores em ordem s�o: A=%.2f, B=%.2f, C=%.2f", a, b, c);
            }
        }
    }
    else if (c > a)
    {
        if (a > b)
        {
            aux = a;
            a = b;
            b = aux;
        }
        else
        {

        }
    }


}
/* 6. Desenvolver um algoritmo que leia tr�s n�meros inteiros: x, y,z e verifique se o n�mero x � divis�vel por y e por z.
O algoritmo dever� mostrar as poss�veis mensagens:
        - o n�mero � divis�vel por y e z.
        - o n�mero � divis�vel por y mas n�o por z.
        - o n�menro � divis�vel por z mas n�o por y.
        - o n�mero n�o � divis�vel nem por y nem por z.*/
int exec06()
{
    int x,y,z, aux;
    printf("Atribua um n�mero para x: \n");
    scanf("%i", &x);
    printf("Atribua um n�mero para y: \n");
    scanf("%i", &y);
    printf("Atribua um n�mero para z: \n");
    scanf("%i", &z);
    fflush(stdin);
    if (x%y==0)
    printf("%i,%i,%i",x, y, z);
    return 0;
}
/* 7.O n�mero 3025 possui a seguinte caracter�stica:
30+25=55
55^2=3025
Fazer um algoritmo que dado um n�mero de 4 digitos (verifique se o n�menro pertence a faixa)
 calcule e escreva se ele possui ou n�o est� carcter�stica.*/
int exec07()
{

}
/* 8. Ler um c�digo do teclado e mostrar o nome correspondente, de acordo com a lista:
            221 Bernardo
            211 Eust�quio
            311 Luiz
            312 Mario
            332 Arthur*/
int exec08()
{
    int codigo;
    printf("Digite o c�digo da pessoa:");
    scanf("%i", &codigo);
    switch (codigo)
    {
   case 221:
       printf("221 Bernardo.");
       break;
    case 211:
        printf("211 Eust�quio.");
        break;
    case 311:
        printf("311 Luiz.");
        break;
    case 332:
        printf("332 Arthur.");
        break;
    default:
    printf("C�digo Inv�lido.");
    }

}
/* 9. N�meros pal�ndromos s�o aqueles que escritos da direita para a esquerda ou da esquerda para a direita tem o mesmo valor.
Fazer um algoritmo que dado um n�mero de 5 digitos; calcule e escreva se este e ou n�o pal�ndromo.*/
int exec09()
{

}
/* 10. Desenvolver um algortimo para calcular a conta de �gua para a SANEAGO. O custo da �gua varia dependendo de tipo de
 consumidor - residencial, comercial ou industrial. A regra para calcular a conta �:
            -residencial: R$ 75,00 de taxa mais R$ 3,50 por m. cubicos gastos;
            -comercial: R$ 500,00 para os primeiros 80 m cubicos gastos mais R$ 5,50 por m cubicos gastos acima dos 80 m cubicos;
            -industrial: R$ 800,00 para os primeiros 100 m cubicos mais R$ 8,00 gastos acima dos 100 m cubicos:
        O algoritmo deve ler a conta do cliente, seu tipo (residencial, comercial ou industrial) e o seu consumo d e�gua em metros cubicos.
        Como resultado imprimir o valor a ser pago pelo mesmo.*/
int exec10()
{

}
