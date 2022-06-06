#include <stdio.h>
#include <math.h>

// declaring structure and variables
struct line{
    struct point{
        float x;
        float y;
    }point1, point2;

    float midpoint;
    float slope;
    float distance;
} line1;

// SLOPE
float solveSlope(struct line line1){
    float slope;
    slope = (line1.point2.y - line1.point1.y) / ( line1.point2.x - line1.point1.x);

    return slope;
}

// MIDPOINT
void solveMidpoint(struct line line1){
    float x, y;

    x = (line1.point1.x + line1.point2.x) / 2;
    y = (line1.point1.y + line1.point2.y) / 2;

    printf("Midpoint: (%g, %g)", x,y);
}

// DISTANCE
float solveDistance(struct line line1){
    float distance, xSquared, ySquared;

    // squares values needed for distance formula
    xSquared = pow(line1.point1.x - line1.point2.x, 2);
    ySquared = pow(line1.point1.y - line1.point2.y, 2);

    distance = sqrt(xSquared + ySquared);

    return distance;
}

// SLOPE INTERCEPT FORM
void getSlopeInterceptForm(struct line line1){
    float m, b;

    m = solveSlope(line1);
    b = line1.point2.y - (m * line1.point2.x);

    printf("Slope Intercept Form: y = %gx + (%g)",m ,b);
}

int main(){
    // USER INPUT
    // inputs values in nested structure 'point'
    printf("Enter x and y for point 1: ");
    scanf("%g %g", &line1.point1.x, &line1.point1.y);
    printf("Enter x and y for point 2: ");
    scanf("%g %g", &line1.point2.x, &line1.point2.y);

    // DISPLAY OF OUTPUTS
    // calls functions with structure as parameters
    printf("Slope: %g\n", solveSlope(line1));
    solveMidpoint(line1);
    printf("\nDistance between 2 points: %g\n", solveDistance(line1));
    getSlopeInterceptForm(line1);
}
