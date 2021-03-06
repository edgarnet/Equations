/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  This program is a collection of calculations for various equations.
 *    		    The computations are dependent on user input for constant variables.
 *
 *        Version:  1.0
 *        Created:  9/1/2016 8:30:12 PM
 *       Revision:  none
 *       Compiler:  msft c
 *
 *         Author:  Edgar Perez 
 *   Organization:  Washington State University
 *  Collaborators:  Jasdeep Signh
 *
 * =====================================================================================
 */

#include	<stdio.h>
#include	<math.h>

#define		PI	3.141592f
#define		POWER	2
#define		ONE	1

int main(void){

	/* Part 1: Newton's Second Law of Motion */

	double mass = 0, acceleration = 0;

	printf("Please enter the mass and acceleration <both floating-point values> for use in Newton's Second Law: ");
	scanf("%lf %lf", &mass, &acceleration);

	printf("Newton's Second Law: force = mass * acceleration = %lf * %lf = %lf\n\n", mass, acceleration, (mass * acceleration));

	/* Part 2: Volume of a cylinder */

	double radius = 0, height = 0;

	printf("Please enter the radius and height of a cylinder <both floating-point values> for use in a volume of cylinder equation: ");
	scanf("%lf %lf", &radius, &height);

	printf("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = %lf * %lf * %lf = %lf\n\n", PI, pow(radius,POWER), height, PI * (pow(radius,POWER)) * height);

	/* Part 3: Character encoding */

	char plaintext_character = 'a';
	int shift = 0;

	printf("Please enter a character for use in character encoding: ");
	scanf(" %c", &plaintext_character);
	printf("Please enter the shift <as an integer value> to complete the character encoding: ");
	scanf("%d", &shift);

	printf("Encoded character: ('%c' - 'A') + 'a' - %d = %c\n\n", plaintext_character, shift, (plaintext_character - 'A') + 'a' - shift);

	/* Part 4: Equivalent parallel resistance */

	int resistorOne = 0, resistorTwo = 0, resistorThree = 0;

	printf("Please enter three resistors <all as integer values> to compute the equivalent parallel resistance: ");
	scanf("%d %d %d", &resistorOne, &resistorTwo, &resistorThree);

	printf("Equivalent parallel resistance: 1 / (1 / (Resistor One + 1) / (Resistor Two + 1) / Resistor Three) = 1 / (1 / (%d + 1) / (%d + 1) / %d) = %lf\n\n", resistorOne, resistorTwo, resistorThree, 
		(ONE / ( (ONE / (double)resistorOne) + (ONE / (double)resistorTwo) + (ONE / (double)resistorThree))));
	
	/* Part 5: Resistive divider */
	
	int resDivOne = 0, resDivTwo = 0;
	double V_in = 0;

	printf("Please enter two new resistor values <both as integer values> and voltage input <as a floating-point value> to find the voltage output: ");
	scanf("%d %d %lf", &resDivOne, &resDivTwo, &V_in);

	printf("Voltage Output: voltage_output = Resistor Two / (Resistor One + Resistor Two) * voltage_intput = %d / (%d + %d) * %lf = %lf\n\n", resDivTwo, resDivOne, resDivTwo, V_in, (double)(resDivTwo / (double)(resDivOne + resDivTwo)) * V_in);

	/* Part 6: Distance Formula */

	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	
	printf("Please enter two coordinates (x1, y1) and (x2, y2) <all as floating-point values> to calculate their distance: ");
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

	printf("Distance: distance_apart = sqrt( (x1 - x2)^2 + (y1 - y2)^2 ) = sqrt( (%lf - %lf)^2 + (%lf - %lf)^2 ) = %lf\n\n", x1, x2, y1, y2,
			sqrt( pow( (x1 - x2), POWER ) + pow( (y1 - y2), POWER )));

	/* Part 7: General Equation */
	
	double x = 0, z = 0;
	int a = 0;

	printf("Please enter a couple of numbers for x and y <both as floating-point values> to calculate the value of 'y': ");
	scanf("%lf %lf", &x, &z);
	printf("Now enter a constant 'a' <as an integer value> to find the value of 'y': ");
	scanf("%d", &a);

	printf("The value of 'y': y = (-x * (3/4) - z + a / (a % 2) = (-%lf * (3/4) - %lf + %d) / (%d %% 2) = %lf\n", x, z, a, a, (double)(-x * (3/4) - z + a) / (a % POWER));

	return 0;
}
