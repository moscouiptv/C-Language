
 # include <stdio.h>

 int main(int argc, char const *argv[])
 {

    float valeur[10],sum, prod=1;

    for (int i=0;i<10;i++){

        printf("Entrer un réel: ");
        scanf("%f",&valeur[i]);

        prod*=valeur[i];
        sum+=valeur[i];
        

    }

    printf("Somme = %f\n",sum);
    printf("Produit = %f\n",prod);

 }