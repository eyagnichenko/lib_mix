#include <stdio.h>
#include <stdlib.h>
#include "calc/calc.h"
#include "text_formatter/text_formatter.h"

int run_calculator() {

	void print_select_operation_msgs() {

		printf("\nChoose the operation to be performed.\n\tPlease enter:\n");
		printf("\t\t1 for addiction\n");
		printf("\t\t2 for subtraction\n");
		printf("\t\t3 for multiplication\n");
		printf("\t\t4 for division\n");
		printf("\t\t5 for factorial\n");
		printf("\t\t6 for square root\n");
		printf("\n\t\t0 for exit\n");
		printf("\t\t911 for this help\n");

	}

	int perform_addiction() {

		long int a = 0;
		long int b = 0;
		printf("\na + b\n");
		printf("a = ");
		scanf("%ld", &a);
		printf("b = ");
		scanf("%ld", &b);
		printf("\n%ld + %ld = %ld\n", a, b, add(a, b));

		return 0;
	}

	int perform_subtraction() {
		long int a = 0;
		long int b = 0;
		printf("\na - b\n");
		printf("a = ");
		scanf("%ld", &a);
		printf("b = ");
		scanf("%ldi", &b);
		printf("\n%ld - %ld = %ld\n", a, b, diff(a, b));

		return 0;
	}

	int perform_multiplication() {
  		float a = 0;
		float b = 0;
		printf("\na * b\n");
		printf("a = ");
		scanf("%f", &a);
		printf("b = ");
		scanf("%f", &b);
		printf("\n%f * %f = %f\n", a, b, product(a, b));

		return 0;
	}

	int perform_division() {
		float a = 0;
		float b = 0;
		printf("\na / b\n");
		printf("a = ");
		scanf("%f", &a);
		printf("b = ");
		scanf("%f", &b);
		printf("\n%f / %f = %f\n", a, b, fraction(a, b));

		return 0;
	}

	int calculate_factorial() {
		int n = 0;
		printf("\nn!\n");
		printf("n = ");
		scanf("%i", &n);
		printf("\n%u!= %lu\n", n, fact(n));

		return 0;
	}

	int calculate_square_root() {
		float a = 0;
		printf("\n√a\n");
		printf("a = ");
		scanf("%f", &a);
		float res = square_root(a);
		if (res != -1) {
			printf("\n√%f = %f\n", a, res);
		}

		return 0;
	}

	printf("\nWelcome to simple calculator.\n");
	print_select_operation_msgs();

	int choise = -1;
	while (choise != 0) {

		printf("\nSelect the operation: ");
		scanf("%i", &choise);
		//TODO: handle case when string is entered

		switch(choise) {

  			case 1:
  				perform_addiction();
    			break;

  			case 2:
  				perform_subtraction();
    			break;

	   		case 3:
    		 	perform_multiplication();
				break;

     		 case 4:
     		 	perform_division();
	    		break;

     		 case 5:
				calculate_factorial();		 	
    			break;

     		 case 6:
     		 	calculate_square_root();
	   			break;

	    	case 0:
	    		printf("\nExit.\n");
	    		break;

	    	case 911:
	    		print_select_operation_msgs();
	    		break;

  			default:
  				printf("\nPlease select valid operation in range [1, 6].");
  				printf("\nEnter 0 to exit.");
  				printf("\nEnter 911 for help.\n");
  				break;

		}

	}

	return 0;

}

int run_text_formatter() {
	printf("\nWelcome to text formatter.\n");
	perform_uppering();
	perform_lowering();

	return 0;
}

int main() {
	run_text_formatter();
	run_calculator();

	return 0;

}
