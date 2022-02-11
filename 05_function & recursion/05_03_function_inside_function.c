#include<stdio.h>

//call function directly or indirectly
void goodMorning();
void goodAfternoon();
void goodNight();
int main(){
goodMorning();


return 0;
}

void goodMorning(){
    printf("Good Morning Vaibhav\n");
    goodAfternoon();//****
}

void goodAfternoon(){
    printf("Good Afternoon Vaibhav\n");
    goodNight();//*****
}
void goodNight(){
    printf("Good Night Vaibhav\n");
}