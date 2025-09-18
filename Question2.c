#include <stdio.h>

int main(){
	
	int x,y;
	
	printf("Enter the x and y coordinates (x,y)");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("(%d,%d)", x,y);
	 if(x==0 && y==0){
		printf("The point is on origin");
	}
	else if(x==0 || y==0){
		printf("The points lies on axis");
	}

	else if(x>0&&y>0){
		printf("The point lies in 1st Quadrant");
	}else if(x<0&&y>0){
		printf("The point lies in 4th Quadrant");
	}else if(x<0&&y<0){
		printf("The point lies in 3rd Quadrant");
	}
	else{
		printf("The point lies in 2nd Quadrant");
	}
	return 0;
}
