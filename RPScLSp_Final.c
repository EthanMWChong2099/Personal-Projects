#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Author Ethan Chong
int Upoints = 0;
int Cpoints = 0;
char game;
char symbols[50];
void Rock(char game){
    if (game == 3){
       printf("You win, Rock beats Scissors\n");
       Upoints++;
    }
    else if (game == 4){
        printf("You win, Rock beats Lizard\n");
        Upoints++;
    }
    else if (game == 2){
        printf("You lose, Paper beats Rock\n");
        Cpoints++;
    }
    else if (game == 5){
        printf("You lose, Spock beats Rock\n");
        Cpoints++;
    } 
    else if (game == 1){
        printf("Draw same as the Program\n");
    }
   
}
void Paper(char game){
    if (game == 1){
       printf("You win, Paper beats Rock\n");
       Upoints++;
    }
    else if (game == 5){
        printf("You Win, Paper beats Spock\n");
        Upoints++;
    }
    else if (game == 4){
        printf("You lose, Lizard beat paper\n");
        Cpoints++;
    }
    else if (game == 3){
        printf("You lose, Scissors beats paper\n");
        Cpoints++;
    }
    else if (game == 2){
        printf("Draw same as the Program\n");
    }
}

void Scissors(char game){
    if (game == 4){
        printf("You win, Scissors beats Lizard\n");
        Upoints++;
    }
    else if (game == 2){
       printf("You win, Scissors beats Paper\n");
       Upoints++;
    }
    else if (game == 1){
        printf("You lose, Rock beats Scissors\n");
        Cpoints++;
    }
    else if (game == 5){
        printf("You lose, Spock beats Scissors\n");
        Cpoints++;
    }
    else if (game == 3){
        printf("Draw same as the Program\n");
    }
}
void Lizard(char game){
    if (game == 2){
        printf("You win, Lizard beats Paper\n");
        Upoints++;
    }
    else if (game == 5){
        printf("You win, Lizard beats Spock\n");
        Upoints++;
    }
    else if (game == 1){
        printf("You lose, Rock beats Lizard\n");
        Cpoints++;
    }
    else if (game == 3){
        printf("You lose, Scissors beats Lizard\n");
        Cpoints++;
    }
    else if (game == 4){
        printf("Draw same as the Program\n");
    }
}
void Spock(char game){
    if (game == 1){
        printf("You win, Spock beats Rock\n");
        Upoints++;
    }
    else if (game == 3){
        printf("You win, Spock beats Scissors\n");
        Upoints++;
    }
    else if (game == 4){
        printf("You lose, Lizard beats Spock\n");
        Cpoints++;
    }
    else if (game == 2){
        printf("You lose, Paper beats Spock\n");
        Cpoints++;
    }
    else if (game == 5){
        printf("Draw same as the Program\n");
    }
}
int main(){
    int numberOfTrials=0; //number of Trials
    srand(time(0));
    printf("Lets play Rock, Paper, Scissors...\nLizard, SPOCK!!!\n");
    printf("Enter the number of trials:\n");
    scanf("%d",&numberOfTrials);
    printf("Enter Rock, Paper, Scissors, Lizard, Spock\n");

    for (int i = 0; i < numberOfTrials; i++){
        game=rand()%5+1;
        printf("Enter your choice:\n");
        scanf("%s",&symbols);

        //Rock operation
        if (strcmp(symbols, "Rock")==0){
            Rock(game);
        }
        //Paper operation
        if (strcmp(symbols, "Paper")==0){
            Paper(game);
        }
        //Scissors operation
        if (strcmp(symbols, "Scissors")==0){
            Scissors(game);
        }
        //Lizard operation
        if (strcmp(symbols, "Lizard")==0){
            Lizard(game);
        }
        //Spock operation
        if (strcmp(symbols, "Spock")==0){
            Spock(game);
        }
    } 
    if(Cpoints > Upoints){
        int Cdiff = Cpoints - Upoints;
        printf("The Program wins %d and you got %d\n. You only needed %d points\n",Cpoints,Upoints,Cdiff);
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