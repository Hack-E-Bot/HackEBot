#include <HackEBot_Move.h>
#include <HackEBot_Line_Sensor.h>

// HackEBot_Move robot(LeftPin, RightPin);
   HackEBot_Move robot(12, 7);

// HackEBot_Line_Sensor Line(T); -- T = The point were White becomes Black.
   HackEBot_Line_Sensor Line(300);
   
int MoveSpeed = 50;
int TurnSpeed = 50;
int CenterLinePin = A1;
int LeftLinePin = A3;
int LineMove;

void setup()
{
}

void loop()
{
  LineMove = Line.Read2Sensors(CenterLinePin, LeftLinePin);
    switch (LineMove) {
      case 'F':
        robot.MoveF(5, MoveSpeed);
        delay(10);
        break;
      case 'L':
        robot.TurnL(1, TurnSpeed);
        delay(10);
        break;
      case 'R':
        robot.TurnR(1, TurnSpeed);
        delay(10);
        break;
    }
  delay(10);
}

