#include <stdio.h>


struct complex
{
    int real;
    int img;
};

struct complex multiply(struct complex c1, struct complex c2);
void display (struct complex x);

int main()
{
    struct complex c1, c2;
    printf("\nEnter real and imaginary part of first complex number: ");
    scanf("%d%d", &c1.real, &c1.img);
    printf("\nEnter real and imaginary part of second complex number: ");
    scanf("%d%d", &c2.real, &c2.img);

    display(multiply(c1,c2));


}

struct complex multiply(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real * c2.real - c1.img * c2.img;
    c3.img = c1.real * c2.img + c1.img * c2. real;
    return c3;

}

void display (struct complex x)
{
    printf("The multiplication of two complex numbers is: %d + %di", x.real, x.img );
}



