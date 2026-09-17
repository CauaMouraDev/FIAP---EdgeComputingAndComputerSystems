/*   
-----CLASS01 - Introdução a Arduino -----
*/

// C++ code
//

int ld1 = 13;
int ld2 = 10;
int ld3 = 8;
int bt = 12;

void setup()
{

    pinMode(ld1, OUTPUT);
    pinMode(ld2, OUTPUT);
    pinMode(ld3, OUTPUT);
    pinMode(bt, INPUT_PULLUP);
}

void loop()
{

    if (digitalRead(bt) == HIGH)
    {
        digitalWrite(ld1, HIGH);
        digitalWrite(ld2, HIGH);
        digitalWrite(ld3, HIGH);
    }
}