//Find the output
#include<stdio.h>
int main() {
    int a = 0,b;
    if(a<1) printf("XXX");//Block L1 printf("YYY\n");//L2
    if(a>1) printf("000");//Block printf("111 \n");
    if(a=1)
    printf("Comp Sc");//Block L1 printf(" Engineering \n");//L2
    if(b=a++)
    printf("\nComp Sc");//Block L1 printf(" Engineering\n");//L2
    if(b=++a)
    printf("\nComp Sc");//Block L1 printf(" Engineering\n");//L2
return 0; 
}

#include<stdio.h>
int main()
{
    int po;
    printf("Press 1,if the object is at Infinity\n");
    printf("Press 2,if the object is Beyond the center of curvature C\n"); printf("Press 3,if the object is at the center of curvature\n"); printf("Press 4,if the object is Between C and F\n");
    printf("Press 5,if the object is at focus F\n");
    printf("\n\nEnter your choice: ");
    scanf("%d", &po);
    if(po==1)
    {
    printf("The image is at F, Highly Diminished, Real and Inverted"); }
    else if(po==2) {
    printf("The image is Between F and C, Diminished, Real and Inverted"); }
    else if(po==3) {
    printf("The image is at C, Same Size, Real and Inverted"); }
    else if(po==4) {
    printf("The image is Beyond C, Enlarged, Real and Inverted"); }
    else if(po==5) {
    printf("The image is at Infinity, Highly Enlarged, Real and Inverted"); }
    else{
    printf("\nINVALID INPUT");
    }
return 0; }
