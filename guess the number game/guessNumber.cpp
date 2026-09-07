#include<iostream>
#include<random>
#include<time.h>
using namespace std;
int main()
{
    int guess,random;
    int guess_count=0;
    srand(time(0));
    cout<<"welcome to the game \n";
    random=rand() %100+1;

    do{
        printf("guess a numbr plz:");
        scanf("%d",&guess);
        guess_count++;
        

        if(guess < random )
        {
            printf("guess larger number \n");
        }
        else if(guess > random)
        {
            printf("guess smaller number \n");
        }
        else{
            printf("Congrats!!! you guessed the correct number attempt :%d\n",guess_count);
        }
    }while(guess != random);

    cout<<"BYE- BYE thank you for playing this game  \n";
    cout<<"game developed by : Sanyam shah\n";
    cout<<"programming language : c++";
}