/*
 * hw5 done by Taha Omar Boulmane on 26/01/2021
 */

#include <stdio.h>

struct SStudent
{
	char m_Name[50];
	unsigned int m_Roll;
	unsigned int m_Marks;
};
struct SStudent ReadStruct (unsigned int rollNum)
{
	struct SStudent student;
	student.m_Roll = rollNum;
	printf("For roll number %d\n", rollNum);
	printf("Enter name: ");
	scanf("%s", student.m_Name);
	printf("Enter marks: ");
	scanf("%u", &student.m_Marks);
	return student;
}
void DisplayStruct (struct SStudent student)
{
	printf("\nInformation for roll number %u:\nName: %s\nMarks: %u\n",
			student.m_Roll, student.m_Name, student.m_Marks);
}
int main (void)
{
	int i;
	printf("Enter information of students:\n\n");
	struct SStudent student[10];
	for (i = 0; i < 10; i++)	{ student[i] = ReadStruct(i+1); }
	printf("\nDisplaying Information\n");
	for (i = 0; i < 10; i++)	{ DisplayStruct(student[i]); }
	return 0;
}

