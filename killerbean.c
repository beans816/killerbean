
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[200];

   strcpy(command, "sudo find /home/username/Desktop/shred -exec shred {} -uvz \\;" );//safely deletes in a directory called shred
   //printf(command);//debugging
   system(command);

   return(0);
} 
