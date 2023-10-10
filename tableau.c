# include <stdio.h>

// int main()

// {
//     char chaine[10]= {1,4,5,6,8,7,8,9,6,3};
    
//     printf("%d",chaine[10]);
    
//     return 0;


// }

int main()
{
    int list[5];
    int i, somme;
    float moyen;
    for (i=0; i<5;i++){
        printf("Entrer list[%d]: ",i);
        scanf("%d",&list[i]);
        somme+=list[i];
    }

    moyen = somme/5;
    printf("moyen est: %f",moyen);
    printf("moyen est: %i",list);
    return 0;
}
