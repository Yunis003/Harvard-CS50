#include <cs50.h>
#include <stdio.h>

#include "student.h"

int main(void)
{
    // Get students space with new data type: struct
    int enrollment = get_int("Enrollment: ");
    students students[enrollment];

    // Get students names and dorms
    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("Name: ");
        students[i].dorm = get_string("Dorm: ");
    }

    // Print students' names and roms
    for (int i = 0; i < enrollment; i++)
    {
        printf("Names: %s and Dorms: %s\n", students[i].name, students[i].dorm);
    }
}
