#include<stdio.h>
struct distances{
	
	int inch;
	int feet;	
};
main(){
	 struct distances a1,a2,total;
 
    printf("ENTER INCH AND FEET FIRST distances= ");
    scanf("%i%i",&a1.feet,&a1.inch);
    printf("ENTER INCH AND FEET SECOND distances= ");
    scanf("%i%i",&a2.feet,&a2.inch);
    
    
    total.inch= a1.inch+a2.inch;
    total.feet= a1.feet+a2.feet;
    
    if(total.inch>=12){
    	
    	total.feet= total.feet +total.inch/12;
        total.inch %= 12;
	}
	 printf("TOTAL is= %d' %d''", total.feet, total.inch);    
}
  
    
