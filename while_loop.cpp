
# include <stdio.h>

int main() {
    int age;

    printf("Entrer votre age : ");
    scanf("%d",&age);
    while (age<=0 || age>=100)
    {
        printf("Entrer votre age : ");
        scanf("%d",&age);
    }
    
    return 0;


}
