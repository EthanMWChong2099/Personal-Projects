#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Author Ethan Chong
int Upoints = 0;
int Cpoints = 0;
char game;
char symbols[50];
//storing an integer into char game
//User chooses the function
//Rock Function
void Rock(char game){
    if  (game == 3){
       printf("You win, Rock beats Scissors\n");
       Upoints++;
    }
    else if  (game == 2){
        printf("You lose, Paper beats Rock\n");
        Cpoints++;
    }
    else if  (game == 1){
        printf("Draw same as Program\n");
    }
}
//paper function
void Paper(char game){
    if  (game == 1){
       printf("You win, Paper beats Rock\n");
       Upoints++;
    }
    else if  (game == 3){
        printf("You lose, Scissors beats paper\n");
        Cpoints++;
    }
    else if  (game == 2){
        printf("Draw same as Program\n");
    }
}
//Scissos function 
void Scissors(char game){
    if  (game == 2){
       printf("You win, Scissors beats Paper\n");
       Upoints++;
    }
    else if  (game == 1){
        printf("You lose, Rock beats Scissors\n");
        Cpoints++;
    }
    else if  (game == 3){
        printf("Draw same as Program\n");
    }
}
int main(){
    int numberOfTrials=0; //number of Trials
    srand(time(0));
    printf("Lets play Rock, Paper, Scissors!!\n");
    printf("Enter the number of trials:\n");
    scanf("%d",&numberOfTrials);
    printf("Enter Rock, Paper and Scissors\n");
    for (int i = 0; i < numberOfTrials; i++){
        game=rand()%3+1;
        printf("Enter your choice:\n");
        scanf("%s",&symbols);
        
        //Rock operation
        if  (strcmp(symbols, "Rock")==0){
            Rock(game);
        }
        //Paper operation
        if  (strcmp(symbols,"Paper")==0){
            Paper(game);
        }
        //Scissors operation
        if  (strcmp(symbols,"Scissors")==0){
            Scissors(game);
        }
    } 
    if(Cpoints > Upoints){
        int Cdiff = Cpoints - Upoints;
        printf("Program wins %d and you got %d\n. You only needed %d points\n",Cpoints,Upoints,Cdiff);
    }
    else if(Upoints > Cpoints){
        int Udiff = Upoints - Cpoints;
        printf("User wins %d. The Program had %d points. It was only %d points away\n",Upoints,Cpoints,Udiff);
    }
    else if(Cpoints = Upoints){
        printf("No one wins! You got %d. Better luck next time :)\n",Upoints);
    }
    return 0;
}