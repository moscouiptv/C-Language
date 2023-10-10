# include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     for (int i=0; i<=4;i++){

//         printf("%d\t", i);

//     }
//     return 0;
// }


int main(int argc, char const *argv[])
{
    int num, somme;

    for (int i=1; i<=10;i++) {
        printf("Entrer entier n°%d: ",i);
        scanf("%d: ",&num);

        somme+=num;
        
    }

    printf("La somme est: %d", somme);
    return 0;
}
