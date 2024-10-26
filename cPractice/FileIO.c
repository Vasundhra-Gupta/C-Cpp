#include <stdio.h>
struct emp{
    char names[40];
    int age;

} ;
int main(){

//     FILE *fp; //Creating Buffer area
//     fp= fopen("student.txt", "r"); //Opening a file
//     if(fp==NULL){
//         printf("File doesn't exist.");
//     }
//     char ch;


// //Reading from a file
//     //fscanf(fp, "%c",&ch); 
//     //printf("%c\n", ch);
//     //printf("%c\n", fgetc(fp));
//     while(ch!=EOF){
//         ch= fgetc(fp);
//         printf("%c", ch);
//     }
//     printf("\t\n");


// //Writing to a file
//     fprintf(fp, "%c", 'R');
//     fprintf(fp, "%c", 'A');
//     fprintf(fp, "%c", 'J');
//     fprintf(fp, "%c", 'A');
//     fputc('J', fp);
//     fputc('I', fp);
    
//     fclose(fp);//Closing a file

// //(3)2 no. written in file, replace with their sum
//     fp= fopen("Student.txt", "r");
//     int a, b;
//     fscanf(fp, "%d", &a);
//     fscanf(fp, "%d", &b);
//     fclose(fp);
//     fp= fopen("Student.txt", "w");
//     fprintf(fp, "%d", a+b);
//     fclose(fp);

// //(1)Take information from user and enter in a file
//     fp= fopen("Student.txt", "a");
//     char name[100];
//     int age;
//     printf("Enter name:\n");
//     scanf("%s", name);
//     printf("Enter age:\n");
//     scanf("%d", &age);
//     fprintf(fp, "%s\t%d\t", name, age);
//     fclose(fp);

// //(2)Print odd no. from 1 to n in a file
//     fp= fopen("Student.txt","a");
//     int n;
//     printf("Enter n:\n");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             fprintf(fp, "%d\t", i);
//         }
//     }
//     fclose(fp);

    //Make 3 file, 1 main 2nd even, 3rd odd!
    FILE *fm, *fe, *fo;
    fm=fopen("main.txt", "w");
    for(int i=1; i<=100; i++){
        fprintf(fm, "%d\n", i);
    }
    fclose(fm);
    fm= fopen("main.txt", "r");
    fe= fopen("even.txt", "w");
    int num;
    while(fscanf(fm, "%d", &num)!=EOF){
        if(num%2==0){
            fprintf(fe,"%d\n", num);
        }
    }
    fclose(fe);
    fclose(fm);
    rewind(fm);
    fm=fopen("main.txt", "r");
    fo=fopen("odd.txt", "w");
    while((num=getw(fm))!=EOF){
        if(num%2!=0){
            fprintf(fo, "%d\n", num);
        }
    }
    fclose(fo);
    fclose(fm);

    //Record I/O in a binary file
    FILE *femp;
    struct emp e;
    char another= 'Y';
    femp= fopen("emp.txt","wb");
    while(another=='Y'){
        printf("Enter name, age:\n");
        scanf("%s%d", &e.names, &e.age);
        fwrite(&e, sizeof(e), 1, femp);
        printf("Another record:\n");
        another= getche();
    }
    fclose(femp);

    //

    
    


    /*
    //Notes
        //ch = getchar();
        getch(); to hold the screen;
        getch(); to hold the screen, isme dikhega which key entered;

        TEXT Vs BINARY File

            (1) Text: \n= \r + \file............(\r=carriage return, \f= line field);
                Binary: \n is a single character
        
            (2) Text: end of line=EOF;
                Binary: No such special character

            (3) Text: 1ch 1byte......1234.45(8 bytes in disk, 4 in memory);
                Binary: bytes acc to data type.......1234.45(4 bytes in disk, 4 in memory);

            (4) Text: r,w,a,r+,w+,a+;
                Binary: rb,wb,ab,rb+,wb+,ab+;

        Record I/O in txt file

            fprintf(fp, format specifier, variable);
            fscanf(fp, format specifier, &variable);

        Record I/O in Binary file

            fread(&var, sizeof(var), no. of var, fp);

        Moving cursor to a file
            (1) fseek(fp, long offset, base-position);
                eg. fseek(fp, 3, SEEK_END);
                0-> SEEK_START
                1-> SEEK_CUR
                2-> SEEK_END
            
            (2) ftell(fp);
                l= ftell(fp); //l is ki kitni byte pr cursor h

            (3) rewind(fp);
                to take cursor in starting

        COMMAND LINE ARGUEMENTS

            (1) argc (no. of parameters recieved from command line);
            (2) argv[] (array of pointer to a string);

            //Command(copycom sourcefile targetfile)

            Making command of copying a file

            int main(int argc, char *argv[]){
                FILE *fs, *ft;
                fs= fopen(arg[1], "r");
                ft= fopen(arg[2], "w");
                while(ch=getc(fs)!=EOF){
                    putc(ch,ft);
                }
                if(argc!=3){
                    printf("Too many arguements");
                }
                fclose(fs);
                fclose(ft);
                return 0;
            }

    
    
    */


    return 0;
}