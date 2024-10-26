#include <stdio.h>
#include <string.h>
void reversearr(int a[], int n);
void printarr(int a[], int n);
int fibo(int n);
void storetables(int a[][10],int n,int number);
void insertElement(int a[], int position, int element);
void findLongestName(char name[][50]);
int main(){

//reverse an array

    int arr[]= {1, 2, 3, 4, 5};
    printf("Reversed Array:\n");
    reversearr(arr, 5);
    printarr(arr, 5);

//fibonacci till n terms
    //by recursion
    int n1;
    printf("Enter n1:\n");
    scanf("%d", &n1);
    printf("Fibbonaci series(Recursion):\n");
    for(int j=0; j<n1; j++){
        printf("%d\t", fibo(j));
    }

    //by iteration
    int n2,i;
    printf("\nEnter n2:\n");
    scanf("%d", &n2);
    int fib[n2];
    fib[0]=0;
    fib[1]=1;
    printf("Fibbonaci series(Iterative):\n");
    printf("%d\t%d\t", fib[0], fib[1]);
    for (i = 2; i <n2; i++)
    {
        fib[i]= fib[i-1]+ fib[i-2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
//Table of 2 and 3(2D Array)
    int number, n3;
    int table[2][10];
    storetables(table,0, 2);
    storetables(table,1, 3);
    printf("Table of 2:\n");
    for(int i=0;i<10; i++){
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    printf("Table of 3:\n");
    for(int i=0;i<10; i++){
        printf("%d\t", table[1][i]);
    }
    printf("\n");

//how many times x occurs!
    int a[10], num, count=0;
    printf("Enter an array\n");
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter no.(x) to be counted:\n");
    scanf("%d", &num);
    for(int i=0; i<10; i++){
        if(a[i]==num)
        count ++;
    }
    printf("It is %d times.\n", count);

//largest number in an array
    int b[10];
    printf("Enter an array\n");
    for(int i=0; i<10; i++){
        scanf("%d", &b[i]);
    }
    int max = b[0];
    for(int i=0; i<10; i++){
        if(b[i]>max)
        max=b[i];
    }
    printf("Greatest is %d", max);

//Insert an element in an array

    int array[10], Num, index;
    printf("\nEnter an array\n");
    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the number and its position to be inserted:\n");
    scanf("%d", &Num, &index);
    insertElement(array, index, Num);

    //perfect no.or not
    int n, s=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for(int i=1; i<n; i++){
        if(n%i==0)
            s=s+i;
    }
    printf("%d\n",s);
    if(s==n){
        printf("Perfect no.");
    }else{
        printf("Not a perfect no.");
    }

    //Longest name print out of 5 names.
    char name[5][50];
    for(int i=0; i<5; i++){
        printf("\nname %d:", i+1);
        scanf("%s",&name[i]);
    }
    findLongestName(name);

    //Length of string
    char str1[20];
    int l=0;
    printf("Enter string:\n");
    fflush(stdin);
    gets(str1);
    for(int i=0; str1[i]!='\0'; i++){
        l++;
    }
    printf("Length of string using loop=%d\n", l);
    printf("Length of string using fn=%d\n", strlen(str1));

    return 0;
}


void reversearr(int a[], int n){
    for(int i=0; i<n/2; i++){
        int temp= a[i];
        a[i]=a[n-i-1];
        a[n-i-1]= temp;
    }
}
void printarr(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2);;
        
    }
}
void storetables(int a[][10],int n, int number){
    for(int i=0; i<10; i++){
        a[n][i]= number*(i+1);
    }
}
void findLongestName(char name[][50]){
    int maxLength=0;
    int longestIndex;
    for(int i=0; i<5; i++){
        int currentLength= strlen(name[i]);
        if(currentLength>maxLength){
            maxLength= currentLength;
            longestIndex=i;
        }
    }
    printf("Longest name is %s\n", name[longestIndex]);
}
void insertElement(int a[], int position, int element){
    
}