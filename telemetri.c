
FILE *log_file = fopen(log_file_name, "a+");
void setup(){

}
void loop(){
  
    if (log_file == NULL)
    {
      perror("Error opening log file");
    }
    fprintf(log_file,"%s\n",message);
    fclose(log_file);
}