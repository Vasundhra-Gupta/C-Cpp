#include <stdio.h>
#include <string.h>
void printarr(char arr[]);
int printlength(char arr[]);
void salting(char pass[]);
void slice(char str[], int n, int m);
int countvowel(char str[]);
void check(char str[], char);
int main(){
    char name1[]= {'L','O','V','E','\0'};
    char name2[]= "LOVE";
    printarr(name2);

    strrev(name2); //reverse a string
    puts(name2);

    strcat(name1, name2); //join 2 strings
    puts(name1);

    int result= strcmp(name1, name2); //compare
    printf("%d\n", result);
    
    printf("Length is %d\n",strlen(name2)); //length of string
    
    //characters in single quote and strings in double!
    char firstName[]= "VASUNDHRA";
    char lastName[]= "GUPTA";

    printarr(firstName);
    printarr(lastName);

    printf("%s %s\n", firstName, lastName);

    //input user name and print back
    char fullname[50];
    gets(fullname);
    puts(fullname);

    printf("Length is %d\n",printlength(fullname));

/*
    //Standard Library functions
    (1)strlen(str);
    (2)strcpy(target, source);
    (3)strrev(str);
    (4)strcat(frst str, sec str);
    (5)strcmp(frst str, sec str);
*/

    strcpy(firstName, fullname); //copy a string
    puts(firstName);
    //input user name and print its length
    char string[100];
    char ch;
    int i;
    for(i=0; ch!='\n'; i++){
        scanf("%c", &ch);
        string[i]= ch;
    }
    string[i]='\0';
    puts(string);

    //find salted password by user, salt="123" added at the end
    char password[100];
    scanf("%s", &password);
    salting(password);

    //fn which gives sliced string from index n to m
    char love[]= "Helloworld";
    slice(love , 2, 6);

    //count occurence of vowel in a string
    printf("No. of vowels are %d\n", countvowel(love));
    
    //a given character is present in a string or not
    char character= 'x';
    check(love, character);
    return 0;
      
}
void printarr(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    printf(" ");
}
int printlength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
void salting(char pass[]){
    char salt[]= "143";
    char newPassword[200];
    strcpy(newPassword, pass);
    strcat(newPassword, salt);
    puts(newPassword);
}
void slice(char str[], int n, int m){
    int j=0;
    char newStr[100];
    for(int i=n; i<=m; i++, j++){
        newStr[j]= str[i];
    }
    newStr[j]=0;
    puts(newStr);
}
int countvowel(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}
void check(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(ch==str[i]){
            printf("Character is present");
            return;
        }
    }
    printf("Character not present");
}