#include<stdio.h>
#include<stdlib.h>
int main(){

float k,s,t;
float val,ans;
float answer1,answer2;

printf("VALUE OF K\n"); 
scanf("%f",&k);     //Reads value of k.

printf("VALUE OF S\n");
scanf("%f",&s);     //Reads value of s.

printf("VALUE OF T\n");
scanf("%f",&t);     //Reads value of t.

val=(s*s)-(4*k*t);    //values k,s,t which are inside the square root
ans=(val)*0.5 ;   //Square root of the val calculated

if(ans >= 0){    //if the discriminant is non-negative 
	answer1=(-s+ans)/(2.0*k);   //calculating the value of answer1.
	answer2=(-s-ans)/(2.0*k);   //calculating the value of answer2.
	
	printf("THE FIRST ROOT IS :%f\n",answer1); //display the result
	printf("THE SECOND ROOT IS: %f\n",answer2); //display the result
	
} else if(ans==0) {   //if the discriminant is equal to zero
	printf("REPEATED ROOT IS %f\n",-s/(2*k)); 
}else{         //if the discriminant is negative
printf("NO REAL VALUE %f\n",ans); //display the result
}
return 0;






}
