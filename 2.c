# include <stdio.h>
    main()
{

    // Les variables:
    int a , b , somme, diff;

    // Les entrées:
    printf("Entrer la valeur de  a: ");
    scanf("%d", &a);
    printf("Entrer la valeur de b: ");
    scanf("%d",&b);
    // Traitement:
    somme= a+b;
    diff= a-b;
    // Les sorties:
    printf("1) somme= \t %d \n", somme);
    printf("2) différence= \t %d \n", diff);
    return 0;
}
