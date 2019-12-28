#include <Servo.h>
#define trigPin 7

#define echoPin 6
int maximumRange = 500; //kebutuhan akan maksimal range
int minimumRange = 0; //kebutuhan akan minimal range
long duration, distance; //waktu untuk kalkulasi jarak
const int Transistor = 10;
Servo servo;

void setup()

{

Serial.begin (9600);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

servo.attach(8);

}

void loop()

{

long duration, distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = duration/58.2;

if (distance < 5)
{servo.write(0);
delay(15);
}
else if (distance > 5 && distance <10)

{servo.write(20);
delay(15);
}
else if (distance > 10 && distance < 15 )
{servo.write(40);
delay(15);
}
else if (distance >15 && distance < 20)
{servo.write(60);
delay(15);
}
else if (distance >20 && distance < 25)
{servo.write(80);
delay(15);
}
else if (distance >25 && distance < 30)
{servo.write(100);
delay(15);
}
else if (distance >30 && distance < 35)
{servo.write(120);
delay(15);
}
else if (distance >35 && distance < 40)
{servo.write(140);
delay(15);
}
else if (distance >40 && distance < 45)
{servo.write(160);
delay(15);
}
else if (distance >45 && distance < 50)
{servo.write(165);
delay(15);
}

Serial.print(distance);
Serial.println(" cm");


delay(100);

}
