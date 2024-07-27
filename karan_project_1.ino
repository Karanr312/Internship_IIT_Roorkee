const int led = 2;  // Adjust this to an available GPIO pin on ESP32
const int buz = 27;  // Adjust this to an available GPIO pin on ESP32
String code = "";
int len = 0;
char ch;
int unit_delay = 250;

void dot() {
  Serial.print(".");
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  delay(unit_delay);
  digitalWrite(led, LOW);
  digitalWrite(buz, LOW);
  delay(unit_delay);
}

void dash() {
  Serial.print("-");
  digitalWrite(led, HIGH);
  digitalWrite(buz, HIGH);
  delay(unit_delay * 3);
  digitalWrite(led, LOW);
  digitalWrite(buz, LOW);
  delay(unit_delay * 3);
}

void A() { dot(); delay(unit_delay); dash(); delay(unit_delay); }
void B() { dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void C() { dash(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); }
void D() { dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void E() { dot(); delay(unit_delay); }
void F_morse() { dot(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); }
void G() { dash(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); }
void H() { dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void I() { dot(); delay(unit_delay); dot(); delay(unit_delay); }
void J() { dot(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }
void K() { dash(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); }
void L() { dot(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void M() { dash(); delay(unit_delay); dash(); delay(unit_delay); }
void N() { dash(); delay(unit_delay); dot(); delay(unit_delay); }
void O() { dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }
void P() { dot(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); }
void Q() { dash(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); }
void R() { dot(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); }
void S() { dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void T() { dash(); delay(unit_delay); }
void U() { dot(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); }
void V() { dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); }
void W() { dot(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }
void X() { dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); }
void Y() { dash(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }
void Z() { dash(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void one() { dot(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }
void two() { dot(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }
void three() { dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }
void four() { dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dash(); delay(unit_delay); }
void five() { dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void six() { dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void seven() { dash(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void eight() { dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); dot(); delay(unit_delay); }
void nine() { dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dot(); delay(unit_delay); }
void zero() { dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); dash(); delay(unit_delay); }

void morse() {
  switch (ch) {
    case 'A': case 'a': A(); break;
    case 'B': case 'b': B(); break;
    case 'C': case 'c': C(); break;
    case 'D': case 'd': D(); break;
    case 'E': case 'e': E(); break;
    case 'F': case 'f': F_morse(); break;
    case 'G': case 'g': G(); break;
    case 'H': case 'h': H(); break;
    case 'I': case 'i': I(); break;
    case 'J': case 'j': J(); break;
    case 'K': case 'k': K(); break;
    case 'L': case 'l': L(); break;
    case 'M': case 'm': M(); break;
    case 'N': case 'n': N(); break;
    case 'O': case 'o': O(); break;
    case 'P': case 'p': P(); break;
    case 'Q': case 'q': Q(); break;
    case 'R': case 'r': R(); break;
    case 'S': case 's': S(); break;
    case 'T': case 't': T(); break;
    case 'U': case 'u': U(); break;
    case 'V': case 'v': V(); break;
    case 'W': case 'w': W(); break;
    case 'X': case 'x': X(); break;
    case 'Y': case 'y': Y(); break;
    case 'Z': case 'z': Z(); break;
    case '0': zero(); break;
    case '1': one(); break;
    case '2': two(); break;
    case '3': three(); break;
    case '4': four(); break;
    case '5': five(); break;
    case '6': six(); break;
    case '7': seven(); break;
    case '8': eight(); break;
    case '9': nine(); break;
    case ' ': delay(unit_delay * 7); Serial.print("/ "); break;
    case '\n': Serial.println(""); break;
    default: Serial.println("Unknown Character!"); break;
  }
}

void String2Morse() {
  len = code.length();
  for (int i = 0; i < len; i++) {
    ch = code.charAt(i);
    morse();
  }
}

void setup() {
  Serial.begin(115200);  // ESP32 usually works with 115200 baud rate
  pinMode(led, OUTPUT);
  pinMode(buz, OUTPUT);
  Serial.println("Please type your message here ");
}

void loop() {
  if (Serial.available()) {
    code = Serial.readString();
    Serial.println(code + " = ");
    String2Morse();
    Serial.println();
  }
  delay(1000);
}
