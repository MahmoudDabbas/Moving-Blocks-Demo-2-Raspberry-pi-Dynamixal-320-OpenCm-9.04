void setup(){
  //Serial2 Serial initialize
  Serial2.begin(57600);  
  pinMode(BOARD_LED_PIN, OUTPUT);

}
void loop(){
  // when you typed any character in terminal
  if(Serial2.available()){
    //print it out though USART2(RX2,TX2)
    SerialUSB.println(Serial2.read());//SerialUSB.print("\r\n");  
    delay(1000);
    Serial2.print((char)Serial2.read());
    Serial2.print("d456");

  }
}
