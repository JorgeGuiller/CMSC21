#include <stdio.h>
#include <math.h>

struct line {
    struct point { // (x1, y1), (x2, y2)
        float x;
        float y;
    } point1, point2;
    float slope;
    float midpoint[2]; // set dimension as 2 since 2 mid points wil be utilized
    float distance;
};

// Function Declarations
void solveSlope(struct line *p);
void solveMidpoint(struct line *p);
void solveDistance(struct line *p);
void getSlopeInterceptForm(struct line *p);

void solveSlope(struct line *p) {
    float slope = (p->point2.y - p->point1.y) / (p->point2.x - p->point1.x); // formula (rise over run): (y2 - y1) / (x2 - x1)
    p->slope = slope; // utilize arrow opertaor to store value of slope to line.slope
}

void solveMidpoint(struct line *p) {
    float x, y;
    x = (p->point1.x + p->point2.x) / 2; //Formula: Mid point of x coordinate: (x1 + x2) / 2
    y = (p->point1.y + p->point2.y) / 2; //Formula: Mid point of y coordinate: (y1 + y2) / 2
    p->midpoint[0] = x; // utilize arrow opertaor to store value of x coordinate midpoint to line.midpoint[0]
    p->midpoint[1] = y; // utilize arrow opertaor to store value of y coordinate midpoint to line.midpoint[1]
}

void solveDistance(struct line *p) {
    float x, y, distance;
    x = pow((p->point1.x - p->point2.x), 2); //Formula of distance of x coordinates: (x1 - x2)^2
    y = pow((p->point1.y - p->point2.y), 2); //Formula of distance of y coordinates: (y1 - y2)^2
    distance = sqrt(x + y); //Formula of point distance: sqrt(x1 - x2)^2 + (y1 - y2)^2
    p->distance = distance; // utilize arrow opertaor to store value of distance to line.distance
}

void getSlopeInterceptForm(struct line *p) {
    float b = p->point1.y - (p->slope * p->point1.x); // Solve for b: b = y - mx
    printf("\nSlope-intercept form: y = %gx + %g", p->slope, b); // utilized arrow operator to access slope
}


int main(void) {
    struct line line;

    printf("Enter first x and y: ");
    scanf("%f %f", &line.point1.x, &line.point1.y); // first point:  (x1, y1)
    printf("Enter second x and y: ");
    scanf("%f %f", &line.point2.x, &line.point2.y); // second point: (x2, y2)

    solveSlope(&line);
    solveMidpoint(&line);
    solveDistance(&line);

    //Out display code bloack
    printf("\nSlope: m = %g\nMidpoint = (%g, %g)\nDistance between two points: d = %g", line.slope,line.midpoint[0], line.midpoint[1],line.distance);
    getSlopeInterceptForm(&line);
}

