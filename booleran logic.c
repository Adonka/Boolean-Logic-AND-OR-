/*Program Name: Choosing Language plus bitwise coding as a example*/
/*Author: "Adolfo Nakamura"*/
/*Date Created: 07/14/2019*/
/*Date Last Edited: 07/15/2019*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
int language;
bool flag = 0;

printf("Enter a value: \n");
scanf("%d", &language);
if ( language == 1 && language != 2 && language != 3)
printf("You have chosen English not Spanish. ");
else if ( language == 2 && language != 1 && language != 3)
{printf("You have chosen English and Spanish. "); flag = 1;}
else if ( language == 3 && language != 2 && language != 3)
printf("You have chosen Spanish not English. ");
else if ( language == 1 && language != 2 || language == 4)
printf("You have chosen only English. ");
else if ( language == 3 && language != 2 || language == 5)
printf("You have chosen only Spanish. ");
else 
printf ("Please type numbers from 1 to 5. \n");

if (flag)
printf("True \n");
else
printf("False \n");
/*BITWISE  &  is different than  &&  */
printf("From here, bitwise coding is started.");
   int a = 3, b = 7, c = 0;
   c = a & b;
   printf("\nc=%d  c is zero when c = a & b\n", c);
   c = a && b;
   printf("c=%d  c is one when c = a && b\n", c);   
   
   a = 1, b = 10, c = 0;
   c = a & b;
   printf("\nc=%d  c is zero when c = a & b\n", c);
   c = a && b;
   printf("c=%d  c is one when c = a && b\n", c);
   
   c = 0;
   printf("\nc=%d then & mask the bits with 1010 becomes\n", c);
   c = c & 1010;
   printf("c=%d\n", c);
   /*c=0 because 16 in bits = 10000
    then c & 10000 turns to zero the one bits
    so the result 0000 equals */
    
    
    
   c = 8;
   printf("\nc=%d then | mask the bits with 0010 becomes\n", c);
   c = c | 2;
   printf("c=%d\n", c);
   /*c=10 because 10 in bits = 1010
    then c | 2   8 in bits = 0010 turns on the two bit
    but the two bit was already on so the result 1010 equals 10 */
}