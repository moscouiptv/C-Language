# include <stdio.h>

 main()
{
    // Variables
    float prix, total, taux_remise;
    int quantity;
    float remise , net_à_payer;

    // Input
    printf("Enter prix:\t");
    scanf("%f", &prix);
    printf("Enter quantity:\t");
    scanf("%d",&quantity);

    // Traitement
    total = prix * quantity;

    if (total<1000) {
        taux_remise=0;
    }
    else if (total >= 1000 && total<10000){
        taux_remise  = 0.10;
    }

    else if (total >= 10000) {
        taux_remise=0.20;
    }

    remise = total * taux_remise;
    net_à_payer = total - remise;
    printf("Vous devez payer:\t%f dh",net_à_payer);
    return 0;
}