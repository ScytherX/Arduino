int ldr=A0;
int vldr=0;
int B=11;
int G=10;
int R=9;
int agua=A0;
int vagua=0;

void setup(){
 Serial.begin(9600);
  pinMode(B,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(R,OUTPUT);
}

void loop(){
vagua=analogRead(agua);
int vamp=map(vagua,0,600,0,10);
Serial.print("Nivel De Agua ");
Serial.println(vagua);
Serial.print("Valor Mapeado ");
Serial.println(vamp);
  
vldr=analogRead(ldr);
Serial.print("Valor LDR : ");
Serial.println(vldr);
delay(500);
int vmldr=map(vldr, 26,700,0,10);
Serial.println();
delay(500);

if(vamp >= 0 && vamp <= 199){
analogWrite(R,vmldr);
}

if(vamp >= 200 && vamp <= 399){
analogWrite(G,255);
}

if(vamp >= 400 && vamp <= 599){
analogWrite(B,255);
}
}
