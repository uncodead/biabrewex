#include <BrewUno/Buzzer.h>

void Buzzer::Ring()
{
  digitalWrite(BUZZER_BUS, HIGH);
  delay(500);
  digitalWrite(BUZZER_BUS, LOW);
  delay(500);
  digitalWrite(BUZZER_BUS, HIGH);
  delay(500);
  digitalWrite(BUZZER_BUS, LOW);
}