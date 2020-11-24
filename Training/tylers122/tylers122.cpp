#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <math.h>

using namespace std;

double smallestAngle(double angleFrom0);
double RotVehicle(double angle);
string currentTime();
double CalcRotTime(double angle);
string CalcEndTime(double msTime, string startTime);

int main()
{
    double angleFrom0;
    string startTime = currentTime(); //current time

    cin >> angleFrom0;

    int angle = smallestAngle(angleFrom0); //most efficient rotation

    RotVehicle(angle); //rotate vehicle to 0 degrees

    cout << "Done. Rot Degree: " << angle << " ~ Start " << startTime << " | End " << CalcEndTime(CalcRotTime(angle), startTime) << endl;
}

double smallestAngle(double angleFrom0) {
    if (angleFrom0 >= 180) angleFrom0 -= (angleFrom0 - 180) * 2; //most efficient rotation
    return angleFrom0;
}

double RotVehicle(double angle) {
    return angle - angle; //rotates vehicle to 0 degrees
}

string currentTime() {
    time_t t = time(0);
    char buffer[9] = {0};

    strftime(buffer, 9, "%H:%M:%S", localtime(&t));
    return string(buffer); //returns current time
}

double CalcRotTime(double angle) {
    return (angle * 2) * 750; //time in ms how long rotation takes
}

string CalcEndTime(double msTime, string startTime) {
    int startHours = stoi(startTime.substr(0, 2)); //starting hours
    int startMin = stoi(startTime.substr(3, 2)); //starting minutes
    int startSec = stoi(startTime.substr(6, 2)); //starting seconds


    double timeSec = msTime / 1000.0; //time took to rotate in seconds
    int hours = timeSec / 3600; //rotation time hours
    int minutes = fmod(timeSec, 3600) / 60; //rotation time minutes
    double seconds = fmod(fmod(timeSec, 3600), 60); //rotation time seconds

    int endHours = startHours + hours; //rotation end time hours
    int endMin = startMin + minutes; //rotation end time minutes
    double endSec = startSec + seconds; //rotation end time seconds

    if (endMin >= 60) {
        ++endHours;
        endMin -= 60;
    }
    if (endSec >= 60) {
        ++endMin;
        endSec -= 60;
    }

    string endTime = to_string(endHours) + ":" + to_string(endMin) + ":" + to_string(endSec);

    return endTime;
}


