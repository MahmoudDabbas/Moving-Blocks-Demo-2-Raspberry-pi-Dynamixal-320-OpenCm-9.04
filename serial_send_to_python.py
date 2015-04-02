
int x=0;

void setup(){
  //Serial2 Serial initialize
  Serial2.begin(57600);  
}
void loop(){
  // when you typed any character in terminal
    Serial2.print((char)x);
    x++;
    delay(500);
}
