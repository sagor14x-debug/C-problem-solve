
// #include <stdio.h>

// int main()
// {
//     float rating;
//     int years;

//     printf("Enter Performance Rating: ");
//     scanf("%f", &rating);

//     printf("Enter Years of Service: ");
//     scanf("%d", &years);

//     if (rating >= 4.5)
//     {
//         if (years >= 3)
//         {
//             printf("Eligible for Promotion");
//         }
//         else
//         {
//             printf("Not Eligible for Promotion");
//         }
//     }
//     else if (rating >= 4.0)
//     {
//         if (years >= 5)
//         {
//             printf("Eligible for Promotion");
//         }
//         else
//         {
//             printf("Not Eligible for Promotion");
//         }
//     }
//     else
//     {
//         printf("Not Eligible for Promotion");
//     }

//     return 0;
// }




#include <stdio.h>

int main() {

char var;
printf ("Enter any character:");
scanf("%c", &var);

switch(var)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf(" It is a vowel.");
break;
default :printf("It is not a vowel.");
}
}
