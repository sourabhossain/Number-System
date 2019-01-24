/**
 * Name Of The Project: Number System Conversion
 * Implementation Using Language: C
 * Author Name: Sourav Hossain
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

// decimal to binary OR octal OR hexadecimal function photo type
void decimal_to_binary(long long n);
void decimal_to_octal(long long n);
void decimal_to_hexadecimal(long long n);

// binary to decimal OR octal OR hexadecimal function photo type
long long binary_to_decimal(char *number, char n);
void binary_to_octal(char *number);
void binary_to_hexadecimal(char *number);

// octal to decimal OR binary OR hexadecimal function photo type
long long octal_to_decimal(char *number, char n);
void octal_to_binary(char *number);
void octal_to_hexadecimal(char *number);

// hexadecimal to decimal OR binary OR octal function photo type
long long hexadecimal_to_decimal(char *number, char n);
void hexadecimal_to_binary(char *number);
void hexadecimal_to_octal(char *number);

// other's function
void print(char *data, int arraySize);

int main()
{
        printf("\t       -------------------***********-------------------\n");
	printf("\n\t--**-- Simple Numbering System Project By Sourav Hossain --**--\n");
	printf("\n\t       -------------------***********-------------------\n");

	while(1) {
		char temp, number[50];
		long long num;

        start: // start point
        printf("\nEnter\n\t'E' for Exit\n");
		printf("\t'D' for Decimal to Binary or Octal or Hexadecimal\n");
		printf("\t'B' for Binary to Decimal or Octal or Hexadecimal\n");
		printf("\t'O' for Octal to Decimal or Binary or Hexadecimal\n");
		printf("\t'H' for Hexadecimal to Decimal or Binary or Octal\n");
		printf("\t'C' for clear screen\n");
		scanf(" %c", &temp);

		switch(temp) {
		    case 'e': // program exit
		    case 'E':
		        puts("Thank you very much.");
                exit(0);
                break;

			case 'd': // decimal to ......
            case 'D':
                printf("\nEnter a number:\n");
                scanf("%s", number);

                Decimal: // Decimal point
				printf("\n\n\tEnter\n\t\t'M' for Back Manu\n");
				printf("\t\t'B' for Decimal to Binary\n");
				printf("\t\t'O' for Decimal to Octal\n");
				printf("\t\t'H' for Decimal to Hexadecimal\n");
				scanf(" %c", &temp);

				switch(temp) {
					case 'm': // back manu
					case 'M':
					    break;

					case 'b': // decimal to binary
					case 'B':
						sscanf(number, "%lld", &num);

						if(num >= 0) {
							printf("Result: ");
							decimal_to_binary(num); // go to decimal_to_binary function
					    } else {
					    	printf("Your input wrong. Please try again.\n");
					    }
					    break;

					case 'o': // decimal to octal
					case 'O':
						sscanf(number, "%lld", &num);

						if (num >= 0) {
							printf("Result: ");
						    decimal_to_octal(num); // go to decimal_to_octal function
					    } else {
					    	printf("Your input wrong. Please try again.\n");
					    }
					    break;

					case 'h': // decimal to hexadecimal
					case 'H':
					    sscanf(number, "%lld", &num);

					    if(num >= 0) {
						    printf("Result: ");
							decimal_to_hexadecimal(num); // go to decimal_to_hexadecimal function
						} else {
							printf("Your input wrong. Please try again.\n");
						}
						break;

					default: // other's
                        system("cls");
					    printf("Your input wrong. Please try again.\n");
					    goto Decimal; // go to Decimal
						break;
				}

				break;

			case 'B': // binary to ......
            case 'b':
                printf("\nEnter a number:\n");
                scanf("%s", number);

                Binary: // Binary point
				printf("\n\n\tEnter\n\t\t'M' for Back Manu\n");
				printf("\t\t'D' for Binary to Decimal\n");
				printf("\t\t'O' for Binary to Octal\n");
				printf("\t\t'H' for Binary to Hexadecimal\n");
				scanf(" %c", &temp);

				switch(temp) {
					case 'm': // back manu
					case 'M':
					    break;

					case 'D': // binary to decimal
					case 'd':
					    printf("Result: ");
						binary_to_decimal(number, 0); // go to binary_to_decimal function
						break;

					case 'o': // binary to octal
					case 'O':
					    printf("Result: ");
					    binary_to_octal(number); // go to binary_to_octal function
						break;

					case 'h': // binary to hexadecimal
					case 'H':
					    printf("Result: ");
					    binary_to_hexadecimal(number); // go to binary_to_hexadecimal function
						break;

					default: // other's
					    system("cls");
					    printf("Your input wrong. Please try again.\n");
						goto Binary; // go to point Binary
						break;
				}

			    break;

			case 'o': // octal to ....
            case 'O':
                printf("\nEnter a number:\n");
                scanf("%s", number);

                Octal: // point Octal
				printf("\n\n\tEnter\n\t\t'M' for Back Manu\n");
				printf("\t\t'D' for Octal to Decimal\n");
				printf("\t\t'B' for Octal to Binary\n");
				printf("\t\t'H' for Octal to Hexadecimal\n");
				scanf(" %c", &temp);

				switch(temp) {
					case 'm': // back manu
					case 'M':
					    break;

					case 'd': // octal to decimal
					case 'D':
					    printf("Result: ");
						octal_to_decimal(number, 0); // go to octal_to_decimal function
						break;

					case 'b': // octal to binary
					case 'B':
					    printf("Result: ");
					    octal_to_binary(number); // go to octal_to_binary function
						break;

					case 'h': // octal to hexadecimal
					case 'H':
					    printf("Result: ");
					    octal_to_hexadecimal(number); // go to octal_to_hexadecimal function
						break;

					default: // other's
					    system("cls");
					    printf("Your input wrong. Please try again.\n");
					    goto Octal; // go to Octal
						break;
				}

			    break;

			case 'h': // hexadecimal to ....
            case 'H':
                printf("\nEnter a number:\n");
                scanf("%s", number);

                Hexadecimal: // point Hexadecimal
				printf("\n\n\tEnter\n\t\t'M' for Back Manu\n");
				printf("\t\t'D' for Hexadecimal to Decimal\n");
				printf("\t\t'B' for Hexadecimal to Binary\n");
				printf("\t\t'O' for Hexadecimal to Octal\n");
				scanf(" %c", &temp);

				switch(temp) {
					case 'm': // back manu
					case 'M':
					    break;

					case 'd': // hexadecimal to decimal
					case 'D':
					    printf("Result: ");
						hexadecimal_to_decimal(number, 0); // go to hexadecimal_to_decimal function
						break;

					case 'b': // hexadecimal to binary
					case 'B':
					    printf("Result: ");
					    hexadecimal_to_binary(number); // go to hexadecimal_to_binary function
						break;

					case 'o': // hexadecimal to octal
					case 'O':
					    printf("Result: ");
					    hexadecimal_to_octal(number); // go to hexadecimal_to_octal function
						break;

					default: // Other's
					    system("cls");
					    printf("Your input wrong. Please try again.\n");
					    goto Hexadecimal; // go to Hexadecimal
						break;
				}

			    break;

			 case 'c': // clear screen
             case 'C':
                system("cls");
                goto start;
                break;

			default: // other's
			    system("cls");
			    printf("Your input wrong. Please try again.\n");
			    goto start; // go to start
				break;
		}

		system("pause");
        system("cls");
	}

	return 0;

} // end main function


// print value function
void print(char *data, int arraySize) {
      while(--arraySize >= 0) {
      	 putchar(data[arraySize]);
      }

      printf("\n\n");
} // end print function


// Decimal to .....
void decimal_to_binary(long long n) {
    if(n == 0) {
    	puts("0\n");
    }
    else {
    	char binary[40];
	    int i;

		for(i = 0; n; i++) {
		    binary[i] = (n & 1) + '0';
		 	n >>= 1;
		}

		binary[i] = '\0';
		print(binary, i); // go to print function
	}

} // end decimal_to_binary function

void decimal_to_octal(long long n) {
	if(n == 0) {
        puts("0\n");
	} else {
        char octal[40];
        int i;

        for(i = 0; n; i++) {
            octal[i] = '0' + (n % 8);
            n /= 8;
        }

        octal[i] = '\0';
        print(octal, i); // go to print function
	}

} // end decimal_to_octal function

void decimal_to_hexadecimal(long long n) {
	if(n == 0) {
        puts("0\n");
	} else {
        char hexadecimal[40], temp;
        int i;

        for(i = 0; n; i++) {
            temp = n % 16;

            if(temp < 10) {
                hexadecimal[i] = temp + 48;
            } else {
                hexadecimal[i] = (temp - 9) + 64;
            }

            n /= 16;
        }

        hexadecimal[i] = '\0';
        print(hexadecimal, i); // go to print function
	}

} // end decimal_to_hexadecimal function


// Binary to....
long long binary_to_decimal(char *number, char n) {
	int length = strlen(number), base = 0;
	long long decimal = 0;

	while(--length >= 0) {
		if(number[length] == '0' || number[length] == '1') {
			decimal += (number[length] - '0') << base++;
		} else {
			printf("\rYour input wrong. Please try again.\n");
			return EXIT_FAILURE;
		}
	}

    if(n == 1) {
    	return decimal;
	} else {
		printf("%lld\n\n", decimal);
		return 0;
	}

} // end binary_to_decimal function

void binary_to_octal(char *number) {
	long long total = binary_to_decimal(number, 1); // go to binary_to_decimal function
	decimal_to_octal(total); // go to decimal_to_octal function
} // end binary_to_decimal function

void binary_to_hexadecimal(char *number) {
	long long total = binary_to_decimal(number, 1); // go to binary_to_decimal function
	decimal_to_hexadecimal(total); // go to decimal_to_hexadecimal function
} // end binary_to_hexadecimal function


// Octal to.......
long long octal_to_decimal(char *number, char n) {
	int length = strlen(number), power = length - 1, i;
	long long total;

	for(i = total = 0; i < length; i++) {
		if (number[i] >= '0' && number[i] <= '7') {
			total += (number[i] - '0') * pow(8, power--);
		} else {
			printf("\rYour input wrong. Please try again.\n");
			return EXIT_FAILURE;
		}
	}

	if(n == 1) {
        return total;
	} else {
		printf("%lld\n\n", total);
		return 0;
	}

} // end octal_to_decimal function

void octal_to_binary(char *number) {
	int i;

	for(i = 0; number[i]; i++) {
		if (number[i] >= '0' && number[i] <= '7') {
			switch(number[i]) {
				case '0':
				    if(i == 0) {
	                    putchar('0');
				    } else {
	                    printf("000");
	                }
					break;

				case '1':
					if(i == 0) {
	                    putchar('1');
				    } else {
	                    printf("001");
	                }
					break;

				case '2':
				    if(i == 0) {
	                    printf("10");
				    } else {
	                    printf("010");
	                }
					break;

				case '3':
					if(i == 0) {
	                    printf("11");
				    } else {
	                    printf("011");
	                }
					break;

				case '4':
				    printf("100");
					break;

				case '5':
					printf("101");
					break;

				case '6':
					printf("110");
					break;

				case '7':
					printf("111");
					break;
			}
		} else {
			printf("\rYour input wrong. Please try again.\n");
			return EXIT_FAILURE;
		}
	}

	printf("\n\n");

} // end octal_to_binary function

void octal_to_hexadecimal(char *number)
{
	long long total = octal_to_decimal(number, 1); // go to octal_to_decimal function
	decimal_to_hexadecimal(total); // go to decimal_to_hexadecimal function
} // end octal_to_hexadecimal function


// Hexadecimal to.....
long long hexadecimal_to_decimal(char *number, char n)
{
	int length = strlen(number), power = length - 1, i;
	long long total;

	for(i = total = 0; i < length; i++) {
		if ((number[i] >= '0' && number[i] <= '9') || (number[i] >= 'a' && number[i] <= 'f') || (number[i] >= 'A' && number[i] <= 'F'))
		{
			switch(number[i]) {
				case 'A':
				case 'a':
					total += 10 * pow(16, power--);
					break;

				case 'B':
				case 'b':
					total += 11 * pow(16, power--);
					break;

				case 'C':
				case 'c':
					total += 12 * pow(16, power--);
					break;

				case 'D':
				case 'd':
					total += 13 * pow(16, power--);
					break;

				case 'E':
				case 'e':
					total += 14 * pow(16, power--);
					break;

				case 'F':
				case 'f':
					total += 15 * pow(16, power--);
					break;

				default:
					total += (number[i] - '0') * pow(16, power--);
					break;
			}
		} else {
			printf("\rYour input wrong. Please try again.\n");
			return -1;
		}
	}

	if(n == 1) {
		return total;
	} else {
		printf("%lld\n\n", total);
		return 0;
	}

} // end hexadecimal_to_decimal function

void hexadecimal_to_binary(char *number) {
	int i;

	for(i = 0; number[i]; i++) {
		if ((number[i] >= '0' && number[i] <= '9') || (number[i] >= 'a' && number[i] <= 'f') || (number[i] >= 'A' && number[i] <= 'F'))
		{
			switch(number[i]) {
				case '0':
					if(i == 0) {
	                    putchar('0');
					} else {
	                    printf("0000");
					}
					break;

				case '1':
					if(i == 0) {
	                    putchar('1');
					} else {
	                    printf("0001");
					}
					break;

				case '2':
					if(i == 0) {
	                    printf("10");
					} else {
	                    printf("0010");
					}
					break;

				case '3':
					if(i == 0) {
	                    printf("11");
					} else {
	                    printf("0011");
					}
					break;

				case '4':
					if(i == 0) {
	                    printf("100");
					} else {
	                    printf("0100");
					}
					break;

				case '5':
					if(i == 0) {
	                    printf("101");
					} else {
	                    printf("0101");
					}
					break;

				case '6':
					if(i == 0) {
	                    printf("110");
					} else {
	                    printf("0110");
					}
					break;

				case '7':
					if(i == 0) {
	                    printf("111");
					} else {
	                    printf("0111");
					}
					break;

				case '8':
					printf("1000");
					break;

				case '9':
					printf("1001");
					break;

				case 'a':
				case 'A':
					printf("1010");
					break;

				case 'b':
				case 'B':
					printf("1011");
					break;

				case 'c':
				case 'C':
					printf("1100");
					break;

				case 'd':
				case 'D':
					printf("1101");
					break;

				case 'e':
				case 'E':
					printf("1110");
					break;

				case 'f':
				case 'F':
					printf("1111");
					break;
			}
		} else {
			printf("\rYour input wrong. Please try again.\n");
			return EXIT_FAILURE;
		}
	}

	printf("\n\n");
} // end hexadecimal_to_binary function

void hexadecimal_to_octal(char *number) {
	long long total = hexadecimal_to_decimal(number, 1); // go to hexadecimal_to_decimal function

	if(total >= 0) {
	   decimal_to_octal(total); // go to decimal_to_octal function
	}
} // end hexadecimal_to_octal function
