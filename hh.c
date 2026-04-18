#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float note;
    struct Student *next;
};

struct Student *head = NULL;

//  Add Student
void addStudent(int id, float note) {
    struct Student *newStudent = malloc(sizeof(struct Student));

    if(newStudent == NULL) {
        printf("Memory Error\n");
        return;
    }

    newStudent->id = id;
    newStudent->note = note;
    newStudent->next = head;

    head = newStudent;
}

//  Display Students
void displayStudents() {
    struct Student *temp = head;

    while(temp != NULL) {
        printf("ID: %d | Note: %.2f\n", temp->id, temp->note);
        temp = temp->next;
    }
}

//  Search Student
void searchStudent(int id) {
    struct Student *temp = head;

    while(temp != NULL) {
        if(temp->id == id) {
            printf("Found! Note = %.2f\n", temp->note);
            return;
        }
        temp = temp->next;
    }

    printf("Student Not Found\n");
}

//  Delete Student
void deleteStudent(int id) {
    struct Student *temp = head;
    struct Student *prev = NULL;

    while(temp != NULL) {

        if(temp->id == id) {

            if(prev == NULL) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }

            free(temp);
            printf("Deleted Successfully\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Student Not Found\n");
}

int main() {

    addStudent(1, 15.5);
    addStudent(2, 12.0);
    addStudent(3, 18.75);

    printf("All Students:\n");
    displayStudents();

    printf("\nSearch ID 2:\n");
    searchStudent(2);

    printf("\nDelete ID 1:\n");
    deleteStudent(1);

    printf("\nAfter Delete:\n");
    displayStudents();

    return 0;
} 

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float note;
    struct Student *next;
};

struct Student *head = NULL;

// ➤ Add Student
void addStudent(int id, float note) {
    struct Student *newStudent = malloc(sizeof(struct Student));

    if(newStudent == NULL) {
        printf("Memory Error\n");
        return;
    }

    newStudent->id = id;
    newStudent->note = note;
    newStudent->next = head;
    head = newStudent;

    printf("Student Added Successfully\n");
}

// ➤ Display Students
void displayStudents() {
    struct Student *temp = head;

    if(temp == NULL) {
        printf("No Students Found\n");
        return;
    }

    while(temp != NULL) {
        printf("ID: %d | Note: %.2f\n", temp->id, temp->note);
        temp = temp->next;
    }
}

// ➤ Search Student
void searchStudent(int id) {
    struct Student *temp = head;

    while(temp != NULL) {
        if(temp->id == id) {
            printf("Found! Note = %.2f\n", temp->note);
            return;
        }
        temp = temp->next;
    }

    printf("Student Not Found\n");
}

// ➤ Delete Student
void deleteStudent(int id) {
    struct Student *temp = head;
    struct Student *prev = NULL;

    while(temp != NULL) {

        if(temp->id == id) {

            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            printf("Deleted Successfully\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Student Not Found\n");
}

// ➤ Free All Memory (مهم بزاف)
void freeAll() {
    struct Student *temp;

    while(head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {

    int choice, id;
    float note;

    do {
        printf("\n---- Student System ----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter ID: ");
                scanf("%d", &id);
                printf("Enter Note: ");
                scanf("%f", &note);
                addStudent(id, note);
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                printf("Enter ID to Search: ");
                scanf("%d", &id);
                searchStudent(id);
                break;

            case 4:
                printf("Enter ID to Delete: ");
                scanf("%d", &id);
                deleteStudent(id);
                break;

            case 0:
                freeAll();
                printf("Program Closed\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 0);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

struct node {
  int data ;
struct node *next ;
}; 

 struct node*  structnode () {
    struct node * next ;
    struct node * new1 ;
    int data ;
    new1 = malloc (sizeof(struct node));
    new1->data = data;
do{
   if ( new1-> next == NULL ){
    printf("ach had lakhra???");
  }
  else{
    new1->next = next ;
    next = new1;
  }
}while (next != NULL);
return ;
  }
int main (){
    int data ;
  struct node * head = NULL ;
printf("print la valure de data : ");
scanf("%d", &data);
head = structnode ( head , data);
free(head);
    return 0;
}



//hand o newnode o next 
//ila kan next null saf rah mabkatch radi tji chi node waraha 
//wila kan hend null donc rah hiya lawla rah makayn hata haja 
//o fach kadir dik newnode->hand rah tamak fin kat zad lina nod khra o bhal kat seva f ram 