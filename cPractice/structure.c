//Structures
#include <stdio.h>
#include <string.h>
//Defining a Structure
struct student{
    char name[100];
    int roll;
    float cgpa;
};
struct address{
    int houseNo;
    char block;
    char city[30];
    char state[30];
};
struct vector{
    int x;
    int y;
};
struct complex{
    int real;
    int imaginary;
};
void printInfo(struct student);
void printAdd(struct address);
void addVector(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct student s1, s2, s3; //Declaring a structure
    //s1.name= "Arvind"
    strcpy(s1.name, "Arvind");
    s1.roll= 1;
    s1.cgpa= 9.3;
    strcpy(s2.name, "Neha");
    s2.roll= 4;
    s2.cgpa= 9.2;
    strcpy(s3.name, "Vasundhra");
    s3.roll= 3;
    s3.cgpa= 9.9;
    //printing members of structure
    printf("%s %d %f\n", s1.name, s1.roll, s1.cgpa);
    printf("%s %d %f\n", s2.name, s2.roll, s2.cgpa);
    printf("%s %d %f\n", s3.name, s3.roll, s3.cgpa);

//Array of Structures
    printf("Array");
    struct student CSE[50]; //store data of 100 students by using one variable only(CSE[])
    CSE[0].roll=99;
    CSE[0].cgpa=9;
    CSE[1].roll=100;
    CSE[1].cgpa=8;
    CSE[2].roll=101;
    CSE[2].cgpa=9.4;
    CSE[3].roll=102;
    CSE[3].cgpa=8.9;
    for(int i=0; i<=3;i++){
        printf("Roll: %d\nCGPA%f\n", CSE[i].roll , CSE[i].cgpa);
    }

    //Initialising a structure
    struct student s4={"Vasundhra", 23, 9.0};
    printf("%s %d %f\n", s4.name, s4.roll, s4.cgpa);

//Pointers to structure
    struct student *ptr = &s1;
    printf("%s\n", (*ptr).name);
    printf("%d\n", ptr->roll); //using arrow operator(ptr->code)

//Passing Structure to a function
    printInfo(s4);
    printf("%d\n", s4.roll);
    s4.roll= 1221;
    printf("%d\n", s4.roll);

//typedef keyword(use to create alias(niknames) of structures)
    typedef struct computerScinceEngineeringStudent{
        char fullName[100];
        int code;
    } cse;
    //struct computerScienceEngineeringStudent g1;
    cse g1;
    g1.code= 23;
    printf("code number is %d\n", g1.code);

//Questions
    //(1)Enter address(house no, block, city, state) of 5 people
    struct address{
        int houseNo;
        char block;
        char city[30];
        char state[30];
    } people[5];

    printf("Enter address information(house no, block, city, state):\n");
    // printf("Enter info of Person 1");
    // scanf("%d", &people[0].houseNo);
    // scanf("%c", &people[0].block);
    // scanf("%s", people[0].city);
    // scanf("%s", people[0].state);

    // printf("Enter info of Person 2");
    // scanf("%d", &people[1].houseNo);
    // scanf("%c", &people[1].block);
    // scanf("%s", people[1].city);
    // scanf("%s", people[1].state);

    // printf("Enter info of Person 3");
    // scanf("%d", &people[2].houseNo);
    // scanf("%c", &people[2].block);
    // scanf("%s", people[2].city);
    // scanf("%s", people[2].state);

    // printf("Enter info of Person 4");
    // scanf("%d", &people[3].houseNo);
    // scanf("%c", &people[3].block);
    // scanf("%s", people[3].city);
    // scanf("%s", people[3].state);

    // printf("Enter info of Person 5");
    // scanf("%d", &people[4].houseNo);
    // scanf("%c", &people[4].block);
    // scanf("%s", people[4].city);
    // scanf("%s", people[4].state);
    
    for(int i=0; i<5; i++){
        scanf("%d %c", &people[i].houseNo, &people[i].block);
        fflush(stdin);
        gets(people[i].city);
        fflush(stdin);
        gets(people[i].state);
        printf("Enter next record:\n");
    }
    // for(int i=0; i<5; i++){
    //     printf("Address is %d %c %s %s\n", people[i].houseNo, people[i].block, people[i].city, people[i].state);
    // }

    //(2)structure to Store vector and a fn which return their sum of 2 vectors
    struct vector v1={2, 4};
    struct vector v2={3, 6};
    struct vector sum={0};

    addVector(v1, v2, sum);

    //(3)Structure to store complex no.(use arrow operator)
    struct complex c= {5, 8};
    struct complex *complex = &c;
    printf("real part is %d\n", complex->real);
    printf("imaginary part is %d\n", complex->imaginary);
    return 0;

}
void printInfo(struct student s){
    printf("Student Information\n");
    printf("%s %d %f\n", s.name, s.roll, s.cgpa);
    s.roll=1221;//will not change in main fn
}
void printAdd(struct address add){
    printf("Address is %d %c %s %s", add.houseNo, add.block, add.city, add.state);
}
void addVector(struct vector v1, struct vector v2, struct vector sum){
    sum.x= v1.x+v2.x;
    sum.y= v1.y+ v2.y;

    printf("Sum of x-comp: %d\n",sum.x);
    printf("Sum of y-comp: %d\n",sum.y);
}

