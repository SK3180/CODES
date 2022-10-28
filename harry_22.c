#include <stdio.h>
int main()
{
    char input;
    float value;

    while (1)
    {
        printf("    Welcome to Unit Conversion\n");        
        printf("Enter q For quit\n1 - kms to miles\n2 - inches to foot\n3 - cms to inches\n4 - pound to kgs\n5 - inches to meters\n");
        scanf("%c", &input);
    
        switch (input)
        {
        case 'q':
        
            printf("The Unit Conversion is Quitting...");
            goto end;
            break;
        
        case '1':
        {
            printf("Enter The Value For Conversion = \n");
            scanf("%f", &value);
            float miles = value / 1.6;
            printf("%.3f Miles\n", miles);
            break;
        }
        case '2':
        {
            printf("Enter The Value For Conversion = \n");
            scanf("%f", &value);
            float foot = value / 12;
            printf("%.3f Foot\n", foot);
            break;
        }
        case '3':
        {
            printf("Enter The Value For Conversion = \n");
            scanf("%f", &value);
            float inches = value / 2.54;
            printf("%.3f Inches\n", inches);
            break;
        }
        case '4':
        {
            printf("Enter The Value For Conversion = \n");
            scanf("%f", &value);
            float kgs = value / 12;
            printf("%.3f Kgs\n", kgs);
            break;
        }
        case '5':
        {
            printf("Enter The Value For Conversion = \n");
            scanf("%f", &value);
            float meter = value / 39.37;
            printf("%.3f Meters\n", meter);
            break;
        }
        default:
            break;
        }
    }
end:
    return 0;
}