#include <stdio.h>
#include <string.h>

struct login {

    char name[100];
    int age,weight;
    float height;

}l;

struct goals {

    char goal[100];
}g;

struct mood{

    int scale;
    char emoji[100];
}m;

int main()


{

    /*login */

    printf("Enter your name: ");
    gets(l.name);
    printf("Enter your Weight: ");
    scanf("%d",&l.weight);
    printf("Enter your Height: ");
    scanf("%f",&l.height);
    fflush(stdin);

    /*needs to clear the screen and clear a template */

    /*login ends */


    /* Goal- there will be a condition here that leads to specific diets */

    printf("What is your goal?: ");
    gets(g.goal);


    /*mood */
    printf("On a scale of 1-10 \n How would you rate your mood today?\n");
    scanf("%d",m.scale);









     return 0;
}
