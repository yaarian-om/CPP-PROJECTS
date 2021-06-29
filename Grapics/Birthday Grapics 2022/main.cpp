#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

// Function to draw
void Motion(void)
{

	int i, j = 0, gd = DETECT, gm;

	initgraph(&gd, &gm, " ");
	//rectangle(0,0,639,479);

	/// Girl Standing
	circle(530,385,20);
	line(533,403,533,443); /// Body
	line(533,409,523,422); /// Boob 1
	line(523,422,533,430); /// Boob 2
	line(533,413,553,420);
	line(553,420,542,435);
	line(533,443,523,477);
	line(533,443,549,477);
	line(528,426,516,441);
	line(539,370,566,365); /// hair 1
	line(541,370,568,365); /// hair 1
	line(543,370,570,365); /// hair 1
	line(545,370,566,365); /// hair 1
	line(547,370,572,365); /// hair 1
	line(566,361,575,400); /// hair 2
	//line(565,391,581,406);  /// hair 3
	line(550,369,572,378);  /// hair 4
	line(572,378,588,404);  /// hair 5
	line(554,380,582,406);  /// hair 6
	line(552,360,564,394);  /// hair 7
	line(552,360,566,394);  /// hair 7
	line(552,360,568,394);  /// hair 7
	line(552,360,570,394);  /// hair 7
	line(552,360,572,394);  /// hair 7
	line(552,360,574,394);  /// hair 7

     for (i = 0; i <= 350; i = i + 10/** Speed */)
     {
         /// Boy Moving
         setcolor(WHITE);

         circle(92+i,359,20);  /// Head
         line(92+i,380,92+i,424); /// Body
         line(92+i,424,76+i,444); /// Thigh 1
         line(92+i,424,108+i,444); /// Thigh 2
         line(76+i,444,76+i,480);  /// Leg 1
         line(108+i,444,108+i,480); /// Leg 2
         line(92+i,395,125+i,418); /// Arm 1
         line(92+i,410,112+i,422);  /// Arm 2
         line(125+i,418,137+i,399);   /// Hand 1
         line(112+i,422,137+i,399);  /// Hand 2
         circle(138+i,371,10); /// chocolate circle
         line(138+i,381,137+i,399); /// chocolate hand

         delay(100);

		// To erase previous drawn car, draw
		// the whole car at same possition
		// but color using black
		setcolor(BLACK);

         circle(92+i,359,20);  /// Head
         line(92+i,380,92+i,424); /// Body
         line(92+i,424,76+i,444); /// Thigh 1
         line(92+i,424,108+i,444); /// Thigh 2
         line(76+i,444,76+i,480);  /// Leg 1
         line(108+i,444,108+i,480); /// Leg 2
         line(92+i,395,125+i,418); /// Arm 1
         line(92+i,410,112+i,422);  /// Arm 2
         line(125+i,418,137+i,399);   /// Hand 1
         line(112+i,422,137+i,399);  /// Hand 2
         circle(138+i,371,10); /// Flower 1
         line(138+i,381,137+i,399); /// chocolate hand

     }
        /// Boy Stands
         setcolor(WHITE);
         circle(92+i,359,20);  /// Head
         line(92+i,380,92+i,424); /// Body
         line(92+i,424,76+i,444); /// Thigh 1
         line(92+i,424,108+i,444); /// Thigh 2
         line(76+i,444,76+i,480);  /// Leg 1
         line(108+i,444,108+i,480); /// Leg 2
         line(92+i,395,125+i,418); /// Arm 1
         line(92+i,410,112+i,422);  /// Arm 2
         line(125+i,418,137+i,399);   /// Hand 1
         line(112+i,422,137+i,399);  /// Hand 2
         circle(138+i,371,10); /// Flower 1
         line(138+i,381,137+i,399); /// chocolate hand


	getch();

	closegraph();
}

// Driver code
int main()
{
	Motion();

	return 0;
}

