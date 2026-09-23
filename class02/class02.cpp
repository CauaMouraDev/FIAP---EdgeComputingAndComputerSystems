// C++ code
//

int botao = 8;
int led = 13;

void setup()
{
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT_PULLUP);
}

void loop()
{
    int statebutton = digitalRead(botao);

    if (statebutton == HIGH)
    {
        Serial.println("Botão pressionado");
        digitalWrite(led, HIGH);
    }
    else
    {
        digitalWrite(led, LOW);
    }
}

