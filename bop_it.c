/*-----------------------------------------------------------------------------
-					          SE 185 Lab 06
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name:
- 	Section:
-	NetID:
-	Date:
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/*-----------------------------------------------------------------------------
-	                             Defines
-----------------------------------------------------------------------------*/
#define TRUE 1
#define FALSE 0


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-							  Implementation
-----------------------------------------------------------------------------*/
int main(void) {
	
	
	int t, b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	int rounds = 1;
	int randNum, count= 0;
	int timeCount = 2500, timeCheck;
	srand( time(0) );
	
	
	//Starting prompt.
	printf("This is a Bop-It Game\n");
	printf("Please press a button to start the game!\n");
	
	
	//Takes the value of the buttons to start the game.
	while(b1 == 0 && b2 == 0 && b3 == 0 && b4 == 0) {
		scanf("%d,%d,%d,%d,%d", &t,&b1,&b2,&b3,&b4);
	}
		
	while( rounds ) {
				
		timeCheck = t;
			
		randNum = (rand() % 4 + 1);
				
				
		if(randNum == 1) {
			printf("Press the Triangle button.\n");
		}
				
		if(randNum == 2) { 
			printf("Press the Circle button.\n");
		}
				
		if(randNum == 3) { 
			printf("Press the Cross button.\n");
		}
			
		if(randNum == 4) { 
			printf("Press the Square button.\n");
		}	
				
				
		while(timeCheck + 260 > t) {
			scanf("%d,%d,%d,%d,%d", &t,&b1,&b2,&b3,&b4);
		}

		printf("You have %d miliseconds to press a button!\n", timeCount);
			
		timeCheck = t;
				
		while( timeCheck + timeCount >= t ) {	
		
			scanf("%d,%d,%d,%d,%d", &t,&b1,&b2,&b3,&b4);
				
					
			if(!((b1+b2+b3+b4)==0))
			{
				
				if(randNum == 1 && b1 == 1) {		//Button Value. Triangle.
					timeCount = timeCount - 100;
					count++;
					break;
				}
					
				else if(randNum == 2 && b2 == 1) {	//Button Value. Circle.
					timeCount = timeCount - 100;
					count++;
					break;
				}
				
				else if(randNum == 3 && b3 == 1) {	//Button Value. Cross.
					timeCount = timeCount - 100;
					count++;
					break;
				}
				
				else if(randNum == 4 && b4 == 1) {	//Button Value. Square.
					timeCount = timeCount - 100;
					count++;
					break;
				}
				else {							    //If no buttons are presed.	
					printf("You lose! You pressed the wrong button!");
					rounds=0;
					break;
				}
			}
		}
		if(timeCheck + timeCount < t)
		{
			printf("HaHa.. You ran out of time!!!\n");
			break;
		}
		
	}
		
printf("You made it through %d rounds. \n",count);
	
return 0;

}
/* Functions */
		
		
		
		
































