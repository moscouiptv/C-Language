# include <stdio.h>

int main() {

    int  liste[10];

    for (int i=0;i<10;i++) {
        printf("liste[%d] = ",i);
        scanf("%d", &liste[i]);

    }

    for (int i=0; i<10;i++) {
        printf("%d ",liste[i]);

    }
}