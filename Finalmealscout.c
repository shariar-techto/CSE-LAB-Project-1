#include <stdio.h>
#include <conio.h> //getch()
#include <stdlib.h> //system("cls")
#include <string.h>
#include <windows.h> //sleep(80);


int cal01,cal2,cal3,cal4,cal5;

 FILE *cal;
int options;
int g1;
int m1,m2;


   int calst(int a)
   {
            cal=fopen("count.txt","a");
            fprintf(cal,"\n%d",a);

            fclose(cal);

   }


    int calred()

    {

        cal=fopen("count.txt","r");
        while(!feof(cal))
        {
            fscanf(cal,"%d %d %d %d %d",&cal,&cal2,&cal3,&cal4,&cal5);
            printf("\n\nThe total calorie count for the day: %d\n\n\n",cal01+cal2+cal3+cal4+cal5);

        }


    }


int count=0;
char confirm(char a)

{

    if(a =='y')
    {
        printf("\n\n Congratulations!\n");
        count=1;
    }

    else
    {
        printf("You can select a different food\n");
    }
}

int calst(int a);


FILE *fileR;
int noOfPersons;

void water_in_cal();
void water_menu();
void water_male();
void water_female();
void water_cal();
void addContact();
void toFile();
void loadFile();
void menu();
void info1();
void login1();
void main_menu1();
void outrow();
void load();

int index2;

void load(){
    system("cls");
    for(int i = 1; i <= 2; i++){
        system("cls");
        printf("\n\n\n\n\n\t\t\t");
        printf("L");
        Sleep(75);
        printf("o");
        Sleep(75);
        printf("a");
        Sleep(75);
        printf("d");
        Sleep(75);
        printf("i");
        Sleep(75);
        printf("n");
        Sleep(75);
        printf("g");
        Sleep(75);
        printf(".");
        Sleep(75);
        printf(".");
        Sleep(75);
        printf(".");
        Sleep(75);
    }
    system("cls");
}

struct Contact{
    char name[31];
    int age;
    float height;
    float weight;
    float bmi;
    char pass[9];
}p[100];

//Water intake table
//Generalized Chart
void water_in_cal(){
        system("cls");

        printf("\t\t\tGeneralized Chart\n");
        printf("\n");

        printf("Age\t\tMale\tFemale\n");
        printf("       \t\t(l/day)\t(l/day)\n");
        printf("01 to 03\t1.3\t1.3\n");
        printf("04 to 08\t1.7\t1.7\n");
        printf("09 to 13\t2.4\t2.1\n");
        printf("14 to 18\t3.3\t2.3\n");
        printf("19 to 50\t3.7\t2.7\n");
        printf("   51+  \t3.7\t2.7\n");
        printf("\n");
        printf("This table is taken from DRI report.\nVisit www.nap.edu for more details.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
}

void water_menu(){
    system("cls");
    printf("\t\t\tWater Intake Calculator\n");
    printf("\n");

    printf("1. Personalized Recommendation\n");
    printf("2. Generalized Chart\n");
    int wmop;
    printf("\n");
    printf("Please Select an Option: ");
    scanf("%d", &wmop);
    if(wmop == 1){
        water_cal();
    }
    else if(wmop == 2){
        water_in_cal();
    }
}

void water_cal(){
    system("cls");

    printf("\t\t\tPersonalized Recommendation\n");
    printf("\n");

    printf("1. Male\n");
    printf("2. Female\n");
    printf("\n");
    printf("Please Select an Option: ");
    int gen_wat;
    scanf("%d", &gen_wat);
    if(gen_wat == 1){
        water_male();
    }
    else if(gen_wat == 2){
        water_female();
    }
}

void water_male(){
    int mw1;
    int mw2;
    printf("Birth Year: ");
    scanf("%d", &mw1);
    printf("\n");
    mw2 = 2021 - mw1;
    if(mw2 >= 0 && mw2 <= 3){
        printf("You should drink at least 1.3 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 4 && mw2 <= 8){
        printf("You should drink at least 1.7 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 9 && mw2 <= 13){
        printf("You should drink at least 2.4 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 14 && mw2 <= 18){
        printf("You should drink at least 3.3 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 19 && mw2 <= 50){
        printf("You should drink at least 3.7 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 51 && mw2 <= 500){
        printf("You should drink at least 3.7 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
}

void water_female(){
    int mw1;
    int mw2;
    printf("Birth Year: ");
    scanf("%d", &mw1);
    printf("\n");
    mw2 = 2021 - mw1;
    if(mw2 >= 0 && mw2 <= 3){
        printf("You should drink at least 1.3 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 4 && mw2 <= 8){
        printf("You should drink at least 1.7 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 9 && mw2 <= 13){
        printf("You should drink at least 2.1 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 14 && mw2 <= 18){
        printf("You should drink at least 2.3 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 19 && mw2 <= 50){
        printf("You should drink at least 2.7 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    if(mw2 >= 51 && mw2 <= 500){
        printf("You should drink at least 2.7 liters of water every day.\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
}

void info1(){
    system("cls");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("\t\t\tMeal Scout\n");
    printf("\t\t\t__________\n");
    printf("\n");
    printf("Streamlining your time to choose the correct meal for your goals\n\n\n");

    printf("CSE 115L: Programming Language I Lab\n");
    printf("Spring 2021, Section: 4\n");
    printf("Project\n");
    printf("\n");
    printf("Faculty: Dr. Rajesh Palit\n");
    printf("Lab Officer: Pranta Palit\n");
    printf("\n");
    printf("Project Team: 3\n");
    printf("2112055642 Sharear Alam\n2111023642 Koushik Ahamed Tonmoy\n2111424642 MD Monirul Hasan\n");
    printf("\n");
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
    int j;
    for(j = 0; j < noOfPersons; j++){
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
    index2 = j;
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

    printf("If you are running this program for the first time, please create a new account before logging in\n");

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
        printf("\t\t      2. Water Intake Calculator\n");

        printf("\t\t      3. Check your calorie intake\n");
        printf("\t\t      4. About\n");

        printf("\t\t      5. Exit\n");
        printf("\n");
        printf("Please Select an Option: ");
        scanf("%c", &menu_options);
        switch(menu_options){

            case '1':

                   printf("                   Press 1: If you want to gain weight         Press 2: If you want to lose weight \n\n" );

   printf("Press your option: ");
   scanf("%d",&g1);
   printf("\n");




   if (g1>2)
   {
       printf("Please select one of the options \n");
       scanf("%d",&g1);
   }

/*Gain */

      if (g1==1)
   {
       printf("-----------------------------------What is your mood on a scale of 1-10?------------------------------------------------\n");
       printf("\n\nThe higher the rating,the better the mood you have \n\n");
       printf("Insert a rating here: \n");
       scanf("%d",&m1);
       printf("\n\n");
       system("cls");

       if ( m1>=1 && m1<6)
       {

           printf("Nothing can lift your mood better than some easy to make recipes!\n\n");

 //Recipes//
           printf("1.Chocolate banana nut shake\n\n");
           printf("2.Chocolate hazelnut shake \n\n");
           printf("3.Chili and Cornbread\n\n");
           printf("4.Sweet Potato souffle\n\n");
           printf("5.Almonds\n\n");


           int f1;
           printf("Choose a number to check recipe\n\n");
           scanf("%d",&options);



           system("cls");

/*Buffer clear */
           char ch;
           ch=getchar();


           switch(options)
           {
               case 1:
                   printf(" Chocolate banana nut shake:\n 1 cup Silk Almond Milk\n 1 small frozen banana if not frozen add 4 ice cubes\n 2 tablespoons peanut, almond or cashew butter2 tablespoons vanilla, chocolate or unflavored protein powder \n 1 tablespoon cocoa powder1 tablespoon coconut sugar \n");
                   cal01=200;

                   char con;
                   printf("\n\nPress 'y' or 'n' if you want to make this delish milkshake \n");
                   scanf("%c",&con);

                   confirm(con);
                   if (count==1)
                   {
                       printf(" You have gained %d calories\n\n",cal01);
                       calst(cal01);

                   }
  system("pause");
                   break;


               case 2:
                 printf("Chocolate hazelnut shake:\n -3 Scoops vanilla ice cream \n -Plus one to float on top \n -3 tbsp Nutella spread  cold milkFlake chocolate bar \n -crumbledhazelnuts \n -toasted and finely chopped\n");
                  cal2=150;
                  char con1;
                  printf("\n\nPress 'y' or 'n' if you want to make this delish milkshake \n");
                  scanf("%c",&con1);

                  confirm(con1);
                  if (count==1)
                  {
                     printf("You have gained %d calories\n\n",cal2);
                     calst(cal2);

                  }

 system("pause");
               break;

           }

       }

       if ( m1>=5 && m1<11)
       {

           printf("We are glad to know that you are having a great day!\n\n");

 //Recipes//

           printf("1.Mashed Potatoes and beans\n\n");
           printf("2.Salmon and brown Rice\n\n");
           printf("3.Macaroni and Cheese \n\n");
           printf("4.Banana Split\n\n");
           printf("5.Scrambled Eggs and Oatmeal\n\n");

           int f1;
           printf("Choose a number to check recipe\n\n");
           scanf("%d",&options);



           system("cls");

/*Buffer clear */
           char ch;
           ch=getchar();


           switch(options)
           {
               case 1:
                   printf(" Mashed Potatoes and beans: potatoes \n -green beans\n -onion\n -butter\n- cream \n-herbs and spices (garlic powder, paprika, thyme, parsley, coriander) \n");
                   cal3=200;

                   char con;
                   printf("\n\nPress 'y' or 'n' if you want to make this delish milkshake \n");
                   scanf("%c",&con);

                   confirm(con);

                   if (count==1)
                   {
                       printf(" You have gained %d calories\n\n",cal3);
                      calst(cal3);
                   }

system("pause");

                   break;

           }

       }

   }



/* Loss */
   else if  (g1==2)
   {
       printf("We appreciate you taking the first step towards weight loss\n\n");

        printf("-----------------------------------What is your mood on a scale of 1-10?------------------------------------------------\n");
        printf("\n\n The higher the rating,the better the mood you have \n\n");
       printf("\n Insert a rating here: \n");
        scanf("%d",&m2);

        system("cls");


          if ( m2>=1 && m2<6)
       {

           printf("Feeling sad about the weight loss? \nDon't worry. We've got your back!\n\n");

 //Recipes//
           printf("1.Baked Cheddar Eggs and Potatoes\n\n");
           printf("2.Tangy Turkey Tostadas \n\n");
           printf("3.Cauliflower Soup\n\n");
           printf("4.Slow cooked Moroccan chicken\n\n");
           printf("5.Asian Turkey Lettuce Cups\n\n");


           int f1;
           printf("Choose a number to check recipe\n\n");
           scanf("%d",&options);



           system("cls");

/*Buffer clear */
           char ch;
           ch=getchar();


           switch(options)
           {
               case 1:
                   printf(" Baked Cheddar Eggs and Potatoes: \n-3 tablespoons butter \n-1-1/2 pounds red potatoes, chopped \n-1/4 cup minced fresh parsley \n-2 garlic cloves, minced \n-3/4 teaspoon kosher salt \n-1/8 teaspoon pepper \n-8 large eggs \n-1/2 cup shredded extra-sharp cheddar cheese\n \n");
                    cal4=400;

                   char con3;
                   printf("\n\nPress 'y' or 'n' if you want to make this easy dish \n");
                   scanf("%c",&con3);

                   confirm(con3);
                   if (count==1)
                   {
                       printf(" You have gained %d calories\n\n",cal4);
                       calst(cal4);

                   }
system("pause");
                   break;


               case 2:
                 printf("Tangy Turkey Tostadas:1-1/4 pounds lean ground turkey \n 3/4 cup sliced fresh mushrooms\n1 medium green pepper, chopped\n1 small onion, chopped\n2 garlic cloves, minced\n1 can (16 ounces) kidney beans, rinsed and drained\\n1 can (4 ounces) chopped green chilies\n1 teaspoon ground cumin\n1/2 teaspoon salt\n4 drops hot pepper sauce\n1-1/2 cups (6 ounces) reduced-fat Mexican cheese blend\n1/2 cup frozen corn, thawed\n16 tostada shells\n2 cups shredded lettuce\n1 cup chopped tomatoes\n1/4 cup minced fresh cilantro \n");
                   cal5=1200;
                  char con;
                  printf("\n\nPress 'y' or 'n' if you want to make this delish milkshake \n");
                  scanf("%c",&con);

                  confirm(con);
                  if (count==1)
                  {
                      printf("You have gained %d calories\n\n",cal5);
                      calst(cal5);

                  }


 system("pause");
               break;

           }

       }





   }
                break;
               case '3':
                calred();

            case '2':
                load();
                water_menu();
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
