int ldr=A0;
int vldr=0;
int B=11;
int G=10;
int R=9;


void setup(){
  Serial.begin(9600);
  pinMode(B,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(R,OUTPUT);
  }

void loop(){
vldr=analogRead(ldr);
Serial.print("Valor LDR :");
Serial.println(vldr);
delay(500);
int vmldr=map(vldr, 26,700,0,10);
Serial.println();
delay(500);
analogWrite(R,vmldr);
analogWrite(G,255);
analogWrite(B,255);
}
