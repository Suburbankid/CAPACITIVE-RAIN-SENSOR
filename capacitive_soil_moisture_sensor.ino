//USING THE CAPACITIVE SOIL MOISTURE SENSOR AS RAIN SENSOR 
void setup() {
 
  Serial.begin(9600);
}

void loop() {

int soilval=0;
  for(int i=0;i<10;i++)
  {
soilval=soilval+analogRead(A1);//TAKE THE AVERAGE OF 10 READINGS IN 10 seconds
delay(1000);                  //Delay of 1 second
  }
  soilval=soilval/10;           
Serial.print("Rain : "); 
Serial.print(soilval);
Serial.println();
}
