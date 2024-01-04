#include <stdio.h>
#include <stdbool.h>  
 
int main(){
 
    // logical operators = && (AND) checks if two or more conditions are true
    
    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){ //its same as sunny ==1 or sunny == true 
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }
   
    return 0;
}