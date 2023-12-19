#include <stdio.h>
int main()
{
  int ch, ch2;
  printf("\n press 1 for english.");
  printf("\n hindi ke liye 2 dabayein.");
  printf("\n gujrati mate 3 dabavo");
  printf("\n enter your choice");
  scanf("\n %d", &ch);

  switch (ch)
  {
  case 1:
    printf("\n press 1 for recharge");
    printf("\n press 2 for help");
    printf("\n press 3 for exit");
    scanf("%d", &ch2);

    switch (ch2)
    {
    case 1:
      printf("\n recharge successfull");
      break;
    case 2:
      printf("\n we are happy to help you.!");
      break;
    case 3:
      printf("\n exit ok.");
      break;
    default:
      printf("\n invalid choice.");
      break;
    }
    break;

  case 2:
    printf("\n recharge karne ke liye 1 dabayein");
    printf("\n sahayta prapt karne k liye 2 dabayein");
    printf("\n exit karne k lie 3 dadbayein");
    scanf("\n enter your choice %d", &ch2);

    switch (ch2)
    {
    case 1:
      printf("\n aapka recharge safaltapurvak ho gaya. ");
      break;
    case 2:
      printf("\n kus der ke bad sahayta prapt hogi. ");
      break;

    case 3:
      printf("\n exit ok. ");
      break;

    default:
      printf("\n invalid choice.");
      break;
    }
    break;

  case 3:
    printf("\n recharge krwa mate 1 dabavo.");
    printf("\n madat leva  mate 2 dabavo.");
    printf("\n  bahar java mate 3 dabavo.");
    scanf("%d", &ch2);
    switch (ch2)
    {
    case 1:
      printf("\n tamaru recharge safaltapurvak thai gayu.");
      break;

    case 2:
      printf("\n thoda samayma madad prapt jashe .");
      break;

    case 3:
      printf("\n bahar ok.");
      break;

    default:
      printf("\n amany pasandagi.");
      break;
    }
    break;
  }

  return 0;
}