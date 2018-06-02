#include <stdio.h>
 
struct location {
   char* description;
   float latitute;
   float longitute;
}; // notice the ;

int main(void){
   struct location my_college = {"GVSU", 42.8989, -85.8857};

   printf("Come visit %s at geo:%f,%f\n",
   my_college.description,
   my_college.latitute,
   my_college.longitute); 
}
