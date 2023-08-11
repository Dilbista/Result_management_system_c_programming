#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
struct Teacher{
  
    char username[50];
    char password[50];
};

struct Student {
    char name[50];
    int roll;
    int account;
    int c_programming;
    int english;
    int project;
    int maths;
    int electronic;
    int choice;
    
};

void add_newstudent();
void modify();
void search();
void show_all_the_student();
void Remove();
FILE *file;
struct Teacher teacher;
struct Student student;



int main() {
  system("COLOR 0A");
    FILE *file;
    struct Teacher teacher;
    struct Student student;
    
    char loginChoice;
    int p=0;
    float percentage,GPA;

menu:
	printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t          Are you a Student (S) or a Teacher (T)? ");
    scanf(" %c",&loginChoice);

    if (loginChoice == 'S' || loginChoice == 's') {
        int rollNo;
     re_enter:
		printf("Enter your Roll No: ");
        scanf("%d", &rollNo);
        

        file = fopen("students.txt", "r");
        if (file == NULL) {
            printf("Error opening the file.\n");
            return 1;
           
        }
         int found=0;
          system("COLOR 0f");
         while (fscanf(file,"Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                      student.name, &student.roll, &student.account, &student.c_programming, &student.english,
                      &student.project, &student.maths, &student.electronic) != EOF) {
            if (student.roll == rollNo) {
            	
            	 found=1;
            	 printf("\n _________welcome________");
            	
                printf(" You can see your marks__________________________! \n");
                printf("\nName: %s\n", student.name);
                printf("Roll No: %d\n", student.roll);
                printf("\nAccount Marks: %d\n", student.account);
                printf("C Programming Marks: %d\n", student.c_programming);
                printf("English Marks: %d\n", student.english);
                printf("Project Marks: %d\n", student.project);
                printf("Maths Marks: %d\n", student.maths);
                printf("Electronic Marks: %d\n", student.electronic);
                  p=student.account+student.c_programming+student.english+student.project+student.maths+student.electronic;
                    percentage=p/6.0;
                    printf("\n");
                    GPA=(percentage / 100) * 4;
                
                printf("\n Your GPA =%.2f",GPA);
                
   

    if (percentage > 90) {
        printf("\nYour grade is A+");
        printf("\n~~Excellent marks~~\n ");
    } else if (percentage >= 80 && percentage <= 90) {
        printf("\nYour grade is A \n");
        printf("\n~~Excellent marks~~\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("\nYour grade is B+\n");
        printf("\n~~Very good marks~~\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("\nYour grade is B");
         printf("\n~~good marks~~\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("\nYour grade is C");
         printf("\n~~good marks~~\n");
    } else if (percentage >= 40 && percentage < 50) {
        printf("\nYour grade is D+");
         printf("\n~~accepted marks~~\n");
    } else {
        printf("\nFail");
    }
                break;
                

            }
        }

        fclose(file);
        
        if (!found) {
        printf("\nRoll No %d not found. Please enter a valid Roll No.\n", rollNo);
       goto re_enter;
    } else {
        printf("\n\nYou can see your result\n");
    }
        
        
        goto menu;
        
        

    } 
	else if (loginChoice == 'T' || loginChoice == 't') {
        char username[50];
        char password[50];
        int loggedIn = 0;
        int registerChoice;
        int choice;
        printf("Enter your username: ");
        scanf("%s", username);
       
        printf("Enter your password: ");
          
        int i=0;
	char ch;
	while(1){
	ch =_getch();
	if(ch==13)
	break;
	else if (ch==8){
	if(i>0){
	 i--;
	 printf("\b\b");
}
	}
	else{
	password[i++]=ch;
	printf("*");
}
}
password[i] = '\0'; // Null-terminate the password string
    printf("\n");


       
       
       
      
        file = fopen("teachers.txt", "a+");
        if (file == NULL) {
            printf("Error opening the file.\n");
            return 0;
        }

        while (fscanf(file, "Username: %s\n Password: %s\n", teacher.username, teacher.password) != EOF) {
            if (strcmp(teacher.username, username) == 0 && strcmp(teacher.password, password) == 0) {
                loggedIn = 1;
                break;
            }
        }

        fclose(file);

        if (!loggedIn) {
            printf("Invalid username or password.\n");

            printf("Do you want to register a new teacher? (1 for Yes / 0 for No): ");
            scanf("%d", &registerChoice);

            if (registerChoice == 1) {
                printf("Register a New Teacher\n");
                file = fopen("teachers.txt", "w");
                if (file == NULL) {
                    printf("Error opening the file.\n");
                    return 1;
                }

                printf("Enter a new username: ");
                scanf("%s", teacher.username);
                printf("Enter a new password: ");
               
       	int i=0;
	char ch;
	while(1){
	ch =_getch();
	if(ch==13)
	break;
	else if (ch==8){
	if(i>0){
	 i--;
	 printf("\b\b");
}
	}
	else{
	password[i++]=ch;
	printf("*");
}
}
password[i] = '\0'; // Null-terminate the password string
    printf("\n");



                fprintf(file, "Username: %s\nPassword: %s\n", teacher.username, teacher.password);

                fclose(file);

                printf("Teacher registered successfully.\n");
                system("CLS");
                goto menu;
            }
            else
            {
            	printf("\nRe enter your username and password : \n");
            	system("CLS");
            	goto menu;
            	 system("CLS");
			}
        }
        
        
 
else
{
	 system("CLS");
	 
	
do{     printf("\n\n\n\n");
        printf("\t\t\t \t\t\t         |***************************************|\n");
        printf("\t\t\t  \t\t\t       | ********RESULT MANAGEMENT SYSTEM*********|\n");
        printf("\t\t\t   \t\t\t         |***************************************|\n");
        printf("\n\n");
        printf("                                                            ~~~~~~~~~~~~~~~~~~~~~~~~~       ");

        printf("\n \t\t\t\t\t\t\t         Welcome, %s\n", username );
        printf("                                                            ~~~~~~~~~~~~~~~~~~~~~~~~~     ");
         printf("\n\n");
        
            printf("\t\t\t\t\t\t\t         Menu:\n");
            printf("\t\t\t\t\t\t\t\t[1]. Add new student\n");
            printf("\t\t\t\t\t\t\t\t[2]. modify \n");
            printf("\t\t\t\t\t\t\t\t[3]. search \n");
            printf("\t\t\t\t\t\t\t\t[4]. Display all students\n");
            printf("\t\t\t\t\t\t\t\t[5]. Remove\n");
            printf("\t\t\t\t\t\t\t\t[6]. exit\n");
            printf("\t\t\t\t\t\t\t\tEnter your choice: ");
            scanf("%d", &choice);
            system("CLS");

            switch (choice) {
            	//In this case enter a new students marks and show the pass or fail as will as GPA.
                case 1:
                     add_newstudent();
                    break;
             //In this case modify the marks of students
             case 2:
    
           modify();
           break;
            
    

                 // this case is used for the search the the marksheet of the students
                   case 3:
               search();
        break;
        
         case 4:
                 show_all_the_student();  	
        
        break;
        
        case 5:
        Remove();
    break;
        
        
                case 6:
                    printf("Logged out successfully.\n");
                   

                default:
                    printf("Invalid choice. Please try again.\n");
            }

        } 
		while (choice != 6);
        
    }
}
    return 0;
}

void add_newstudent(){
	int rollNo;
	float p, percentage,GPA;
	
	
	
                	system("COLOR 09");
                    file = fopen("students.txt", "a+");
                    if (file == NULL) {
                        printf("Error opening the file.\n");
                       
                    }

                    printf("Add New Student\n");
                    printf("Enter the name: ");
                    scanf("%s", student.name);
                    printf("Enter the roll number: ");
                    scanf("%d", &student.roll);
                    printf("Enter the account marks: ");
                    scanf("%d", &student.account);
                    printf("Enter the C Programming marks: ");
                    scanf("%d", &student.c_programming);
                    printf("Enter the English marks: ");
                    scanf("%d", &student.english);
                    printf("Enter the Project marks: ");
                    scanf("%d", &student.project);
                    printf("Enter the Maths marks: ");
                    scanf("%d", &student.maths);
                    printf("Enter the Electronic marks: ");
                    scanf("%d", &student.electronic);

                    fprintf(file, "Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                            student.name, student.roll, student.account, student.c_programming, student.english,
                            student.project, student.maths, student.electronic);
                              p=student.account+student.c_programming+student.english+student.project+student.maths+student.electronic;
                              percentage=p/6.0;
                             
                              
                    GPA=(percentage / 100) * 4;
                
                printf("\n Your GPA =%.2f",GPA);
                
                
				  fclose(file);
				  

                    printf("New student added successfully.\n");
	
}
void modify(){
	
	int rollNo;
	printf("Enter your Roll No: ");
    scanf("%d", &rollNo);

    FILE *file_read, *file_write;
    file_read = fopen("students.txt", "r");
    file_write = fopen("new_students.txt", "w");

    if (file_read == NULL || file_write == NULL) {
        printf("Error opening the file.\n");
        
    }

    

    while (fscanf(file_read, "Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                  student.name, &student.roll, &student.account, &student.c_programming, &student.english,
                  &student.project, &student.maths, &student.electronic) != EOF) {

        if (student.roll == rollNo) {
            printf("Enter new marks for each subject:\n");
            printf("Account: ");
            scanf("%d", &student.account);
            printf("C Programming: ");
            scanf("%d", &student.c_programming);
            printf("English: ");
            scanf("%d", &student.english);
            printf("Project: ");
            scanf("%d", &student.project);
            printf("Maths: ");
            scanf("%d", &student.maths);
            printf("Electronic: ");
            scanf("%d", &student.electronic);

            fprintf(file_write, "Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                    student.name, student.roll, student.account, student.c_programming, student.english,
                    student.project, student.maths, student.electronic);
        } else {
            printf("Your rollon is not match please re enter your rollon");
        }
    }

    fclose(file_read);
    fclose(file_write);

    remove("students.txt");
    rename("new_students.txt", "students.txt");
}

void search(){
	int rollNo;
	
	float p, percentage,GPA;
		
	printf("Enter your Roll No: ");
        scanf("%d", &rollNo);
        
        
        file = fopen("students.txt", "r");
        if (file == NULL) {
            printf("Error opening the file.\n");
        }
           int dil=0;
         while (fscanf(file,"Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                      student.name, &student.roll, &student.account, &student.c_programming, &student.english,
                      &student.project, &student.maths, &student.electronic) != EOF) {
            if (student.roll == rollNo) {
            	dil=1;
            	
            	printf("\n");
                printf("Student Details_________________ \n");
                printf("\nName: %s\n", student.name);
                printf("Roll No: %d\n", student.roll);
                printf("Account Marks: %d\n", student.account);
                printf("C Programming Marks: %d\n", student.c_programming);
                printf("English Marks: %d\n", student.english);
                printf("Project Marks: %d\n", student.project);
                printf("Maths Marks: %d\n", student.maths);
                printf("Electronic Marks: %d\n", student.electronic);
                  p=student.account+student.c_programming+student.english+student.project+student.maths+student.electronic;
                    percentage=p/6.0;
                    
                    GPA=(percentage / 100) * 4;
                
                printf("\n Your GPA =%.2f",GPA);
             
    if (percentage > 90) {
        printf("\nYour grade is A+");
    } else if (percentage >= 80 && percentage <= 90) {
        printf("\nYour grade is A");
    } else if (percentage >= 70 && percentage < 80) {
        printf("\nYour grade is B+");
    } else if (percentage >= 60 && percentage < 70) {
        printf("\nYour grade is B");
    } else if (percentage >= 50 && percentage < 60) {
        printf("\nYour grade is C");
    } else if (percentage >= 40 && percentage < 50) {
        printf("\nYour grade is D+");
    } else {
        printf("\nFail");
    }

            }
        }
     if(!dil){
     	printf("\n This rollno student not found please re enter your rollon ");
	 }
	 else{
	 	printf("\n You can see your result");
	 }




        fclose(file);
    }
	

void show_all_the_student(){
	int rollNo;
	float p, percentage,GPA;
	
	
        file = fopen("students.txt", "r");
        if (file == NULL) {
            printf("Error opening the file.\n");
            
        }

         while (fscanf(file,"Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                      student.name, &student.roll, &student.account, &student.c_programming, &student.english,
                      &student.project, &student.maths, &student.electronic) != EOF) {
             
                printf("Student Details \n");
                printf("Name: %s\n", student.name);
                printf("Roll No: %d\n", student.roll);
                printf("Account Marks: %d\n", student.account);
                printf("C Programming Marks: %d\n", student.c_programming);
                printf("English Marks: %d\n", student.english);
                printf("Project Marks: %d\n", student.project);
                printf("Maths Marks: %d\n", student.maths);
                printf("Electronic Marks: %d\n", student.electronic);
                  p=student.account+student.c_programming+student.english+student.project+student.maths+student.electronic;
                    percentage=p/6.0;
                    
                    GPA=(percentage / 100) * 4;
                
                printf("\n Your GPA =%.2f",GPA);
                
   

    if (percentage > 90) {
        printf("\nYour grade is A+");
    } else if (percentage >= 80 && percentage <= 90) {
        printf("\nYour grade is A");
    } else if (percentage >= 70 && percentage < 80) {
        printf("\nYour grade is B+");
    } else if (percentage >= 60 && percentage < 70) {
        printf("\nYour grade is B");
    } else if (percentage >= 50 && percentage < 60) {
        printf("\nYour grade is C");
    } else if (percentage >= 40 && percentage < 50) {
        printf("\nYour grade is D+");
    } else {
        printf("\nFail");
    }

            
        }


        fclose(file);
        
}
void Remove(){
	int rollNo;
	
	
	printf("Enter the Roll No to remove: ");
    scanf("%d", &rollNo);

    FILE *file_readd, *file_writee;
    file_readd = fopen("students.txt", "r");
    file_writee = fopen("new_students.txt", "w");

    if (file_readd == NULL || file_writee == NULL) {
        printf("Error opening the file.\n");
        
    }

    
         int puspa=0;
    while (fscanf(file_readd, "Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                  student.name, &student.roll, &student.account, &student.c_programming, &student.english,
                  &student.project, &student.maths, &student.electronic) != EOF) {

        if (student.roll != rollNo) {
        	puspa=1;
            fprintf(file_writee, "Name: %s\n Roll: %d\n account: %d\n c_programming: %d\n english: %d\n project: %d\n maths: %d\n electronic: %d\n",
                    student.name, student.roll, student.account, student.c_programming, student.english,
                    student.project, student.maths, student.electronic);
        }
        
    }

    fclose(file_readd);
    fclose(file_writee);

    remove("students.txt");
    rename("new_students.txt", "students.txt");
    
	
    printf("Remove the student marksheet successfully");


}

