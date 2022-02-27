#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() 
{
	float a, b, c;
	float x1, x2;
	float discriminant;
	
	while(1)
	{	
		printf("Enter the numbers a, b and c in order: \n");
		scanf("%f %f %f", &a, &b, &c); // input a, b and c
		discriminant = pow(b, 2) - (4 * a * c); // find the discriminant
		printf("Discriminant value = %.2f \n", discriminant);
	
		if(discriminant > 0.0) // if discriminant greater than 0 there are x1 and x2
		{
			x1 = (-b - sqrt(discriminant)) / (2 * a);
			x2 = (-b + sqrt(discriminant)) / (2 * a);
			printf("x1 = %.2f , x2 = %.2f", x1, x2);
		}
		else if(discriminant = 0.0) // if discriminant equal to 0 there is one x value
		{
			x1 = -b / (2 * a);
			printf("x = %.2f", x1);
		}
		else  // if discriminant less than 0 this equation does not have a solution in real numbers
		{
			printf("This equation does not have a solution in real numbers.");
		}
	
		getch();
		printf("\n \n");
	}
	
	return 0;
}
