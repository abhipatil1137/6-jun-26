#include <stdio.h>
#include <string.h>

int main() {
    char team[30];

    printf("Enter your favorite IPL team: ");
    scanf("%29s", team);

    if (strcmp(team, "Mumbai") == 0) {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "Chennai") == 0) {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "RCB") == 0) {
        printf("Ee Sala Cup Namde!\n");
    }
    else if (strcmp(team, "KKR") == 0) {
        printf("Korbo Lorbo Jeetbo Re!\n");
    }
    else if (strcmp(team, "SRH") == 0) {
        printf("Rise Up, Orange Army!\n");
    }
    else if (strcmp(team, "GT") == 0) {
        printf("Go Gujarat Titans!\n");
    }
    else if (strcmp(team, "RR") == 0) {
        printf("Halla Bol, Rajasthan Royals!\n");
    }
    else if (strcmp(team, "PBKS") == 0) {
        printf("Shers are ready to roar!\n");
    }
    else if (strcmp(team, "DC") == 0) {
        printf("Roar for Delhi Capitals!\n");
    }
    else if (strcmp(team, "LSG") == 0) {
        printf("Let's Go Super Giants!\n");
    }
    else {
        printf("Team not found!\n");
    }

    return 0;
}