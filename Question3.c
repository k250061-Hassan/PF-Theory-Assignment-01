#include <stdio.h>
#include <ctype.h>

int main(){
	
	int age;
	char eye, written, driving, medical;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age<18){
		printf("You are not eligible for driving license.");
	}
	if(age>18){
		printf("Have you passed the eyesight test or failed? ('p' or 'f')");
		scanf("%c", &eye);
	}
	eye = getchar();
		if(eye == 'f'){
			printf("You might need prescription for glasses.");
		}
		if(eye == 'p'){
			printf("Have you passed the written test or failed? (p or f)");
			scanf("%c", &written);
		}
		written = getchar();
			if (written == 'f'){
				printf("You need to retake the written test");
			}
			if(written == 'p'){
				printf("Have you passed the driving test or failed? (p or f)");
				scanf("%c", &driving);
			}
			driving = getchar();
				if(driving == 'f'){
					printf("You are not eligible for driving license.");
				}
				if(driving == 'p'){
					if(age>60){
						printf("You have medical fitness certificate or not? (y or n)");
						scanf("%c", &medical);
					}
					medical = getchar();
						if(medical == 'y'){
							printf("You are not eligible for driving license.");
						}
						if(medical == 'n'){
							printf("You are eligible for driving license.");
						}
						if(age<=60){
						printf("You are eligible for driving license.");
					}
				}
	
				
			
		
	
	
	
	
	
	return 0;
}
