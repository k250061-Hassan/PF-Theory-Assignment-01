#include <stdio.h>
#include <string.h>

int main(){
	int transaction_amount, daily_spend = 0, transaction_hour, user_id, spend_limit = 5000;
	char country[10];
	char allowed_country[2][10] = {"PAK", "UAE"};
	
	printf("Enter your user ID: ");
	scanf("%d", &user_id);
	printf("Enter transaction amount: ");
	scanf("%d", &transaction_amount);
	
	if(transaction_amount <= spend_limit){
		printf("Enter your transaction country: ");
		scanf("%s", &country);
		if(strncmp(country, allowed_country[0], 3)==0 || strncmp(country, allowed_country[1], 3)==0){
			printf("Enter numbers of transactions in hour: ");
			scanf("%d", &transaction_hour);
				if(transaction_hour <= 3){
					printf("Your transaction is being processed.");
				}
				else{
					printf("Your Transaction cannot be possible");
				}}
				else{
					printf("Your transaction cannot be possible");
				}}
				else{
					printf("Your transaction cannot be possible");
				}
				
				daily_spend+=transaction_amount;
				transaction_hour+=1;
				
	
	
	return 0;
}
