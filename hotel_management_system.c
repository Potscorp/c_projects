#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define n 5
#define length 200

struct Room{
	int roomNumber;
	bool isBooked;
	char guestName[length];
};
struct Room rooms[n] = {
		{101, false, " "},
		{102, false, " "},
		{103, false, ""},
		{104, false, " "},
		{105, false, " "}
	};
void roomStatus(const struct Room rooms[]){
	printf("\n Status \n");
	int i;
	for(i=0; i<n; i++){
		printf("Room NUmber : %d \t status %s \t \n",rooms[i].roomNumber,rooms[i].isBooked? "Booked" : "Available");
		if(rooms[i].isBooked){
			printf("Guest Name %s \n",rooms[i].guestName);
		}
	}printf("\n");
}
void bookRoom(struct Room rooms[]){
	int roomNumber;
	printf("\n Enter room number : ");
	scanf("%d",&roomNumber);
	int i;
	for(i=0; i<n; i++){
	if(rooms[i].roomNumber==roomNumber){
		if(!rooms[i].isBooked){
			printf("Enter Guest Name :");
			scanf("%49s",rooms[i].guestName);
			rooms[i].isBooked = true;
			printf("Booked successfully \n");
		}
		else{
			printf("room already booked");
		}
		return ;
	}
}
}
void checkOutRoom(struct Room rooms[]){
	int roomNumber;
	printf("\n Enter room number : ");
	scanf("%d",&roomNumber);
	int i;
	for(i=0; i<n; i++){
	if(rooms[i].roomNumber==roomNumber){
		if(rooms[i].isBooked){
			rooms[i].isBooked = false;
			printf("%s",rooms[i].guestName);
			printf("Checkout  successfully \n");
		}
		else{
			printf("room already booked");
		}
		return ;
	}
}
printf("Invalid Number \n");
}

int main(){
	int choice;
	printf("choice :");
	scanf("%d",&choice);
	if(choice==1){
		roomStatus(rooms);
	}
	if(choice==2){
		bookRoom(rooms);
	}
	if(choice==3){
		checkOutRoom(rooms);
	}
	roomStatus(rooms);
	
	return 0;
}
