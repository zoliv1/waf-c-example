#include <stdio.h>

#include "liba/liba.h"
#include "libb/libb.h"

void libb_hello() {
  fprintf(stdout, "%s\n", "about to say hello from liba...");
  liba_hello();
  fprintf(stdout, "%s\n", "about to say hello from liba... [done]");

  fprintf(stdout, "%s\n", "hello from libb");
}

void libb_goodbye(){
 fprintf(stdout, "%s", "----------------");
}


void libb_how_are_you(){

  printf("c\'est pas une question\n");

}

void libb_happy(){
  printf("je suis un gros feneant\n");
}

 
/* EOF */
