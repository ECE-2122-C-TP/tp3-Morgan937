#include <stdio.h>

//int Exercice_1()
//{
//    int a=0 , b=0;
//    printf("Saisissez un entier :\n");
//    scanf("%d",&a);
//    printf("Saisissez un entier :\n");
//    scanf("%d",&b);
//    if (a<b)
//    {
//        printf("Le plus grand entier est %d \n",b);
//    }
//    else
//        printf("Le plus grand enier est %d \n",a);
//    return 0;
//}
//
//
//
//int Exercice_2()
//{
//    int longueur=0 , largeur=0;
//    printf("Saisissez la longueur du rectangle : \n");
//    scanf("%d",&longueur);
//    printf("Saisissez la largeur du rectangle : \n");
//    scanf("%d",&largeur);
//    printf("Le perimetre du rectangle est %d et son aire est %d",(longueur+largeur)*2,longueur*largeur)
//    return(0);
//}



//
//int Exercice_3()
//{
//    int n=0;
//    const int constante=3;    /* Si on modifie la valeur de "constante" et qu'on run le programme, on a une erreur*/
//    printf("Saisissez un entier :");
//    scanf("%d",&n);
//    if (n%constante==0 && n>=10) {printf("Cet entier est un multiple de 3 et il est superieur ou egal a 10");}
//    else if (n%constante==0 && n<10) {printf("Cet entier est un multiple de 3 et il est inferieur a 10");}
//    else if (n%constante!=0 && n>=10) {printf("Cet entier n'est pas un multiple de 3 et il est superieur ou egal a 10");}
//    else {printf("Cet entier n'est pas un multiple de 3 et il est inferieur a 10");}
//    return(0);
//}


//#define AGE_ENFANT 12
//#define AGE_JEUNE 17
//#define AGE_ETUDIANT 27
//#define AGE_SENIOR 65
//#define TARIF_ENFANT 4
//#define TARIF_JEUNE 6
//#define TARIF_SENIOR 6
//#define TARIF_PLEIN 9
//
//int Exercice_4()
//{
//    int Age_Utilisateur=50, Etudiant=0;
//    printf("Saisissez votre age : \n");
//    scanf("%d",&Age_Utilisateur);
//    if (Age_Utilisateur>AGE_JEUNE && Age_Utilisateur<=AGE_ETUDIANT)
//    {
//        printf("Si vous etes etudiant, saisissez 1 sinon saisissez 0\n");
//        scanf("%d",&Etudiant);
//
//    }
//    if (Age_Utilisateur<AGE_ENFANT)
//    {
//        printf("Le prix de votre billet est %d euros \n",TARIF_ENFANT);
//    }
//    else if (Age_Utilisateur<=AGE_JEUNE && Age_Utilisateur>=AGE_ENFANT || Etudiant==1)
//    {
//        printf("Le prix de votre billet est %d euros \n", TARIF_JEUNE);
//    }
//    else if (Age_Utilisateur>=AGE_SENIOR)
//    {
//        printf("Le prix de votre billet est %d euros \n", TARIF_SENIOR);
//    }
//    else
//    {
//        printf("Le prix de votre billet est %d euros \n", TARIF_PLEIN);
//    }
//    return(0);
//}


//#define BOISSON1 "Coca-Cola"
//#define BOISSON2 "Orangina"
//#define BOISSON3 "Sprite"
//#define BOISSON10 "Cafe"
//#define BOISSON11 "The vert"
//
//
//int Exercice_5()
//{
//    int Boisson_Utilisateur=0;
//    char Boisson1[]=BOISSON1, Boisson2[]=BOISSON2, Boisson3[]=BOISSON3, Boisson10[]=BOISSON10, Boisson11[]=BOISSON11;
//    printf("Saisissez le numero de la boisson que vous souhaitez\n");
//    scanf("%d",&Boisson_Utilisateur);
//    if (Boisson_Utilisateur==1)
//    {
//        printf("La boisson souhaitee est : %s\n", Boisson1);
//    }
//    else if (Boisson_Utilisateur==2)
//    {
//        printf("La boisson souhaitee est : %s\n", Boisson2);
//    }
//    else if (Boisson_Utilisateur==3)
//    {
//        printf("La boisson souhaitee est : %s\n", Boisson3);
//    }
//    else if (Boisson_Utilisateur==10)
//    {
//        printf("La boisson souhaitee est : %s\n", Boisson10);
//    }
//    else if (Boisson_Utilisateur==11)
//    {
//        printf("La boisson souhaitee est : %s\n", Boisson11);
//    }
//    else
//    {
//        printf("ERREUR : ce numero ne correspond a aucune boisson\n");
//    }
//    return(0);
//}


//int Exercice_6()
//{
//    float Note1=21.0f, Note2=21.0f, Note3=21.0f,Moy=21.0f;          /*essayer de mettre un for i ... Note(i)*/
//    while (Note1>20.0f || Note1<0.0f)
//    {
//     printf("Saisissez la premiere note :\n");
//     scanf("%f",&Note1);
//    }
//    while (Note2>20.0f || Note2<0.0f)
//    {
//        printf("Saisissez la deuxieme note :\n");
//        scanf("%f",&Note2);
//    }
//    while (Note3>20.0f || Note3<0.0f)
//    {
//        printf("Saisissez la troisieme note :\n");
//        scanf("%f",&Note3);
//    }
//    Moy=(Note1+Note2+Note3)/3;
//    printf("La moyenne des trois notes est de %f\n",Moy);
//    return(0);
//}

//int Exercice_7()
//{
//    int Nombre_Classe=0,Total_Eleve=0;
//    printf("Saisissez le nombre de classe :\n");
//    scanf("%d",&Nombre_Classe);
//    for (int i=1;i<=Nombre_Classe;i++)
//    {
//        int Nombre_Eleve=0;
//        printf("Saisissez le nombre d'eleve de la classe numero %d\n",i);
//        scanf("%d",&Nombre_Eleve);
//        Total_Eleve = Total_Eleve + Nombre_Eleve;
//        printf("Le nombre total d'eleve est de %d\n",Total_Eleve);
//    }
//    return(0);
//}

//int Exercice_8()
//{
//    int n=1;
//    while (n%7!=0 || n%2!=0)
//    {
//        printf("Saisissez un multiple de 7 ou de 2 :\n");
//        scanf("%d",&n);
//    }
//    printf("bien joue !");
//    return(0);
//}



//int Exercice_9()
//{
//    int Nombre_Pierre=0, i=0, Somme=1;           /*On commence la somme a 1 pour ne pas faire de division par 0 lors de la premiere iteration du while*/
//    printf("Saisissez le nombre de bloc de pierre :\n");
//    scanf("%d",&Nombre_Pierre);
//    if (Nombre_Pierre==0)                       /* On sépare le cas ou il y a 0 pierre, sinon le programme n'effectuerai pas de boucle while (0/1=0<1) et ca nous renverrai -1 */
//    {
//        printf("Vous pouvez construire une pyramide a 0 etage\n");
//    }
//    else
//    {
//        while (Nombre_Pierre/(Somme)>=1)            /* Test de si on peut construire i etages */
//        {
//            if (i==0)                              /*On remet la somme a 0 une fois la premiere itération du while effectué car sinon tout est decalé de 1*/
//            {
//                Somme=0;
//            }
//            i++;
//            Somme=Somme+i*i;
//        }
//        printf("Vous pouvez construire une pyramide a %d etage(s)\n",i-1);   /*ne pas oublier de soustraire 1 car le programme est sortit de la boucle car rajouter un etage etait impossible alors que ca l'etait avant de rajouter l'etage*/
//    }
//
//    return(0);              /* autre possibilité avec une dichotomie ==> meilleur complexite si le nombre de pierre est tres grand*/
//}



//int Exercice_10()
//{
//    int nombre_Saisie=0, i=0;          /* i est le nombre de valeur rentrée*/
//    float moyenne=0.0f;               /* la moyenne est un float car sinon yaura du troncage lors de la division par le nombre de valeur rentrée*/
//    while (nombre_Saisie>=0)
//    {
//        printf("Saisissez un entier positif pour le rajouter a la moyenne ou negatif pour arreter la demande de saisie\n:");
//        scanf("%d",&nombre_Saisie);
//        if (nombre_Saisie>=0)             /* il faut vérifié que le nombre saisie est positif sinon il rajoutera le nombre negatif et ajoutera +1 a i alors qu'on voulait que ca s'arrete*/
//        {
//            moyenne = moyenne+(float)nombre_Saisie;
//            i++;
//        }
//    }
//    moyenne=moyenne/(float)i;         /* ne paps oublier de diviser par le nommbre de valeurs*/
//    printf("La moyenne des entiers positifs est de %f", moyenne);
//    return(0);
//}





int main()
{
//    Exercice_1();
//    Exercice_2();
//    Exercice_3();
//    Exercice_4();
//    Exercice_5();
//    Exercice_6();
//    Exercice_7();
//    Exercice_8();
//    Exercice_9();
//    Exercice_10();
    return(0);
}