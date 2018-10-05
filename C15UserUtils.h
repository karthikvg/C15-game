#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
Used to Store Name and His MovesCount , It will be later be used to generate High Scores Table
*/
typedef struct User{
	char *name;
	int movesCount;
};

/*
Create the user from Heap , Assign name to user->name , Make movesCount as 0.
Return the user .
*/
User * createUser(char *name){
	User* temp = (struct User*)malloc(sizeof(struct User));
	temp->name = name;
	temp->movesCount = 0;
	return temp;
}


/*
Increase moveCount of user by 1 ,if processInputOutCome is 1 ,Otherwise Leave it .
*/
void modifyMoveCountBasedOnProccessInput(User *user, int processInputOutCome){
	if (processInputOutCome == 1)
		user->movesCount++;
	return;
}

/*
Print the Following String from User Information .Replace accordingly .Dont ask what to Replace .
"Hey Abhijith , You have played 43 Moves "
*/
void printUser(User *user){
	
}