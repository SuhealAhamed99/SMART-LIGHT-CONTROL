#define BLYNK_TEMPLATE_ID "TMPL383-IkEbi"
#define BLYNK_TEMPLATE_NAME "Smart Light Control Task 1"
#define BLYNK_AUTH_TOKEN "XzmZoksu4Y1yFRdkXsAKmg3bHNOrK01d"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Wi-Fi credentials for Wokwi simulation
char ssid[] = "Wokwi-GUEST";
char password[] = "";

// Pin definitions
#define LED_PIN 2
#define BUTTON_PIN 4

bool ledState = false;

// Blynk Virtual Pin V1 handler
BLYNK_WRITE(V1) {
  ledState = param.asInt();
  digitalWrite(LED_PIN, ledState);
  Serial.println(ledState ? "LED ON (via Blynk)" : "LED OFF (via Blynk)");
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
  Serial.println("Smart Light Control Task 1 Started");
}

void loop() {
  Blynk.run();

  // Button press handling
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200); // Debounce
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    Serial.println(ledState ? "LED ON (via Button)" : "LED OFF (via Button)");

    // Reflect change in Blynk app
    Blynk.virtualWrite(V1, ledState);

    // Wait for button release
    while (digitalRead(BUTTON_PIN) == LOW) {
      delay(10);
    }
  }
}
