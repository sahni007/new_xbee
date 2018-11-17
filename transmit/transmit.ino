#define led D0
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
//  digitalWrite(led,HIGH);
//  sendRemote(0x05);
//  delay(5000);
//  digitalWrite(led,LOW);
//  sendRemote(0x04);
//delay(5000);
  Serial.write(0x7E);
Serial.write((byte)0x0);
Serial.write(0x10);
Serial.write(0x17);

Serial.write((byte)0x00);
Serial.write((byte)0x00);
Serial.write((byte)0x00);
Serial.write((byte)0x00);
Serial.write((byte)0x00);
Serial.write((byte)0x00);
Serial.write((byte)0x00);

Serial.write(0xFF);
Serial.write(0xFF);

Serial.write(0xFE);
Serial.write(0x02);

Serial.write('D');
Serial.write('1');
Serial.write(0x05);
long sum = (0x17 + 0xFF + 0xFF + 0xFF + 0xFE + 0x02 + 'D' + '1' + 0x05);
Serial.write( 0xFF - ( sum & 0xFF ));
}

//void sendRemote(char val)
//{
//  Serial.write(0x7E);
//Serial.write((byte)0x0);
//Serial.write(0x10);
//Serial.write(0x17);
//Serial.write((byte)0x00);
//Serial.write((byte)0x00);
//Serial.write((byte)0x00);
//Serial.write((byte)0x00);
//Serial.write((byte)0x00);
//Serial.write((byte)0x00);
//Serial.write((byte)0x00);
//Serial.write(0xFF);
//Serial.write(0xFF);
//Serial.write(0xFE);
//Serial.write(0x02);
//Serial.write('D');
//Serial.write('1');
//Serial.write(0x05);
//long sum = (0x17 + 0xFF + 0xFF + 0xFF + 0xFE + 0x02 + 'D' + '1' + val);
//Serial.write(0xFF-(sum & 0xFF));
//}
