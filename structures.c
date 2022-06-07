#include <stdio.h>
#include <math.h>

struct rectangle{
    int length;
    int breadth;
} r1;


void Cal_Area(int length,int breadth);
void Cal_perimeter(int length,int breadth);

int main(void){
    //create a function that takes the lenght and breadth from the structure and
    // returns the area and the perimeter

    // take inputs from the user 
    printf("-----CALCULATE THE AREA AND PARAMETER OF A RECTANGLE-----\n");
    printf("Length: \t");
    scanf("%d", &r1.length);
    printf("Breadth: \t");
    scanf("%d", &r1.breadth);

    // call the Cal_area and Cal_perimeter functions
    Cal_Area(r1.length,r1.breadth);
    Cal_perimeter(r1.length,r1.breadth);

    // Print two newlines
    printf("\n");
    printf("\n");

    return 0;

}

// Declare the Cal_area function
void Cal_Area(int length,int breadth){
    int area = length * breadth;
    printf("The area of the rectangle with %d cm length and %d cm breadth is %dcm^2\n",length,breadth,area);
}


// Declare the Cal_perimeter function
void Cal_perimeter(int length,int breadth){
    int perimeter = 2 * length + 2 * breadth;
    printf("The perimeter of the rectangle with length %dcm and breadth %dcm is %dcm\n",length,breadth,perimeter); 
}