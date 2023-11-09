#include <stdio.h>
#include <math.h>

int main()
{
    double lemda, theta, d;
    int m;
    printf("Enter wavelength (in nm):");
    scanf("%lf", &lemda);
    if (lemda < 380 || lemda > 780)
    {
        printf("Out of the range. Please enter a valid number.\n");
    }
    else
    {
        printf("Enter angle (in degree):");
        scanf("%lf", &theta);
        printf("Enter slit separation (in micrometer):");
        scanf("%lf", &d);
        m = ceil((d * 1e-6) * sin(theta * (M_PI / 180)) / (lemda * 1e-9));
        if (m < 0)
        {
            printf("No maxima observed\n");
        }
        else
        {
            printf("%d th order maxima\n", m);
        }
        if (lemda >= 380 && lemda < 450)
        {
            printf("Color: Violet\n");
        }
        else if (lemda >= 450 && lemda < 485)
        {
            printf("Color: Blue\n");
        }
        else if (lemda >= 485 && lemda < 500)
        {
            printf("Color: Cyan\n");
        }
        else if (lemda >= 500 && lemda < 565)
        {
            printf("Color: Green\n");
        }
        else if (lemda >= 565 && lemda < 590)
        {
            printf("Color: Yellow\n");
        }
        else if (lemda >= 590 && lemda < 625)
        {
            printf("Color: Orange\n");
        }
        else if (lemda >= 625 && lemda < 750)
        {
            printf("Color: Red\n");
        }
        else
        {
            printf("Color: Unknown\n");
        }
    }

    return 0;
}
