#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char VERB[20],AFFI[20];
    int L;
    char answers;
    do
    {
        system("cls");
        fflush(stdin);
        printf("Programme de conjugaison des verbes du premier groupe: \n");
        printf("***Entrez le verbe*** \n");
        printf("Verbe : ");
        gets(VERB);
        L=strlen(VERB);
        if(strcmp(VERB,"Aller")==0)
        {
            puts("Le verbe Aller n'est pas du premier groupe\n");
        }
        else if ((VERB[L-2]!='e')|| (VERB[L-1]!='r'))
        {
            printf("Le verbe %s ",VERB);
            puts(" n'est pas du premier groupe\n");
        }
        else
        {
            VERB[L-2]='\0';
            AFFI[0]='\0';
            strcat(AFFI, "je ");
            strcat(AFFI, VERB);
            strcat(AFFI, "e");
            puts(AFFI);
            AFFI[0]='\0';
            strcat(AFFI, "Tu ");
            strcat(AFFI, VERB);
            strcat(AFFI, "e");
            puts(AFFI);
            AFFI[0]='\0';
            strcat(AFFI, "Il ");
            strcat(AFFI, VERB);
            strcat(AFFI, "e");
            puts(AFFI);
            if(VERB[L-3]=='g')
            {
                AFFI[0]='\0';
                strcat(AFFI, "Nous ");
                strcat(AFFI, VERB);
                strcat(AFFI, "ions");
                puts(AFFI);
                AFFI[0]='\0';
                strcat(AFFI, "Vous ");
                strcat(AFFI, VERB);
                strcat(AFFI, "iez");
                puts(AFFI);
            }
            else
            {
                AFFI[0]='\0';
                strcat(AFFI, "Nous ");
                strcat(AFFI, VERB);
                strcat(AFFI, "ons");
                puts(AFFI);
                AFFI[0]='\0';
                strcat(AFFI, "Vous ");
                strcat(AFFI, VERB);
                strcat(AFFI, "ez");
                puts(AFFI);
            }
            AFFI[0]='\0';
            strcat(AFFI, "Ils ");
            strcat(AFFI, VERB);
            strcat(AFFI, "ent");
            puts(AFFI);
        }
        printf("Voulez vous conjuguer un autre verbe? (0/N): ");
        scanf("%c",&answers);
        fflush(stdin);
    }
    while (answers=='O');
    return 0;

}
