#include <stdio.h>
struct student {
    int roll;
    char name[50], dep[50], course[50];
    int year;
} s[4];
void printName(struct student); 
int main(){
    struct student s[4];
    for(int i=0; i<4; i++){
        printf("name:\n");
        gets(s[i].name);
        printf("roll no.\n");
        scanf("%d", &s[i].roll);
        printf("Department:\n");
        gets(s[i].dep);
        printf("Course:\n");
        gets(s[i].course);
        printf("Year:\n");
        scanf("%d", &s[i].year);
    }
    
    for(int i=0; i<5; i++){
        printName(s[i]);
    }
    return 0;
}
void printName(struct student s){
    printf("name is %s\n", s.name);
}
