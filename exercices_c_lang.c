# include <stdio.h>

// Nombre Premier*************************
//  int main() {

//     // Variables
//     int a, i=2;

//     // Les Entrées
//     printf("Taper un entier: ");
//     scanf("%d",&a);

//     while (i<a)
//     {
//         if (a%i==0){ 
//             printf("pas premier");
//             break;
//             }
//         else{
//             if (i==a-1){
//                 printf("premier");
//                  }
//             }
//         i++;

//     }
//     return 0;
//     }

// Table de multiplication d'un nombre *************************

int main(int argc, char const *argv[])
{
    printf("x*y |");
    for (int i=0;i<=10;i++){
        printf(" %d  ",i);
    }
    printf("\n");

    for (int j=0;j<=18;j++)
        printf("--");

    for (int k=0;k<=10;k++){
        printf("\n%d   |",k);

        for (int l=0;l<=10;l++)
            printf(" %d  ",k*l);

    }


    return 0;
}
