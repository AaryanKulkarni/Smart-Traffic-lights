/*-----------------------------------------------------------------------------------------
 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
 *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
 * Signal      Pin          Pin           Pin       Pin        Pin              Pin
 * -----------------------------------------------------------------------------------------
 * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
 * SPI SS      SDA(SS)      10            53        D10        10               10
 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
*/
#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9 
MFRC522 mfrc522(SS_PIN, RST_PIN);
const int r1=7;
const int y1=8;
const int g1=2;
const int r2=3;
const int y2=4;
const int g2=5;
const int buz=6;
const int r3=14;
const int y3=15;
const int g3=16;
const int r4=17;
const int y4=18;
const int g4=19;
void setup()
{
  Serial.begin(9600);   
  SPI.begin();      
  mfrc522.PCD_Init();
  pinMode(r1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(y3,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(y4,OUTPUT);
  pinMode(g4,OUTPUT);
  pinMode(buz,OUTPUT);
}
void loop()
{
  check_card();
  digitalWrite(buz,LOW);
  digitalWrite(g1,HIGH);
  check_card();
  digitalWrite(r2,HIGH);
  check_card();
  digitalWrite(r3,HIGH);
  check_card();
  digitalWrite(r4,HIGH);
  check_card();
  digitalWrite(r1,LOW);
  check_card();
  digitalWrite(y1,LOW);
  check_card();
  digitalWrite(y2,LOW);
  check_card();
  digitalWrite(y3,LOW);
  check_card();
  digitalWrite(y4,LOW);
  check_card();
  digitalWrite(g2,LOW);
  check_card();
  digitalWrite(g3,LOW);
  check_card();
  digitalWrite(g4,LOW);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  // y1 y2 high
  digitalWrite(g1,LOW);
  check_card();
  digitalWrite(r2,LOW);
  check_card();
  digitalWrite(r3,HIGH);
  check_card();
  digitalWrite(r4,HIGH);
  check_card();
  digitalWrite(r1,LOW);
  check_card();
  digitalWrite(y1,HIGH);
  check_card();
  digitalWrite(y2,HIGH);
  check_card();
  digitalWrite(y3,LOW);
  check_card();
  digitalWrite(y4,LOW);
  check_card();
  digitalWrite(g2,LOW);
  check_card();
  digitalWrite(g3,LOW);
  check_card();
  digitalWrite(g4,LOW);
  check_card();
  delay(1000);
  //g2 high
  check_card();
  digitalWrite(g1,LOW);
  check_card();
  digitalWrite(g2,HIGH);
  check_card();
  digitalWrite(r3,HIGH);
  check_card();
  digitalWrite(r4,HIGH);
  check_card();
  digitalWrite(r1,HIGH);
  check_card();
  digitalWrite(r2,LOW);
  check_card();
  digitalWrite(y1,LOW);
  check_card();
  digitalWrite(y2,LOW);
  check_card();
  digitalWrite(y3,LOW);
  check_card();
  digitalWrite(y4,LOW);
  check_card();
  digitalWrite(g3,LOW);
  check_card();
  digitalWrite(g4,LOW);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  //y2 y3 high
  digitalWrite(g2,LOW);
  check_card();
  digitalWrite(y2,HIGH);
  check_card();
  digitalWrite(y3,HIGH);
  check_card();
  digitalWrite(r4,HIGH);
  check_card();
  digitalWrite(r1,HIGH);
  check_card();
  digitalWrite(g1,LOW);
  check_card();
  digitalWrite(r2,LOW);
  check_card();
  digitalWrite(r3,LOW);
  check_card();
  digitalWrite(y1,LOW);
  check_card();
  digitalWrite(y4,LOW);
  check_card();
  digitalWrite(g3,LOW);
  check_card();
  digitalWrite(g4,LOW);
  check_card();
  delay(1000);
  check_card();
  //g3 high
  digitalWrite(g3,HIGH);
  check_card();
  digitalWrite(r4,HIGH);
  check_card();
  digitalWrite(r2,HIGH);
  check_card();
  digitalWrite(r1,HIGH);
  check_card();
  digitalWrite(r3,LOW);
  check_card();
  digitalWrite(g2,LOW);
  check_card();
  digitalWrite(g1,LOW);
  check_card();
  digitalWrite(y1,LOW);
  check_card();
  digitalWrite(y2,LOW);
  check_card();
  digitalWrite(y3,LOW);
  check_card();
  digitalWrite(y4,LOW);
  check_card();
  digitalWrite(g4,LOW);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  //y3 y4 high
  digitalWrite(y2,LOW);
  check_card();
  digitalWrite(y3,HIGH);
  check_card();
  digitalWrite(y4,HIGH);
  check_card();
  digitalWrite(r1,HIGH);
  check_card();
  digitalWrite(r2,HIGH);
  check_card();
  digitalWrite(r4,LOW);
  check_card();
  digitalWrite(g1,LOW);
  check_card();
  digitalWrite(r3,LOW);
  check_card();
  digitalWrite(y1,LOW);
  check_card();
  digitalWrite(g2,LOW);
  check_card();
  digitalWrite(g3,LOW);
  check_card();
  digitalWrite(g4,LOW);
  check_card();
  delay(1000);
  check_card();
  //g4 high
  digitalWrite(g4,HIGH);
  check_card();
  digitalWrite(r2,HIGH);
  check_card();
  digitalWrite(r1,HIGH);
  check_card();
  digitalWrite(r3,HIGH);
  check_card();
  digitalWrite(g3,LOW);
  check_card();
  digitalWrite(r4,LOW);
  check_card();
  digitalWrite(g2,LOW);
  check_card();
  digitalWrite(g1,LOW);
  check_card();
  digitalWrite(y1,LOW);
  check_card();
  digitalWrite(y2,LOW);
  check_card();
  digitalWrite(y3,LOW);
  check_card();
  digitalWrite(y4,LOW);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  delay(1000);
  check_card();
  // y1 y4 high
  digitalWrite(y1,HIGH);
  check_card();
  digitalWrite(y4,HIGH);
  check_card();
  digitalWrite(r1,LOW);
  check_card();
  digitalWrite(r2,HIGH);
  check_card();
  digitalWrite(y2,LOW);
  check_card();
  digitalWrite(y3,LOW);
  check_card();
  digitalWrite(r4,LOW);
  check_card();
  digitalWrite(g1,LOW);
  check_card();
  digitalWrite(r3,LOW);
  check_card();
  digitalWrite(g2,LOW);
  check_card();
  digitalWrite(g3,LOW);
  check_card();
  digitalWrite(g4,LOW);
  check_card();
 check_card();
  delay(1000);
  check_card;

}
void check_card()
{
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
   Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "9B A4 F1 0B"||content.substring(1) == "26 42 6E F8") //ENTER THE CARD TO BE REGISTERED
  {
    digitalWrite(buz,HIGH);
    digitalWrite(g1,HIGH);
    digitalWrite(r2,HIGH);
    digitalWrite(r3,HIGH);
    digitalWrite(r4,HIGH);
    digitalWrite(r1,LOW);
    digitalWrite(y1,LOW);
    digitalWrite(y2,LOW);
    digitalWrite(y3,LOW);
    digitalWrite(y4,LOW);
    digitalWrite(g2,LOW);
    digitalWrite(g3,LOW);
    digitalWrite(g4,LOW);
    delay(5000);
    digitalWrite(buz,LOW);
  }
  else
  {
    digitalWrite(buz,LOW);
  }
}
//To register a new rfid card:
/*void setup() {
	Serial.begin(9600);		// Initialize serial communications with the PC
	while (!Serial);		// Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
	SPI.begin();			// Init SPI bus
	mfrc522.PCD_Init();		// Init MFRC522
	delay(4);				// Optional delay. Some board do need more time after init to be ready, see Readme
	mfrc522.PCD_DumpVersionToSerial();	// Show details of PCD - MFRC522 Card Reader details
	Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));
}

void loop() {
	// Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
	if ( ! mfrc522.PICC_IsNewCardPresent()) {
		return;
	}

	// Select one of the cards
	if ( ! mfrc522.PICC_ReadCardSerial()) {
		return;
	}

	// Dump debug info about the card; PICC_HaltA() is automatically called
	mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
}
*/