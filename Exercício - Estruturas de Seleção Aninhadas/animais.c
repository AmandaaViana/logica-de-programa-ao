#include <stdio.h>
#include <ctype.h>

int main() {
	
    char resp;

    printf("Pense em um animal, e responda (S) para sim e (N) para nao.\n\n");

    /*mamifero*/
    printf("É mamifero? ");
    scanf(" %c",&resp);
    resp=toupper(resp);

    if (resp == 'S') {
        printf("É quadrupede?");
        scanf(" %c",&resp);
        resp=toupper(resp);

        if (resp == 'S') {
            printf("É carnivoro?");
            scanf(" %c",&resp);
            resp=toupper(resp);

            if (resp == 'S') {
                printf("O animal escolhido foi o leão\n");
            } else if (resp == 'N') {
                printf("É herbivoro?");
                scanf(" %c",&resp);
                resp=toupper(resp);

                if (resp == 'S') {
                    printf("O animal escolhido foi o cavalo\n");
                } else {
                    printf("O animal escolhido nao esta cadastrado\n");
                }
            }
        } else if (resp == 'N') {
            printf("É bipede?");
            scanf(" %c",&resp);
            resp=toupper(resp);

            if (resp == 'S') {
                printf("É onivoro?");
                scanf(" %c",&resp);
                resp=toupper(resp);

                if (resp == 'S') {
                    printf("O animal escolhido foi o homem\n");
                } else {
                    printf("É frutifero?");
                    scanf(" %c",&resp);
                    resp=toupper(resp);

                    if (resp == 'S') {
                        printf("O animal escolhido foi o macaco\n");
                    } else {
                        printf("O animal escolhido nao esta cadastrado\n");
                    }
                }
            } else {
                printf("É voador?");
                scanf(" %c",&resp);
                resp=toupper(resp);

                if (resp == 'S') {
                    printf("O animal escolhido foi o morcego\n");
                } else {
                    printf("É aquatico?");
                    scanf(" %c",&resp);
                    resp=toupper(resp);

                    if (resp == 'S') {
                        printf("O animal escolhido foi a baleia\n");
                    } else {
                        printf("O animal escolhido nao esta cadastrado\n");
                    }
                }
            }
        } /*aqui termina mamifero*/
    } else if (resp == 'N') {
        /*ave*/
        printf("É ave?");
        scanf(" %c",&resp);
        resp=toupper(resp);

        if (resp == 'S') {
            printf("É nao-voadora?");
            scanf(" %c",&resp);
            resp=toupper(resp);

            if (resp == 'S') {
                printf("É tropical?");
                scanf(" %c",&resp);
                resp=toupper(resp);

                if (resp == 'S') {
                    printf("O animal escolhido foi o avestruz\n");
                } else {
                    printf("É polar?");
                    scanf(" %c",&resp);
                    resp=toupper(resp);

                    if (resp == 'S') {
                        printf("O animal escolhido foi o pinguim\n");
                    } else {
                        printf("O animal escolhido nao esta cadastrado\n");
                    }
                }
            } else {
                printf("É nadadora?");
                scanf(" %c",&resp);
                resp=toupper(resp);

                if (resp == 'S') {
                    printf("O animal escolhido foi o pato\n");
                } else {
                    printf("É de rapina?");
                    scanf(" %c",&resp);
                    resp=toupper(resp);

                    if (resp == 'S') {
                        printf("O animal escolhido foi a aguia\n");
                    } else {
                        printf("O animal escolhido nao esta cadastrado\n");
                    }
                }
            }/*aqui termina ave*/
        } else {
            /*réptil*/
            printf("É reptil?");
            scanf(" %c",&resp);
            resp=toupper(resp);

            if (resp == 'S') {
                printf("Tem casco?");
                scanf(" %c",&resp);
                resp=toupper(resp);

                if (resp == 'S') {
                    printf("O animal escolhido foi a tartaruga\n");
                } else {
                    printf("É carnivoro?");
                    scanf(" %c",&resp);
                    resp=toupper(resp);

                    if (resp == 'S') {
                        printf("O animal escolhido foi o crocodilo\n");
                    } else {
                        printf("É sem patas?");
                        scanf(" %c",&resp);
                        resp=toupper(resp);

                        if (resp == 'S') {
                            printf("O animal escolhido foi a cobra\n");
                        } else {
                            printf("O animal escolhido nao esta cadastrado\n");
                        }
                    }
                }
            } else {
                printf("O animal escolhido nao esta cadastrado\n");
            }
        }
    }

    return 0;
}
