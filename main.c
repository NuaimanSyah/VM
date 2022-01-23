#include <stdio.h>
#include <stdlib.h>
void billing(float); //declaration of billing function
void menu(); //declaration of menu function
void fast_food(); //declaration of fast food function
void cold_drinks(); //declaration of cold drinks function
void ice_cream(); //declaration of ice cream function
int main()
{
    menu(); //calling menu function
}
void menu()
{
    int opt;
    system("cls");
    printf("\n\n   **VENDING MACHINE**\n\n");
    printf("    [1] FAST FOOD\n");
    printf("    [2] COLD DRINKS\n");
    printf("    [3] ICE CREAM\n");
    printf("\n    Enter Your Choice : ");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
            fast_food(); //calling fast food function
            break;
        case 2:
            cold_drinks(); //calling cold drinks function
            break;
        case 3:
            ice_cream(); //calling ice cream function
            break;
        default:
            printf("\n\n\tINVALID INPUT"); //showing invalid message when user enter invalid input
            menu(); //calling menu function
    }
}
void fast_food()
{
    int opt, opt2, x, i, j; //both i and j are counter variables
    float a[] = {16.00,24.00,30.00}; //price of different size of PIZZA to display
    float b[] = {4.60,12.30,2.30}; //price of BURGER, TACO, SANDWICH to display
    float price;
    char confirm;
    system("cls");
    printf("\n\n   **FAST FOOD**\n\n");
    printf("    [1] PIZZA\n");
    printf("    [2] BURGER\n");
    printf("    [3] TACO\n");
    printf("    [4] SANDWICH\n");
    printf("\n    Enter Your Choice : ");
    scanf("%d", &opt); //user enter 1,2,3 or 4
    switch(opt)
    {
        case 1: //if user enter 1, it displays the size of PIZZA
        printf("\n\tSize : [1] Regular");
        printf("\n\t       [2] Medium");
        printf("\n\t       [3] Large");
        printf("\n\n\tEnter Your Choice : ");
        scanf("%d", &opt2);
        switch(opt2)
        {
            case 1: /*if user enter 1, it displays the price of a Regular PIZZA, asks user to enter the quantity of pizza
                      that user desires,asks for order confirmation and then displays the total amount to be paid*/
                i=0; //a[0]=16.00
                ch:
                printf("\n\tPrice : RM %.2f", a[i]);
                printf("\n\tHow many do you want? : ");
                scanf("%d", &x);
                printf("\n\t(Press Y/y for Yes or N/n for No)");

                conf1:
                printf("\n\tConfirm Your Order [Y/N] : ");
                scanf(" %c%*c", &confirm);
                if(confirm=='Y'||confirm=='y'){ //if user confirmed the order, then it will proceed for payment
                    goto payment1;}
                else if(confirm=='N'||confirm=='n'){ /*if user still doubt or  want to changed the desired quantity of burger,
                                                   it will ask once again for the quantity that user desired and asks
                                                   for confirmation again*/
                    printf("\n\tEnter Quantity : ");
                    scanf("%d", &x);
                    goto conf1;}
                else{
                    printf("\n\tFAILED"); //shows failed message when user enter other than Y/y and N/n
                    fast_food();} //calling fast food fucntion

                    payment1:
                    price=x*a[i];
                    printf("\n\tYou Have to Pay RM %.2f", price);
                    billing(price); //define billing function
                    break;
            case 2: /*if user enter 2, it displays the price of a Medium PIZZA, asks user to enter the quantity of pizza
                      that user desires, asks for order confirmation and then displays the total amount to be paid*/
                i=1; //a[1]=24.00
                goto ch;
            case 3: /*if user enter 3, it displays the price of a Large PIZZA, asks user to enter the quantity of pizza
                      that user desires, asks for order confirmation and then displays the total amount to be paid*/
                i=2; //a[2]=30.00
                goto ch;
        }
            break;
        case 2: /*if user enter 2, it displays the price and size of a BURGER, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            j=0; //b[0]=4.60
            printf("\n\tPrice of BURGER : RM %.2f", b[j]);
            printf("\n\tSize : Small");

            ch2:
            printf("\n\tEnter Quantity : ");
            scanf("%d", &x);
            printf("\n\t(Press Y/y for Yes or N/n for No)");

            conf2:
            printf("\n\tConfirm Your Order [Y/N] : ");
            scanf(" %c%*c", &confirm);
            if(confirm=='Y'||confirm=='y'){
                goto payment2;}
            else if(confirm=='N'||confirm=='n'){
                printf("\n\tEnter Quantity : ");
                scanf("%d", &x);
                goto conf2;}
            else{
                printf("\n\tFAILED");
                fast_food();} //calling fast food function when user enter invalid input

            payment2:
            price=x*b[j];
            printf("\n\tYou Have to Pay RM %.2f", price);
            billing(price); //define billing fucntion
            break;
        case 3: /*displays the price and size of a TACO, asks user to enter the quantity of pizza that user desires,
                  asks for order confirmation and then displays the total amount to be paid*/
            j=1; //b[1]=12.30
            printf("\n\tPrice of TACO : RM %.2f", b[j]);
            printf("\n\tSize : Large");
            goto ch2;
        case 4: /*displays the price and size of a SANDWICH, asks user to enter the quantity of pizza that user desires,
                  asks for order confirmation and then displays the total amount to be paid*/
            j=2; //b[2]=2.30
            printf("\n\tPrice of SANDWICH : RM %.2f", b[j]);
            printf("\n\tSize : Small");
            goto ch2;
        default:
            printf("\n\n\tINVALID INPUT");
            menu(); //calling menu function when user enter invalid input
    }
}
void cold_drinks()
{
    int option, x, i; //i is counter variable
    float a[]={2.50,2.00,2.20,1.60}; //price of PEPSI, MOUNTAIN DEW, COKE, ICE LEMON TEA to display
    float price;
    char confirm;
    system("cls");
    printf("\n\n**COLD DRINKS**\n\n");
    printf("    [1] PEPSI\n");
    printf("    [2] MOUNTAIN DEW\n");
    printf("    [3] COKE\n");
    printf("    [4] ICE LEMON TEA\n");
    printf("\n    Enter Your Choice : ");
    scanf("%d", &option);
    switch(option)
    {
        case 1: /*if user enter 1, it displays the price and size of a PEPSI, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=0; //a[0]=2.50
            printf("\n\tPrice of PEPSI : RM %.2f", a[i]);
            printf("\n\tQuantity : 200ml");

            ch1:
            printf("\n\tEnter Quantity : ");
            scanf("%d", &x);
            printf("\n\tPress Y/y for Yes or N/n for No");

            conf1:
            printf("\n\tConfirm Your Order [Y/N] : ");
            scanf(" %c%*c", &confirm);
            if(confirm=='Y'||confirm=='y'){
                goto payment1;}
            else if(confirm=='N'||confirm=='n'){
                printf("\n\tEnter Quantity : ");
                scanf("%d", &x);
                goto conf1;}
            else{
                printf("\n\tFAILED");
                cold_drinks();} //calling cold drinks function when user enter invalid input

            payment1:
            price=x*a[i];
            printf("\n\tYou Have to Pay RM %.2f", price);
            billing(price); //define billing function
            break;
        case 2: /*if user enter 2, it displays the price and size of a MOUNTAIN DEW, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=1; //a[1]=2.00
            printf("\n\tPrice of MOUNTAIN DEW : RM %.2f", a[i]);
            printf("\n\tQuantity : 200ml");
            goto ch1;
        case 3: /*if user enter 3, it displays the price and size of a COKE, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=2; //a[2]=2.20
            printf("\n\tPrice of COKE : RM %.2f", a[i]);
            printf("\n\tQuantity : 210ml");
            goto ch1;
        case 4: /*if user enter 4, it displays the price and size of a PEPSI, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=3; //a[3]=1.60
            printf("\n\tPrice of ICE LEMON TEA : RM %.2f", a[i]);
            printf("\n\tQuantity : 210ml");
            goto ch1;
        default:
            printf("\n\n\tINVALID INPUT");
            menu(); //calling menu function when user enter invalid input
    }
}
void ice_cream()
{
    int opt, x, i; //i is a counter variable
    float a[]={2.00,2.40,1.80,2.10}; //price of NEOPOLITAN, CHOCOLATE, STRAWBERRY, LIME VANILLA to display
    float price;
    char confirm;

    system("cls");
    printf("\n\n**ICE CREAM**\n\n");
    printf("    [1] NEOPOLITAN\n");
    printf("    [2] CHOCOLATE\n");
    printf("    [3] STRAWBERRY\n");
    printf("    [4] LIME VANILLA\n");
    printf("\n    Enter Your Choice : ");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1: /*if user enter 1, it displays the price and size of a PEPSI, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=0; //a[0]=2.00
            printf("\n\tPrice of NEOPOLITAN : RM %.2f", a[i]);
            printf("\n\tQuantity : 64ml");

            ch1:
            printf("\n\tEnter Quantity : ");
            scanf("%d", &x);
            printf("\n\tPress Y/y for Yes or N/n for No");

            conf1:
            printf("\n\tConfirm Your Order [Y/N] : ");
            scanf(" %c%*c", &confirm);
            if(confirm=='Y'||confirm=='y'){
                goto payment1;}
            else if(confirm=='N'||confirm=='n'){
                printf("\n\tEnter Quantity : ");
                scanf("%d", &x);
                goto conf1;}
            else{
                printf("\n\tFAILED");
                ice_cream();} //calling ice cream function when user enter invalid input

            payment1:
            price=x*a[i];
            printf("\n\tYou Have to Pay RM %.2f", price);
            billing(price); //define billing fucntion
            break;
        case 2: /*if user enter 2, it displays the price and size of a CHOCOLATE, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=1; //a[1]=2.40
            printf("\n\tPrice of CHOCOLATE is : RM %.2f", a[i]);
            printf("\n\tQuantity : 70ml");
            goto ch1;
        case 3: /*if user enter 3, it displays the price and size of a PEPSI, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=2; //a[2]=1.80
            printf("\n\tPrice of STRAWBERRY : RM %.2f", a[i]);
            printf("\n\tQuantity : 60ml");
            goto ch1;
        case 4: /*if user enter 4, it displays the price and size of a PEPSI, asks user to enter the quantity of pizza
                  that user desires, asks for order confirmation and then displays the total amount to be paid*/
            i=3; //a[3]=2.10
            printf("\n\tPrice of LIME VANILLA : RM %.2f", a[i]);
            printf("\n\tQuantity : 65ml");
            goto ch1;
        default:
            printf("\n\n\tINVALID INPUT");
            menu(); //calling menu function when user enter invalid input
    }
}
void billing(float p) //function definition of billing function
{
    float amt; //amount
    char ch; //choice
    printf("\n\tEnter Amount : ");
    scanf("%f", &amt); //user enter amount to be paid
    if(amt<p)
    {
        printf("\n\tInsufficient Amount!!"); /*if the amount to be paid that user entered is less than the actual price, it
                                               displays Insufficient Amount!!*/
        menu(); // calling menu function
    }
    else //if user inputted other than if condition(not satisfied the condition), it will displays the change
    {
        printf("\n\tYour Change : %.2f", amt-p);
        printf("\n\tPlease Collect Your Change...");
    }
    printf("\n\n\t(Press Y/y for Yes or N/n for No)");
    printf("\n\tDO YOU WISH TO BUY ANY THING MORE? [Y/N] : ");
    scanf(" %c", &ch);
    if(ch=='Y'||ch=='y'){
        menu();} //if user desires to buy again, it will call the menu function
    else if(ch=='N'||ch=='n'){
        printf("\n\t***THANK YOU***");} //if user does not wish to buy anymore, it will print ***THANK YOU***
}

