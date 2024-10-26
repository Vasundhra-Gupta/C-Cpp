#include <stdio.h>
#include <math.h> 
struct complex{
    float real;
    float imaginary;
} data[2];
struct stu{
    int rollNo;
    char name[100];
    int marks;
};
int binaryToDec(long long);
void checkMatrix(int [][3]);
void sumOfComplex(struct complex, struct complex, struct complex);
int factorial(int);
int main()
{

    //binary to decimal.
    long long bn;
    printf("Enter a binary number:\n");
    scanf("%lld", &bn);
    printf("Decimal representation:\n");
    printf("%d\n", binaryToDec(bn));

    //unit matrix or not
    int matrix[3][3];
    printf("Enter a matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    checkMatrix(matrix);

    //add two complex numbers
    struct complex c1, c2, s;
    printf("Enter real and imaginary part of c1:\n");
    scanf("%f%f", &c1.real, &c1.imaginary);
    printf("Enter real and imaginary part of c2:\n");
    scanf("%f%f", &c2.real, &c2.imaginary);
    sumOfComplex(c1, c2, s);

    //factorial using recursion
    int n;
    printf("Enter n:\n");
    scanf("%d", &n);
    int f= factorial(n);
    printf("Factorial is %d\n", f);

    //freq of string
    char str[100], ch;
    int count=0;
    printf("Enter a string:\n");
    scanf("%s", str);
    printf("Enter character whose frequency is to be checked:\n");
    scanf(" %c",&ch);
    for(int i=0; str[i]!='\0' ;i++){
        if(str[i]==ch)
        count++;
    }
    printf("Frequency of %c in string are %d\n", ch, count);
    //store info of 2 students using aray of structures
    struct stu data[2];
    for(int i=0; i<2; i++){
        printf("Enter roll no.:\n");
        scanf("%d", &data[i].rollNo);
        printf("Enter name:\n");
        scanf("%s", data[i].name);
        printf("Enter marks:\n");
        scanf("%d", &data[i].marks);
    }
    for(int i=0; i<2; i++){
        printf("Roll no is %d\n", data[i].rollNo);
        printf("Name is %s\n", data[i].name);
        printf("marks are %d\n", data[i].marks);
    }
    
    
    
    

    
    return 0;
}
int binaryToDec(long long bn){
    int dn=0,i=0, rem;
    while(bn!=0){
        rem=bn%10;
        bn=bn/10;
        dn= dn + rem*pow(2,i);
        i++;
    }
    return dn;
}
void checkMatrix(int a[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if((i==j && a[i][j]!=1)||(i!=j&& a[i][j]!=0)){
                printf("Not unit matrix.\n");
                return;
            }
        }
    }
    printf("A unit matrix.\n");
}
void sumOfComplex(struct complex c1, struct complex c2, struct complex s){
    s.real= c1.real + c2.real;
    s.imaginary = c1.imaginary + c2.imaginary;
    printf("Sum is %.2f + %.2fi\n", s.real, s.imaginary);
}
int factorial(int n){
    int fact=1;
    if(n==0||n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}