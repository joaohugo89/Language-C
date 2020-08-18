/* Programa 3 */
/* Função: Aprovado, Reprovado, Recuperação */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

int main (int argc, char *argv[]){
    float nota1a, nota2a, media1, nota1b, nota2b, media2, nota1c, nota2c, media3, nota1d, nota2d, media4, nota1e, nota2e, media5, nota1f, nota2f, media6, mediatotal;
    int numapro, numrep, numexa;

    numapro = 0;
    numexa = 0;
    numrep = 0;

    printf ("Digite a primeira nota do primeiro aluno: ");
    scanf ("%f", &nota1a);
    printf ("Digite a segunda nota do primeiro aluno: ");
    scanf ("%f", &nota2a);

    printf ("Digite a primeira nota do segundo aluno: ");
    scanf ("%f", &nota1b);
    printf ("Digite a segunda nota do segundo aluno: ");
    scanf ("%f", &nota2b);

    printf ("Digite a primeira nota do terceiro aluno: ");
    scanf ("%f", &nota1c);
    printf ("Digite a segunda nota do terceiro aluno: ");
    scanf ("%f", &nota2c);

    printf ("Digite a primeira nota do quarto aluno: ");
    scanf ("%f", &nota1d);
    printf ("Digite a segunda nota do quarto aluno: ");
    scanf ("%f", &nota2d);

    printf ("Digite a primeira nota do quinto aluno: ");
    scanf ("%f", &nota1e);
    printf ("Digite a segunda nota do quinto aluno: ");
    scanf ("%f", &nota2e);

    printf ("Digite a primeira nota do sexto aluno: ");
    scanf ("%f", &nota1f);
    printf ("Digite a segunda nota do sexto aluno: ");
    scanf ("%f", &nota2f);

    media1 = (nota1a + nota2a)/2;
    media2 = (nota1b + nota2b)/2;
    media3 = (nota1c + nota2c)/2;
    media4 = (nota1d + nota2d)/2;
    media5 = (nota1e + nota2e)/2;
    media6 = (nota1f + nota2f)/2;
    mediatotal = (media1 + media2 + media3 + media5 + media6)/6;

    if (media1 <= 3){
        printf ("Aluno 1 Reprovado\n");
        numrep ++;
    }
    else{
        if (media1 > 3 && media1 < 7){
            printf ("Aluno 1 em Exame\n");
            numexa ++;
        }
        else {
            printf ("Aluno 1 Aprovado\n");
            numapro ++;
        }
    }

    if (media2 <= 3){
        printf ("Aluno 2 Reprovado\n");
        numrep ++;
    }
    else{
        if (media2 > 3 && media2 < 7){
            printf ("Aluno 2 em Exame\n");
            numexa ++;
        }
        else {
            printf ("Aluno 2 Aprovado\n");
            numapro ++;
        }
    }

    if (media3 <= 3){
        printf ("Aluno 3 Reprovado\n");
        numrep ++;
    }
    else{
        if (media1 > 3 && media1 < 7){
            printf ("Aluno 3 em Exame\n");
            numexa ++;
        }
        else {
            printf ("Aluno 3 Aprovado\n");
            numapro ++;
        }
    }

    if (media4 <= 3){
        printf ("Aluno 4 Reprovado\n");
        numrep ++;
    }
    else{
        if (media4 > 3 && media4 < 7){
            printf ("Aluno 4 em Exame\n");
            numexa ++;
        }
        else {
            printf ("Aluno 4 Aprovado\n");
            numapro ++;
        }
    }

    if (media5 <= 3){
        printf ("Aluno 1 Reprovado\n");
        numrep ++;
    }
    else{
        if (media5 > 3 && media5 < 7){
            printf ("Aluno 5 em Exame\n");
            numexa ++;
        }
        else {
            printf ("Aluno 5 Aprovado\n");
            numapro ++;
        }
    }

    if (media6 <= 3){
        printf ("Aluno 6 Reprovado\n");
        numrep ++;
    }
    else{
        if (media6 > 3 && media6 < 7){
            printf ("Aluno 6 em Exame\n");
            numexa ++;
        }
        else {
            printf ("Aluno 6 Aprovado\n");
            numapro ++;
        }
    }

    printf ("Media Total da Turma: %f\n", mediatotal);
    printf ("Numero de alunos aprovados: %d\n", numapro);
    printf ("Numero de alunos em examo: %d\n", numexa);
    printf ("Numero de alunos reprovados: %d\n", numrep);

    return 0;
}
