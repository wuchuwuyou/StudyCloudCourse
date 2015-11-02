#include "stdio.h"

typedef struct {
    char name[20];
    int score[3];
} Student;
 
//    输入一个学生的数据
Student* student_input(Student *pStudent);
//    输出一个学生的数据，包括平均成绩
void student_print(const Student *pStudent);
//    计算一个学生的平均成绩
double student_average(const Student *pStudent);    
//    获得学生的一个成绩
int student_get_score(const Student *pStudent, int index);

int main(int argc, char const *argv[])
{
	
	return 0;
}

Student* student_input(Student *pStudent){
	Student* s;
	char *n;
	int *sc;
	n = pStudent->name;
	sc =pStudent->score;
	for (int i = 0; i < 20; ++i)
	{
		s->name[i] = n[i];
	}
	for (int i = 0; i < 3; ++i)
	{
		s->score[i] = sc[i];
	}
	return s;
}

void student_print(const Student *pStudent){

	double avg = student_average(pStudent);
	printf("%s\t", pStudent->name);
	printf("%d\t", student_get_score(pStudent,0));
	printf("%d\t", student_get_score(pStudent,1));
	printf("%d\t", student_get_score(pStudent,2));
	printf("%f\t", avg);

}
double student_average(const Student *pStudent){
	int sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		sum += student_get_score(pStudent,i);
	}
	double avg = (double)sum/3;
	return avg;
}

int student_get_score(const Student *pStudent, int index){
	int sc = 0;
	return pStudent->score[index];
}
