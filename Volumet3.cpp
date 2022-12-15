#include<stdio.h>

struct marks{
	
    int roll_no;
    char name[100];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main(){
	
	struct marks o[5];
	int i,j,a;
	for(i=0; i<5; i++){

	printf("Enter roll no:- ");
    scanf("%d", &o[i].roll_no);
    
    printf("Enter name:- ");
    scanf("%s",&o[i].name);
    
    printf("Enter chem marks:- ");
    scanf("%f", &o[i].chem_marks);
    
    printf("Enter maths marks:- "); 
    scanf("%f", &o[i].maths_marks);

	printf("Enter phy marks:- ");
    scanf("%f", &o[i].phy_marks);
	
	printf("\n");
}
	
	for(i=0; i<5; i++){
	
    		printf("%d\n%s\n%.2f\n%.2f\n%.2f\n",o[i].roll_no,o[i].name,o[i].chem_marks,o[i].maths_marks,o[i].phy_marks);
		
		}
}
