/* Prints a date in legal form */
#include <stdio.h>

void output(int,int,int);
int main (void)
{ 
  int month, day, year;
  printf("Enter date (mm/dd/yyyy)(can be any year as long as it is a positive integer) : ") ;
  scanf("%d /%d /%d", &month, &day, &year) ;
  printf ("Dated this %d", day) ;
  switch (day){
	case 1: case 21 : case 31: 
	printf("st") ; break;
	case 2: case 22 :
	printf("nd") ; break;
	case 3: case 23 :
	printf("rd") ; break;
	default: printf("th") ; break;
	}
  printf(" day of ") ;

  switch (month) {
	case 1 : printf ( "January") ;
	break;
	case 2 : printf ("February") ;
	break;
	case 3 : printf ( "March") ;
	break ;
	case 4 : printf ("April") ;
	break ;
	case 5 : printf ( "May") ;
	break ;
	case 6 : printf ("June") ;
	break;
	case 7 : printf ("July") ;
	break ;
	case 8 : printf ("August") ;
	break ;
	case 9 : printf ("September") ; 
	break;
	case 10 : printf ( "October") ;
	break ;
	case 11 : printf ( "November") ;
	break ;
	case 12 : printf ( "December") ;
	break ;
	}

  printf(", %.2d.\n" , year) ;
  output(month,day,year);
  printf("\n");
  system("pause");
  return 0;
  
} 


void output(int month, int day, int year){
	int sum = 0 , result;
	for(;year>1; year--){
		if((year%4==0 && year%100!=0)||(year%400==0))
		sum += 366;
		else
		sum += 365;
	}
	
	for(;month>1; month--){
		if(month==1 || month==3|| month==5|| month==7|| month==8|| month==10 || month==12)
		sum += 31;
		else if(month==4 || month==6|| month==9|| month==11)
		sum += 30;
		else if(month==2)
			if(year%4==0 && year%100!=0 ||year%400==0)
			sum += 29;
			else
			sum += 28;
	}
	
	sum += day;
	result = (sum%7);
	
	switch (result) {
	case 1 : printf ("Tuesday") ;
	break;
	case 2 : printf ("Wednesday") ;
	break;
	case 3 : printf ("Thursday") ;
	break ;
	case 4 : printf ("Friday") ;
	break ;
	case 5 : printf ("Saturday") ;
	break ;
	case 6 : printf ("Sunday") ;
	break;
	case 0 : printf ("Monday") ;
	break ;
}
}


