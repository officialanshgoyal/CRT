// Question 1
// To check if the given number is even without using arithmetic or relational operators

// #include<stdio.h>
// void main(){
//     int a=9;
//     if(a&1){
//         printf("odd");

//     }
//     else{
//         printf("Even");
//     }
// }


// second Way



// Question 2
// program to find the sum  of two numbers without using + operator in c
// #include<stdio.h>
// void main ()

// {
//     int a=9;
//     int b=3;
//     int sum = a ^ b;
//     printf("sum : %d ",sum);
// }



// program to find the sum of the two number without using + operator in c
#include<stdio.h> 
void main(){
    int a=5;
    int b=5;
    int sum = a-(-b);
    printf("%d",sum);


    // method2 
    printf("%d",-(a-b));
    // method3
    printf("%d",abs(-a-b));
    //method3
    printf("%d", (a-(~b)-1));


}