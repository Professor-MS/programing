#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <webots/DistanceSensor.hpp>
#include <iostream>
using namespace webots;
#define TIME_STEP 64;
using namespace std;

int main()
{
    Robot *robot = new Robot();

    Motor *leftMotor = robot->getMotor("left_wheel_motor");
    Motor *right = robot->getMotor("right_wheel_motor");
    leftMotor->setPosition(INFINITY);
    rightMotor->setPosition(INFINITY);

    DistanceSensor *frontSensor = robot->getDistanceSensor("front_sensor");
    frontSensor->enable(TIME_STEP);
    double maxSpeed = 6.28;
    double forwardSpeed = 0.5 * maxSpeed;
    double turnSpeed = 0.3 * maxSpeed;

    while (robot->step(TIME_STEP) != -1)
    {
        double frontDistance = frontSensor->getValue();
    }
    if (frontDistance < 950.0)
    {
        leftMotor->steVelocity()
    }
    return 0;
}