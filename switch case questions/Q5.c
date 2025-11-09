// trafic light

#include <stdio.h>

int main() {
    char color;

    printf("Traffic Light \n");
    printf("Enter color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &color);  // note the space before %c to ignore newline

    switch (color) {
        case 'R':
        case 'r':
            printf("Red Light → STOP!\n");
            break;

        case 'Y':
        case 'y':
            printf("Yellow Light → GET READY!\n");
            break;

        case 'G':
        case 'g':
            printf("Green Light → GO!\n");
            break;

        default:
            printf("Invalid color! Please enter R, Y, or G.\n");
    }

    return 0;
}


//Traffic Light 
//Enter color (R for Red, Y for Yellow, G for Green): r
//Red Light → STOP!