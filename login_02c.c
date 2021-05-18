//Not completed (10:55PM, 5/18/2021)
#include <stdio.h>
#include <conio.h> //getch()
#include <stdlib.h> //system("cls")
#include <string.h>
#include <windows.h> //sleep(80);

FILE *fileR;
int noOfPersons;
int index2;

void addContact();
void toFile();
void loadFile();
void menu();
void info1();
void login1();
void main_menu1();
void outrow();

struct Contact{
    char name[31];
    int age;
    float height;
    float weight;
    float bmi;
    char pass[9];
}p[100];

void info1(){
    system("cls");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("\t\t\tMeal Scout\n");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("Streamlining your time to choose the correct meal for your goals\n\n\n");
    printf("Press any key to continue\n");
    getch();
}

void loadFile(){
    int count = 0;
    fileR = fopen ("Database.txt", "r");
    while(!feof(fileR)){
        fscanf(fileR, "%s %d %f %f %f %s\n", &p[count].name, &p[count].age, &p[count].height, &p[count].weight, &p[count].bmi, &p[count].pass);
        //printf("%s %d %.2f %.2f %.2f %s\n", p[count].name, p[count].age, p[count].height, p[count].weight, p[count].bmi, p[count].pass); //Check
        count++;
    }
    fclose(fileR);
    noOfPersons = count;
    //printf("%d\n", noOfPersons); //Check
}

void login1(){
    loadFile();

    /*
    //printf("%s\n", p[0].name); //Working after calling loadFile()
    //Check
    for(int g = 0; g < 5; g++){
        printf("%s\n", p[g].name);
    }
    //Check
    for(int g = 0; g < 5; g++){
        printf("%s\n", p[g].pass);
    }
    */

    //Name
    printf("\n");
    printf("\t\t      Name: ");
    char nameSearch[31];
    scanf("\n");
    gets(nameSearch);

    //Name Search
    int index;
    int flag = 0;
    int counter = 0;
    for(int j = 0; j < noOfPersons; j++){
        if(strcmp(p[j].name, nameSearch) == 0){
            flag++;
            index = j;
            break;
        }
    }

    /*
    //Check
    if(flag > 0){
        printf ("Name\t: %s\n", p[index].name);
    }
    */

    for(int z = 0; z < noOfPersons; z++){
        if(strcmp(p[z].name, nameSearch) > 0 || strcmp(p[z].name, nameSearch) < 0){
            counter++;
        }
    }

    if(counter == noOfPersons){
        printf("Not Found\n");
        printf("Please restart the program & enter valid login credentials\n");
        exit(0);
    }

    //Password
    printf("\t\t      Password: ");
    char passSearch[9];
    scanf("\n");
    gets(passSearch);

    //Password Search
    if(counter != noOfPersons){
        //printf("Found\n");
        if(strcmp(p[index].pass, passSearch) == 0){
            printf("\nSuccessfully Logged In\n");
            printf("Press any key to continue\n");
            getch();
            menu();
        }
        else{
            printf("Incorrect Password\n");
            printf("Please restart the program & enter valid login credentials\n");
        }
    }
    index2 = index;
    /*
    //Previous method
    if(strcmp(p[index].pass, passSearch) == 0){
        printf("Successfully Logged In\n");
    }
    else{
        printf("Incorrect Password");
    }
    */
}

void main_menu1(){
    system("cls");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("\t\t\tMeal Scout\n");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("Streamlining your time to choose the correct meal for your goals\n\n\n");
    printf("\t\t      1. Log in\n\t\t      2. Create New Account\n");
    int choice1;
    printf("\n");
    printf("Please Select an Option: ");
    scanf("%d", &choice1);
    if(choice1 == 1){
        login1();
    }
    else if(choice1 == 2){
        addContact();
        toFile();
    }
}

void addContact(){
    system("cls");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("\t\t\tMeal Scout\n");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("Streamlining your time to choose the correct meal for your goals\n\n\n");

    //Name
    printf("[Please enter your name (maximum 30 characters) without any space]\n\n");
    printf("\t\t      Name: ");
    scanf("\n");
    gets(p[0].name);

    //Birth Year
    printf("\t\t      Enter you Birth Year: ");
    int birth_year_1;
    scanf("%d", &birth_year_1);
    p[0].age = 2021 - birth_year_1;

    //Height
    printf("\t\t      Enter you height (in meters): ");
    scanf("%f", &p[0].height);

    //Weight
    printf("\t\t      Enter your weight (in kilograms): ");
    scanf("%f", &p[0].weight);

    //Password
    printf("\n");
    printf("[Enter Your Password (maximum 8 characters) without any space]\n");
    printf("\t\t      Password: ");
    scanf("\n");
    gets(p[0].pass);
    printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

    //BMI Calculator
    float bmi_1;
    bmi_1 = (p[0].weight / (p[0].height * p[0].height));
    p[0].bmi = bmi_1;

    printf("\n");
    printf("Data has been successfully saved\n");
    printf("\n");
    printf("Please restart the program\n");
    printf("Press any key to terminate the program\n");
    getch();
}

void outrow(){
    system("cls");
    printf("\n\n\n\n\n\t\t\t");
    printf("H");
    Sleep(80);
    printf("a");
    Sleep(80);
    printf("v");
    Sleep(80);
    printf("e ");
    Sleep(80);
    printf("a ");
    Sleep(80);
    printf("n");
    Sleep(80);
    printf("i");
    Sleep(80);
    printf("c");
    Sleep(80);
    printf("e ");
    Sleep(80);
    printf("d");
    Sleep(80);
    printf("a");
    Sleep(80);
    printf("y");
    Sleep(80);
    printf("!");
    printf("\n\n\n\n\n");
}

void toFile(){
    fileR = fopen ("Database.txt", "a");
    fprintf(fileR, "%s %d %.2f %.2f %.2f %s\n", p[0].name, p[0].age, p[0].height, p[0].weight, p[0].bmi, p[0].pass);
    fclose(fileR);
}

void menu(){
    char menu_options;
    do{
        system("cls");
        printf("\t\t\t__________\n");
        printf("\n");
        printf("\t\t\tMeal Scout\n");
        printf("\t\t\t__________\n");
        printf("\n");
        printf("Streamlining your time to choose the correct meal for your goals\n\n\n");
        printf("\t\t      1. Meal Scout\n");
        printf("\t\t      2. BMI Calculator\n");
        printf("\t\t      3. Water Intake Calculator\n");
        printf("\t\t      4. About\n");
        printf("\t\t      5. Exit\n");

        //printf("%d\n", index2);
        //printf("%s\n", p[index2].name);

        printf("\n");
        printf("Please Select an Option: ");
        scanf("%c", &menu_options);
        switch(menu_options){
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                info1();
                break;
            case '5':
                outrow();
                break;
        }
    }while (menu_options != '5');
}

int main()
{
    main_menu1();
    //loadFile();
    //addContact(); //for storing new informatons
    //toFile(); //for the login system
    return 0;
}
