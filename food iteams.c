#include<stdio.h>
main()
{
    printf("Enter any number 1 to 5 \n");
    int food=0;
    scanf("%d",&food);
    switch(food)
    {
case 1:
    printf("Food iteam-Sandwitch \nPrice-Rs 149");
    break;
case 2:
    printf("Food iteam-Pasta \nPrice-Rs 179");
    break;
  case 3:
    printf("Food iteam-French Fries \nPrice-Rs 99");
    break;
      case 4:
    printf("Food iteam-Burger \nPrice-Rs 129");
    break;
     case 5:
    printf("Food iteam-Pizza \nPrice-Rs 239");
    break;
    default :printf("There is no any food iteams");
}
}
