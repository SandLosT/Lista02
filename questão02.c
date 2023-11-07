#include <stdio.h>

int main() {
    int strengthTeam1[11] = {0}, strengthTeam2[11] = {0};
    char nameTeam1[31], nameTeam2[31];
    char namePlayer[31], position;
    int skill;

    float calculateWeightedStrength(int strengths[]) {
        return (8 * strengths[0] + 10 * (strengths[1] + strengths[2]) + 5 * (strengths[3] + strengths[4]) + 8 * (strengths[5] + strengths[6]) + 11 * (strengths[7] + strengths[8]) + 12 * (strengths[9] + strengths[10])) / 100.0;
    }

    scanf(" %30[^\n]", nameTeam1);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", namePlayer, &position, &skill);

        int pos = (position == 'L') ? (strengthTeam1[1] == 0) ? 1 : 2 :
                  (position == 'Z') ? (strengthTeam1[3] == 0) ? 3 : 4 :
                  (position == 'V') ? (strengthTeam1[5] == 0) ? 5 : 6 :
                  (position == 'M') ? (strengthTeam1[7] == 0) ? 7 : 8 :
                  (position == 'A') ? (strengthTeam1[9] == 0) ? 9 : 10 : 0;

        if (strengthTeam1[pos] == 0)
            strengthTeam1[pos] = skill;
    }

    scanf(" %30[^\n]", nameTeam2);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", namePlayer, &position, &skill);

        int pos = (position == 'L') ? (strengthTeam2[1] == 0) ? 1 : 2 :
                  (position == 'Z') ? (strengthTeam2[3] == 0) ? 3 : 4 :
                  (position == 'V') ? (strengthTeam2[5] == 0) ? 5 : 6 :
                  (position == 'M') ? (strengthTeam2[7] == 0) ? 7 : 8 :
                  (position == 'A') ? (strengthTeam2[9] == 0) ? 9 : 10 : 0;

        if (strengthTeam2[pos] == 0)
            strengthTeam2[pos] = skill;
    }

    float strength1 = calculateWeightedStrength(strengthTeam1);
    float strength2 = calculateWeightedStrength(strengthTeam2);

    printf("%s: %.2f de forca\n%s: %.2f de forca\n", nameTeam1, strength1, nameTeam2, strength2);

    if (strength1 > strength2)
        printf("%s eh mais forte\n", nameTeam1);
    else if (strength2 > strength1)
        printf("%s eh mais forte\n", nameTeam2);
    else
        printf("Os times têm a mesma força\n");

    return 0;
}
