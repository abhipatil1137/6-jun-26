#include <stdio.h>

int main()
{
    // 2D array: rows = matches, columns = team scores
    int cricketScores[3][2] = {
        {180, 165},   // Match 1: Team 1, Team 2
        {145, 190},   // Match 2
        {210, 205}    // Match 3
    };

    int highest;

    // Find highest score from each match
    for(int i = 0; i < 3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            highest = cricketScores[i][0];
        }
        else
        {
            highest = cricketScores[i][1];
        }

        printf("Highest score in Match %d: %d runs\n", i + 1, highest);
    }

    return 0;
}