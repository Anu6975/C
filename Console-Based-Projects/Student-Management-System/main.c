#include <stdio.h>
#include <string.h>

struct Students {
    char name[30];
    char dept[40];
    int roll_no;
    float mark;
    char grade;
};

struct Students student[100];
int count = 0, i;

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void readString(char *arr, int size) {
    fgets(arr, size, stdin);
    arr[strcspn(arr, "\n")] = '\0';
}

void add() {
    if (count >= 100) {
        printf("\nSystem memory full! Cannot add more students.\n");
        return;
    }
    
    printf("Student Roll_no: ");
    scanf("%d", &student[count].roll_no);
    clearBuffer();
    
    printf("Student Name: ");
    readString(student[count].name, sizeof(student[count].name));
    
    printf("Student Department: ");
    readString(student[count].dept, sizeof(student[count].dept));
    
    printf("Student Marks: ");
    scanf("%f", &student[count].mark);
    
    printf("Student Grade: ");
    scanf(" %c", &student[count].grade);
    
    printf("\nAdding a new Student...\n");
    count++;
}

void display() {
    if(count != 0) {
        printf("\n|%-10s| %-20s| %-15s| %-10s| %-10s|", "Roll No", "Name", "Department", "Marks", "Grade");	
        printf("\n-------------------------------------------------------------------------");
        for(i = 0; i < count; i++) {
            printf("\n|%-10d| %-20s| %-15s| %-10.2f| %-10c|", 
                   student[i].roll_no, student[i].name, student[i].dept, student[i].mark, student[i].grade);
        }
        printf("\n-------------------------------------------------------------------------\n");
    } else {
        printf("\nNothing to Display!\n");
    }
}

void update() {
    if (count == 0) {
        printf("\nNo records available to update!\n");
        return;
    }
    
    int n, roll, found = 0;
    display();
    
    printf("\nSelect Field to Update (1-5): \n1. Roll No \n2. Name \n3. Department \n4. Marks \n5. Grade\n");
    printf("Enter Your Choice: ");
    scanf("%d", &n);
    
    printf("Enter Roll Number of Student: ");
    scanf("%d", &roll);
    
    for(i = 0; i < count; i++) {
        if(roll == student[i].roll_no) {
            clearBuffer();
            switch(n) {
                case 1:
                    printf("Enter Updated Roll Number: ");
                    scanf("%d", &student[i].roll_no);
                    break;
                case 2:
                    printf("Enter Updated Name: ");
                    readString(student[i].name, sizeof(student[i].name));
                    break;
                case 3:
                    printf("Enter Updated Department: ");
                    readString(student[i].dept, sizeof(student[i].dept));
                    break;
                case 4:
                    printf("Enter Updated Marks: ");
                    scanf("%f", &student[i].mark);
                    break;
                case 5:
                    printf("Enter Updated Grade: ");
                    scanf(" %c", &student[i].grade);
                    break;
                default:
                    printf("Invalid Choice Option!\n");
                    return;
            }
            found = 1;
            printf("\nUpdating Data... :)\n");
            break;
        }
    }
    
    if(found == 0) {
        printf("Invalid Roll Number!\n");		
    }
}

void delete() {
    if (count == 0) {
        printf("\nNo student records to delete!\n");
        return;
    }
    
    int j, roll, found = 0;
    display();
    
    printf("\nEnter Roll Number of Student to delete: ");
    scanf("%d", &roll);
    
    for(i = 0; i < count; i++) {
        if(roll == student[i].roll_no) {
            for(j = i; j < count - 1; j++) {
                student[j] = student[j + 1];
            }
            count--;
            found = 1;
            printf("\nStudent Deleted... :(\n");
            break;
        }
    }
    if(found == 0) {
        printf("Invalid Roll Number!\n");		
    }
}

void fileSave() {
    FILE *fp = fopen("students.txt", "w");
    if(fp != NULL) {
        for(i = 0; i < count; i++) {
            fprintf(fp, "%d,%s,%s,%.2f,%c\n", 
                    student[i].roll_no, student[i].name, student[i].dept, student[i].mark, student[i].grade);
        }
        fclose(fp);
        printf("\nSaving to File...\n");
    } else {
        printf("File Not opened or Found!\n");
    }
}

void loadFile() {
    FILE *fp = fopen("students.txt", "r");
    if(fp == NULL) {
        return;
    }

    while(fscanf(fp, "%d,%29[^,],%39[^,],%f,%c\n", 
                 &student[count].roll_no, 
                 student[count].name, 
                 student[count].dept, 
                 &student[count].mark, 
                 &student[count].grade) == 5) {
        count++;
        if(count >= 100) break;
    }
    fclose(fp);
}

int main() {
    loadFile();
    int n;
    printf("===========*  Student Management System  *=============");
    
    while(1) {
        printf("\nSelect Option (1-6): \n1. Add Student \n2. Display Students \n3. Update Student \n4. Delete Student \n5. Save to File \n6. Exit\n");
        printf("\nEnter Your Choice: ");
        
        if (scanf("%d", &n) != 1) {
            printf("Please select a numeric option.\n");
            clearBuffer();
            continue;
        }
        
        switch(n) {
            case 1: add(); break;
            case 2: display(); break;
            case 3: update(); break;
            case 4: delete(); break;
            case 5: fileSave(); break;
            case 6:
                fileSave();
                printf("See ya later, Good Day!\n");
                return 0;
            default:
                printf("Invalid Input!! Enter Again..\n");
        }		
    }
}

