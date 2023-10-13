# include <stdio.h>

// Call by Values
int swap(int x, int y){

    int c;
    c=x;
    x=y;
    y=c;
}

int main() {

    int a=2,b=3;
    swap(a,b);
    printf("a=%d and b=%d",a,b);

    return 0;
}


// Call by Address
// int swap(int *x, int *y){

//     int c;
//     c=*x;
//     *x=*y;
//     *y=c;
// }

// int main() {

//     int a=2,b=3;
//     swap(&a,&b);
//     printf("a=%d and b=%d",a,b);

//     return 0;
// }