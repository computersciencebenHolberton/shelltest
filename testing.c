void loop(void){
  char * line;
  char ** args;
  int status;

  //read commands entered by the user                                                                                                
  //it will parse the commands can understand the undersatand the commands                                                           
  //execute the commands                                                                                                             

  do{
    printf("%s","Overwatch@root >");
    line = read();
    //args is an array of strings                                                                                                    
    //echo samagra is good                                                                                                           

    args = parse(line);
    status = execute(args);

    //free the memory                                                                                                                
    free(line);
    free(arg);
  }while(status);
}


int main (int argc, char** argv){
  /* code */

  //load the config here                                                                                                             

  //run an REPL loop                                                                                                                 

  loop ();

  //perform any shutdown cleanup                                                                                                     

  return (0);


