#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nb_compt=0;
void tri_comptes_des(char T_NP[50][20],char T_cin[50][20],double T_Montant[50],int nb_compt);

void tri_comptes_des(char T_NP[50][20],char T_cin[50][20],double T_Montant[50],int nb_compt)
{
    int i,j;
    double temp_montant;
    char tempcin[20],tempnp[20];
    for(i=0; i<nb_compt-1; i++)
    {
        for(j=i+1; j<nb_compt; j++)
        {
            if(T_Montant[i]<T_Montant[j])
            {
                temp_montant=T_Montant[j];
                T_Montant[j]=T_Montant[i];
                T_Montant[i]=temp_montant;

                strcpy(tempcin,T_cin[j]);
                strcpy(T_cin[j],T_cin[i]);
                strcpy(T_cin[i],tempcin);

                strcpy(tempnp,T_NP[j]);
                strcpy(T_NP[j],T_NP[i]);
                strcpy(T_NP[i],tempnp);


            }
        }
    }
}
int main()
{
    int choix_compt,choix_argent,i,a,nombre_cb,loop,choix_affichage,j,Z;
    int R=0;
    char recherche [20];
    double T_Montant[50],re,dep,temp_montant,chiffre;
    char T_cin[50][20],T_NP[50][20];

    do
    {
        do
        {
            system("cls");
            printf("                                  -------------------------------------------\n ");
            printf("                                |                                           |\n");
            printf("                                 |       Application Gestion Bancaire        |\n");
            printf("                                 |                                           |\n");
            printf("                                  -------------------------------------------\n\n\n");
            printf("                                      \2\3 veuillez saisir un choix svp \2\3  : ");
            printf("\n");
start:

    printf("                                                                                                           ||\n");
    printf("                         --------------------------------------------------------------                    ||\n");
    printf("                        |                                                              |                 $$$$$$\n");
    printf("                        |      1 ==>         Introduire un compte bancaire             |               $$  || $$\n");
    printf("                        |                                                              |              $$$  ||   $$\n");
    printf("                        |                                                              |              $$$  ||\n");
    printf("                        |      2 ==>     Introduire plusieurs comptes bancaires        |              $$$  ||\n");
    printf("                        |                                                              |              $$$  ||\n");
    printf("                        |                                                              |               $$  ||\n");
    printf("                        |      3 ==>                  Operations                       |                 $$$$$$\n");
    printf("                        |                                                              |                   || $$ \n");
    printf("                        |                                                              |                   || $$$\n");
    printf("                        |      4 ==>                  Affichage                        |                   || $$$\n");
    printf("                        |                                                              |                   || $$$\n");
    printf("                        |                                                              |             $$    || $$$\n");
    printf("                        |      5 ==>                 Fidelisation                      |               $$  || $$ \n");
    printf("                        |                                                              |                 $$$$$$\n");
    printf("                        |                                                              |                   ||\n");
    printf("                        |      6 ==>             Quitter l'application                 |                   ||\n");
    printf("                        |                                                              |                      \n ");
    printf("                        --------------------------------------------------------------                        \n");

    scanf("%d",&choix_compt);



        }
        while(choix_compt<1 || choix_compt >6);
        //choix 1 : un seul compte______
        switch (choix_compt)
        {
        case 1:
        {
            system("cls");
            printf("                                  -------------------------------------------\n ");
            printf("                                |                                           |\n");
            printf("                                 |      Introduire un compte bancaire        |\n");
            printf("                                 |                                           |\n");
            printf("                                  -------------------------------------------\n\n\n ");
            printf("                          ___________________\n");
            printf("                          |                                                         |\n");
            printf("                          |   banque                                                |\n");
            printf("                          |   NORZ$$                             EXPIRES : xx/xx    |\n");
            printf("                          |                                       ENDS              |\n");
            printf("                          |      ____                                           |\n");
            printf("                          |     _|  |_      ##                                  |\n");
            printf("                          |     _|  |_      ##      LIVE                        |\n");
            printf("                          |      _||_       ##                                  |\n");
            printf("                          |                                                         |\n");
            printf("                          |                                                         |\n");
            printf("                          |   NOM  :   xxxxx                               ------   |\n");
            printf("                          |   CIN  :   xxxxx                              | visa |  |\n");
            printf("                          |                                                ------   |\n");
            printf("                          |___________________|\n\n");
            printf("                         __\n\n");
            printf("                            veuillez SVP entrer votre NOM \1\3: ");
            scanf("%s",T_NP[nb_compt]);
            printf("\n\n");
            printf("                            =================================  \n");
            printf("\n\n");
            printf("                            veuillez SVP entrer votre CIN \1\3: ");
            scanf("%s",T_cin[nb_compt]);
            printf("\n\n");
            printf("                            =================================  \n");
            printf("\n\n");
            printf("                            veuillez SVP entrer le Montant saisie $$: ");
            scanf("%lf",&T_Montant[nb_compt]);
            printf("\n\n");
            printf("                            =================================  \n");
            printf("\n\n");
            nb_compt++;
            system("cls");

            goto start;
        }
        //choix 2 : plusieur comptes____
        case 2 :
        {
            {
                system("cls");
                printf("                                  -------------------------------------------\n ");
                printf("                                |                                           |\n");
                printf("                                 |    Introduire plusieurs comptes bancaire  |\n");
                printf("                                 |                                           |\n");
                printf("                                  -------------------------------------------\n\n\n");
                printf("                           ___________                                         \n");
                printf("                          |                                 |                                       \n");
                printf("                          |   banque                        |                                       \n");
                printf("                          |   NORZE$$                       |            ____________ \n");
                printf("                          |                                 |           |                                |\n");
                printf("                          |     xxxx-xxxx-xxxx     ------   |           |  banque                        |\n");
                printf("                          |                       | visa |  |_____|  NORZE$$                       |\n");
                printf("                          |                        ------   |           |                                |\n");
                printf("                          |___________|           |    xxxx-xxxx      ----------   |\n");
                printf("                                                |                       |                 | mastercard | |\n");
                printf("                                                |           BANQUE      |                   ----------   |\n");
                printf("                                                |           NORZE$$     |____________|\n");
                printf("                                                |                                 |\n");
                printf("                                                |                                 |\n");
                printf("                                                |___________|\n");
                printf("\n\n\n");
                printf("                                    combien de comptes voulez-vous creer \3\3: ");
                scanf("%d",&nombre_cb);
            }
            loop = nb_compt;//avoid boucle infinie
            for(i=loop; i<loop+nombre_cb; i++)
            {
            printf("\n\n");
            printf("                                                 pour compte %d: \n\n",i+1);
            printf("                                    veuillez SVP entrer votre NOM \1\3: ");
            scanf("%s",T_NP[nb_compt]);
            printf("\n\n");
            printf("                                    =================================  \n");
            printf("\n\n");
            printf("                                    veuillez SVP entrer votre CIN \1\3: ");
            scanf("%s",T_cin[nb_compt]);
            printf("\n\n");
            printf("                                    =================================  \n");
            printf("\n\n");
            printf("                                    veuillez SVP entrer le Montant saisie $$: ");
            scanf("%lf",&T_Montant[nb_compt]);
            printf("\n\n");
            printf("                                    =================================  \n");
            printf("\n\n");
                nb_compt++;
            }
            system("cls");
            goto start;
        }

        case 3 : // les operation_____
        {
            system("cls");
            if(nb_compt==0)
            {
                printf("                     SVP cree un compte pour affecter une operation  !!!\n\n\n");
                goto start;
            }
            else
            {
start2:
                printf("                                  -------------------------------------------\n ");
                printf("                                |                                           |\n");
                printf("                                 |                 Operations                |\n");
                printf("                                 |                                           |\n");
                printf("                                  -------------------------------------------\n\n\n");
                printf("                             veuillez svp entrer le CIN pour affecter une operation : ");
                printf("\n\n\n");
                scanf("%s",recherche);
                for(i=0; i<nb_compt; i++)
                {
                    if(strcmp(recherche,T_cin[i])==0)
                    {
                        Z=i;
                        break;
                    }
                    else if(strcmp(recherche,T_cin[i])!=0)
                        Z=-1;
                }
                if (Z==-1)
                {
                    printf("                               ERREUR  le compte saisie est introuvable!!!!!\n");
                    goto start2;
                }
                else
                {
                    printf("                             le compte tu as choisi est \3: %s %s %.2f dh \n\n",T_NP[Z],T_cin[Z],T_Montant[Z]);
                    printf("                           ___________________\n");
                    printf("                          |                                                         |\n");
                    printf("                          |   banque                                                |\n");
                    printf("                          |   NORZ$$                             EXPIRES : %d/%d    |\n",13,25);
                    printf("                          |                                       ENDS              |\n");
                    printf("                          |      ____                                           |\n");
                    printf("                          |     _|  |_      ##                                  |\n");
                    printf("                          |     _|  |_      ##      LIVE                        |\n");
                    printf("                          |      _||_       ##                                  |\n");
                    printf("                          |                                                         |\n");
                    printf("                          |                                                         |\n");
                    printf("                          |   NOM  :   %s                                            \n",T_NP[Z]);
                    printf("                          |   CIN  :   %s                                   visa     \n",T_cin[Z]);
                    printf("                          |                                                         |\n");
                    printf("                          |___________________|\n\n\n");
                    do
                    {
                        printf("                             press 1 pour retirer de l'argent\n\n");
                        printf("                             press 2 pour deposer de l'argent\n\n");
                        printf("                             veuillez saisir votre choix SVP \3:  ");
                        scanf("%d",&choix_argent);
                        printf("\n\n");
                    }
                    while(choix_argent<1 || choix_argent>2);
                    switch(choix_argent)
                    {
                    case 1 :

                        printf("                            combien d'argent voulez vous retirer: ");
                        scanf("%lf",&re);
                        printf("\n\n");
                        while(re>T_Montant[Z])
                        {
                            printf("             ERREUR vous pouvez retirer juste une somme inferieure a votre Montant !!!!\n\n");
                            printf("                               votre Montant est \2:%.2f ",T_Montant[Z]);
                            printf("\n\n");
                            scanf("%lf",&re);
                        };

                        T_Montant[Z]=T_Montant[Z]-re;
                        printf("                     le montant actuel de %s est %.2f dh\n",T_NP[Z],T_Montant[Z]);
                        system("pause");
                        system("cls");
                        goto start;


                    case 2 :

                        printf("                            combien de l'argent voulez vous deposer \n\n\n");
                        scanf("%lf",&dep);
                        T_Montant[Z]=T_Montant[Z]+dep;
                        printf("                            votre nouveau montrant est %.2f dh\n",T_Montant[Z]);
                        system("pause");
                        system("cls");
                        goto start;



                    }
                }
            }
        }//choix 4 afichage____
        case 4 :
        {
            system("cls");
            if(nb_compt==0)
            {
                 printf("                     SVP cree un compte pour afficher une operation  !!!\n\n\n");
                goto start;
            }
            else
                system("cls");
                printf("                                  -------------------------------------------\n ");
                printf("                                |                                           |\n");
                printf("                                 |                 Affichage                 |\n");
                printf("                                 |                                           |\n");
                printf("                                  -------------------------------------------\n\n\n");
                printf("                                     \2\3 veuillez saisir un choix svp \2\3  : ");
                printf("\n\n");

            printf("                                                                                                          \n");
            printf("                              1 ==>               Par ordre Ascendant                                      \n");
            printf("                                                                                                          \n");
            printf("                                                                                                          \n");
            printf("                              2 ==>               Par ordre Descendant                                     \n");
            printf("                                                                                                           \n");
            printf("                                                                                                          \n");
            printf("                              3 ==>            RECHERCHE d'un compte par CIN                               \n");
            printf("\n\n\n");
            do
            {

                scanf("%d",&choix_affichage);
            }
            while(choix_affichage <1 || choix_affichage>3);
            switch(choix_affichage)
            {
            //les choix d'affichage
            case 1 :

                printf("                                * Affichage des comptes par Ordre Ascendant *\n\n");
                //fonction de trie
                tri_comptes_des(T_NP,T_cin,T_Montant,nb_compt);
                for(i=nb_compt-1; i>=0; i--)
                {
                    printf("                                  -------------------------------------------\n ");
                    printf("                                |                                           |\n");
                    printf("                                 |            %s__ ==> %.2f dh             \n",T_NP[i],T_Montant[i]);
                    printf("                                 |                                           |\n");
                    printf("                                  -------------------------------------------\n\n\n");
                }
                system("pause");
                system("cls");
                goto start;


            case 2 :
                printf("                                * Affichage des comptes par Ordre Descendant *\n\n");

                tri_comptes_des(T_NP,T_cin,T_Montant,nb_compt);

                for(i=0; i<nb_compt; i++)
                {
                    printf("                                  -------------------------------------------\n ");
                    printf("                                |                                           |\n");
                    printf("                                 |            %s__ ==> %.2f dh             \n",T_NP[i],T_Montant[i]);
                    printf("                                 |                                           |\n");
                    printf("                                  -------------------------------------------\n\n\n");
                }
                system("pause");
                system("cls");
                goto start;


            case 3 :
                printf("                                     \2\3 veuillez saisir un CIN svp \2\3  : ");
                scanf("%s",recherche);
                printf("\n\n");
                for(i=0; i<nb_compt; i++)
                {
                    if(strcmp(recherche,T_cin[i])==0)
                    {
                        Z=i;
                        break;
                    }
                    else if(strcmp(recherche,T_cin[i])!=0)
                        Z=-1;
                }
                if(Z!=-1){
                    printf("                                             =================\n");
                    printf("                                            | votre compte est :|\n");
                    printf("                                             =================\n\n\n");
                    printf("                                  --------------------------------------------------------\n ");
                    printf("                                |                                           |\n");
                    printf("                                 |  NOM ==> %s   ||  CIN ==> %s  || Montant ==> %.2f dh    \n",T_NP[Z],T_cin[Z],T_Montant[Z]);
                    printf("                                 |                                           |\n");
                    printf("                                  --------------------------------------------------------\n\n\n");}
                else if (Z=-1)
                    printf("                                     Ce compte est introuvale \2\n\n");
                system("pause");
                system("cls");
                goto start;

            }//switch choix d'affichage

        }//affichage switch
        case 5 :
            //fidelisation__
            while(nb_compt==0)
            {
                system("cls");
                printf("                     SVP cree un compte pour affecter la fidelisation  !!!\n\n\n");
                goto start ;
            }
            printf("                                     \2\3 la fidelisation est affectu%ce \2\3   ",130);

            tri_comptes_des(T_NP,T_cin,T_Montant,nb_compt);
            if(nb_compt<3)
                i=nb_compt-1;
            else
            {
                for(i=0; i<nb_compt; i++)
                {
                    if (T_Montant[i]==T_Montant[i+1])
                    {
                        continue;
                    }
                    if(T_Montant[i]>T_Montant[i+1])
                        R++;
                    if (R==3)
                        break;
                }
            }
            system("cls");

            printf("                                    * les comptes apr%cs fidelisation *\n\n",138);
            for(j=0; j<i; j++)
            {
                printf("                                  -------------------------------------------------------\n ");
                printf("                                |                                           |\n");
                printf("                                 |  NOM ==> %s : %.2f dh+ %.2f dh = %.2f dh\n",T_NP[j],T_Montant[j],T_Montant[j]*1.3/100,T_Montant[j]+T_Montant[j]*1.3/100);
                printf("                                 |                                           |\n");
                printf("                                  -------------------------------------------------------\n\n\n");
            }
            system("pause");
            system("cls");
            goto start;

        }//first switch menu select

    }
    while(choix_compt!=6);
    return 0;

}
