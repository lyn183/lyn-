#define LED  2
#define KEY  10
 
int buttonState = HIGH;//记录当前按键状态
 
void setup() {
  //配置2号引脚作为输出引脚
   pinMode(LED,OUTPUT);
   digitalWrite(LED,HIGH);//灭掉LED
   //配置10号引脚为输入引脚
   pinMode(KEY,INPUT);
}
 
void loop() {
 
  buttonState = digitalRead(KEY);//读取当前8266状态
  if(buttonState == LOW){
    digitalWrite(LED,LOW);//点亮LED
  }else{
    digitalWrite(LED,HIGH);//熄灭LED
  }
}
