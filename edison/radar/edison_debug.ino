/**
 * Monitor vzdusneho prostoru Edisonu.
 */
#include <IRremote.h>
#include <avr/pgmspace.h>

// pin, na kterem je pripojen infra sensor
int RECV_PIN = 13;

// nastartovani IR knihovny
IRrecv irrecv(RECV_PIN);
decode_results results;

// hashe ziskane monitoringem Edisona
const unsigned long kody[] PROGMEM = {
0x0759C8EC, 0xA7C52B4B, 0x45BB6940, 0xE565DD77, 0x9B4DFC78, 
0x3BB95ED7, 0x0DE5754C, 0x864ACF6B, 0x00BA1A80, 0xA1257CDF, 
0x7C55D1EC, 0xDEC62F0B, 0xD06B818C, 0x70D6E3EB, 0x4302FA60, 
0x895F7857, 0x8F50A938, 0x2FBC0B97, 0x71C9BD0C, 0x6D5CBDC3, 
0x993FF3EC, 0x39AB564B, 0x39F3C918, 0x0E41AFB7, 0x768BDB4C, 
0x16F73DAB, 0x5904EF20, 0x5497EFD7, 0x463D4258, 0xE6A8A4B7, 
0xB8D4BB2C, 0x660E958B, 0x90429FC0, 0x30AE021F, 0x9B173CEC, 
0x6E4EB44B, 0xC28D73CC, 0x62F8D62B, 0x634148F8, 0x0F33A63F, 
0x5E4D61EC, 0xFEB8C44B, 0x0D761C80, 0x3C597677, 0xF7AAF8E0, 
0x98165B3F, 0x985ECE0C, 0x12484F2B, 0x79766B8C, 0x19E1CDEB, 
0x844B08B8, 0x57828017, 0xABC13F98, 0x4C2CA1F7, 0x4C7514C4, 
0xF867720B, 0x60B19DA0, 0x011CFFFF, 0x6B863ACC, 0x3EBDB22B, 
0x306304AC, 0xD0CE670B, 0xA2FA7D80, 0x788FE137, 0x1D0161F8, 
0xBD6CC457, 0xD826BA0C, 0xFB0D7683, 0xFF9CF0EC, 0xA008534B, 
0xA050C618, 0x9BF26877, 0x9B5CDF0C, 0x3BC8416B, 0x9A34DEB8, 
0x7968F397, 0x34BA7600, 0xD525D85F, 0xD56E4B2C, 0x9F071163, 
0xC037A3EC, 0x60A3064B, 0x25ED0000, 0x9E43B877, 0x7B7F9338, 
0x1BEAF597, 0xEE170C0C, 0x3F28AA6B, 0x112E9FD8, 0xB19A0237, 
0x76E3FBEC, 0xEF3AB463, 0xAA8C36CC, 0x4AF7992B, 0x4B400BF8, 
0x7BB62E97, 0xE4B2A14C, 0x851E03AB, 0x9FD7F960, 0xC2BEB5D7, 
0xC74E3040, 0x67B9929F, 0x6802056C, 0x63A3A7CB, 0x630E1E60, 
0x037980BF, 0x61E61E0C, 0x411A32EB, 0xFC6BB554, 0x9CD717B3, 
0x9D1F8A80, 0x66B850B7, 0xCDE66D18, 0x6E51CF77, 0x890BC52C, 
0xABF281A3, 0xB081FC0C, 0x50ED5E6B, 0x5135D138, 0x4CD77397, 
0xB5219F2C, 0x558D018B, 0x7046F740, 0x932DB3B7, 0x84D30638, 
0x253E6897, 0xF76A7F0C, 0x7D509DAB, 0x90507A2B, 0xA0CBD402, 
0x51EED9D7, 0xCB21382E, 0xFC5C469F, 0x6A592BCE, 0x89C4CDCB, 
0x02F72C22, 0x96F02897, 0x36F5E9EE, 0x1B54712B, 0x614B4E1A, 
0xC73EC18B, 0x674482E2, 0x54A748B7, 0xCDD9A70E, 0x085999DF, 
0x4181FECE, 0x25E0860B, 0x6BD762FA, 0xFE6A4F2B, 0x43BA2942, 
0x5DB679FF, 0xA3AD56EE, 0x211E67CB, 0x5A46CCBA, 0x3EA553F7, 
0x849C30E6, 0x516D00BF, 0x8A9565AE, 0xDED587EB, 0x5807E642, 
0x0767A357, 0x18347EEE, 0xFC93062B, 0x4289E31A, 0xD51CCF4B, 
0x42C832BA, 0x3468FA1F, 0x7A5FD70E, 0x395CE12B, 0xD91120C2, 
0x8A342697, 0x036684EE, 0x9FFF4A37, 0x3FB389CE, 0xFF4B750B, 
0x454251FA, 0x1E33D78B, 0x2F00B322, 0x135F3A5F, 0x5956174E, 
0xEBE9037F, 0x599466EE, 0x4B352E53, 0x912C0B42, 0x36F8A577, 
0x47C5810E, 0x2C24084B, 0x721AE53A, 0x67473E6B, 0x78141A02, 
0xF4AFC597, 0x6DE223EE, 0x39C778B7, 0x4A42D28E, 0xFB65D863, 
0x749836BA, 0xA5D3452B, 0x13D02A5A, 0x333BCC57, 0xAC6E2AAE, 
0x40672723, 0xE06CE87A, 0xC4CB6FB7, 0x0AC24CA6, 0x70B5C017, 
0x10BB816E, 0xFE1E4743, 0x7750A59A, 0xB1D0986B, 0xEAF8FD5A, 
0xCF578497, 0x154E6186, 0xA7E14DB7, 0xED3127CE, 0x072D788B, 
0x4D24557A, 0xCA956657, 0x03BDCB46, 0xE81C5283, 0x2E132F72, 
0xFAE3FF4B, 0x340C643A, 0x884C8677, 0x017EE4CE, 0x04D1AA0B, 
0x154D03E2, 0xC67009B7, 0x3FA2680E, 0x70DD767F, 0xDEDA5BAE, 
0xFE45FDAB, 0x77785C02, 0x0B715877, 0xAB7719CE, 0x8FD5A10B, 
0xD5CC7DFA, 0x3BBFF16B, 0xDBC5B2C2, 0xC9287897, 0x425AD6EE, 
0x9B8497D7, 0xABFFF1AE, 0x5D22F783, 0xD65555DA, 0x0790644B, 
0x758D497A, 0x94F8EB77, 0x0E2B49CE, 0x4A8D9BEB, 0x5B08F5C2, 
0x0C2BFB97, 0x855E59EE, 0xB13004F7, 0xC1AB5ECE, 0x107C2FCB, 
0x56730CBA
};

void setup() {
  Serial.begin(9600);  // konzole, kam se pisou vysledky
  irrecv.enableIRIn(); // nastartovani IR prijimace
}

// slouzi k formatovanemu vypisu v dane soustave 
// (kopie ze std knihovny, rozsireno o formatovani)
void printNumber(unsigned long n, byte base, byte len)
{
  char buf[8 * sizeof(long) + 1]; 
  char *str = &buf[sizeof(buf) - 1];
  *str = '\0';
  // prevent crash if called with base == 1
  if (base < 2) base = 10;
  do {
    char c = n % base;
    n /= base;
    *--str = c < 10 ? c + '0' : c + 'A' - 10;
  } while(n);
  // right pad
  for (byte i = 0; i < len - strlen(str); i++) {
    Serial.write("0");
  }
  Serial.write(str);
}

// vypise vsechny kody, ktere na infra prijdou
void printCodes() {
  int i = 0;
  while (true) {
    if (irrecv.decode(&results)) {
      if (i < 10) {
        Serial.print("  ");
      } else if (i < 100) {
        Serial.print(" ");
      }
      Serial.print(i);
      Serial.print(" (BIN: ");
      printNumber(i, BIN, 8);
      Serial.print("): ");
      Serial.print("DEC: ");
      printNumber(results.value, DEC, 10);
      Serial.print(" | HEX: ");
      printNumber(results.value, HEX, 8);
      Serial.print(" | BIN: ");
      printNumber(results.value, BIN, 32);
      Serial.println();
      irrecv.resume(); // prijmi dalsi hodnotu
      i++;
    }  
  }
}

// vypise kody jako zdrojak do C++ pro Arduino
void printCodesSource() {
  int i = 0;
  Serial.println("const unsigned long kody[] PROGMEM = {");
  while (true) {
    if (irrecv.decode(&results)) {
      Serial.print("0x");
      printNumber(results.value, HEX, 8);
      Serial.print(", ");
      if ((i + 1) % 5 == 0) {
        Serial.println();
      }
      irrecv.resume(); // prijmi dalsi hodnotu
      i++;
    }  
  }
}

// dekoduje ziskanou hodnotu
int decodeValue(unsigned long code) {
  byte i = 0;
  unsigned long kod = 0;
  while (i <= 255) {
    kod = pgm_read_dword(&kody[i]); 
    if (kod == code) {
      return i;
    }
    i++;
  }
  // neznama hodnota
  return -1;
}

// vypise dekodovanou hodnotu
void printDecodedValue(unsigned long code1, unsigned long code2) {
  Serial.println((int)decodeValue(code1) * 255 + decodeValue(code2));
}

// monitoruje vzdusny prostor, vypisuje vse, co zachyti
void receiveValues() {
  int i = 0;
  unsigned long code1 = 0;
  unsigned long code2 = 0;
  Serial.println("Receiving values...");
  while (true) {
    if (irrecv.decode(&results)) {
      Serial.print("HEX: 0x");
      printNumber(results.value, HEX, 8);
      Serial.print("\tDecoded to: ");
      int decoded = decodeValue(results.value);
      if (decoded >= 0) {
        Serial.println(decoded);
      } else {
        Serial.println("*** unknown value ***");
      }
      if (decoded == 0xFF) {
        Serial.println("Received code 0xFF");
        i = 1;
      } else {
        if (i == 1) {
          code1 = results.value;
          i = 2;
        } else if (i == 2) {
          code2 = results.value;
          Serial.print("Decoded INT value: ");
          printDecodedValue(code1, code2);
          i = 0;
        }
      }
      irrecv.resume(); // prijmi dalsi hodnotu
    }  
  }  
}

void loop() {
  //printCodes();
  //printCodesSource();
  receiveValues();
}

