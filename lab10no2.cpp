#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include<cstring>
using namespace std;
typedef struct {
	char name[64];
	int score;
} Student;

void addStudent(Student *record, char *name, int score) {
	strcpy(record->name, name); 
	record->score = score;
	
}

int main() {
	Student stuRecord[20]; int numStudent, i;
	addStudent(&stuRecord[0], "Sandking", 65);
	addStudent(&stuRecord[1], "Anti-mage", 72);
	addStudent(&stuRecord[2], "Sniper", 40);
	addStudent(&stuRecord[3], "Tiny", 93); 
	addStudent(&stuRecord[4], "Axe", 60);
	numStudent = 5;
	for(i = 0; i < numStudent; i++) {
		if(stuRecord[i].score >= 80){
			cout<<stuRecord[i].name<<" Very Good"<<endl;
		}
		else if(stuRecord[i].score >= 60){
			cout<<stuRecord[i].name<<" Good"<<endl;
		}
		else{
			cout<<stuRecord[i].name<<" Keep trying"<<endl;
		}
	}
	return 0;
}


