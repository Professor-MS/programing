#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
struct SensorData
{
    int leftSensor;
    int rightSensor;
};
SensorData getSonsorData()
{
    SensorData data;
    data.leftSensor = rand() % 2;
    data.rightSensor = rand() % 2;
    return data;
}

void controlMovement(int leftMotor, int rightMotor)
{
    if (leftMotor == 1 && rightMotor == 1)
    {
        cout << "Moving Forward" << endl;
    }
    else if (leftMotor == 1 && rightMotor == 0)
    {
        cout << "Turning Left. " << endl;
    }
}
int main()
{
    cout << "Starting Line Following Robot Simulation " << endl;
    for (int i = 0; i < 10; i++)
    {
        SensorData sensors = getSonsorData();

        int leftMotor = sensors.leftSensor;
        int rightMotor = sensors.rightSensor;

        controlMovement(leftMotor, rightMotor);

        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << "Simultion Ended." << endl;
    return 0;
}