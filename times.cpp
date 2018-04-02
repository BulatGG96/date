#include "times.h"

Times::Times()
{

}
Times::Times( int hour,int minutes, int secs){
    setHour(hour);
    setMins(minutes);
    setSecs(secs);
}
void Times::setHour(int hour){
    if ((hour<24 )&&(hour>0))
        hours_ = hour;
}
int Times::Hours() const{
    return hours_;
}
int Times::Hourspm() const{
    int hourspm(hours_);
    if (hourspm>12 )
        hourspm-=12;
    return hourspm;
}
void Times::setMins(int mins){
    if ((mins<60)&&(mins >0))
        minutes_ = mins;
}
int Times::Minutes() const{
    return minutes_;
}
void Times::setSecs(int secs){
    if ((secs<60)&&(secs>0))
        seconds_ = secs;
}
int Times::Seconds() const{
    return seconds_;
}



Times *Times::operator +=(Times *time1)
{


    this->hours_ += time1->hours_;
    this->minutes_ += time1->minutes_;
    this->seconds_ += time1->seconds_;

    if (this->hours_>=24){
        this->hours_-=24;
    }
    if(this->minutes_>=60)
    {
        this->minutes_ -=  60;
        this->hours_ += 1;
    }

    if(this->seconds_>=60)
    {
        this->seconds_ -= 60;
        this->minutes_ += 1;
    }


    return time1;
}

Times Times::operator -=(Times *time1)
{


    time1->hours_ -= this->hours_;
    time1->minutes_ -= this->minutes_;
    time1->seconds_ -= this->seconds_;

    if (time1->hours_<0){
        time1->hours_+=24;
    }
    if(time1->minutes_<0)
    {
        time1->minutes_ +=  60;

    }

    if(time1->seconds_<0)
    {
        time1->seconds_ += 60;

    }


    return *time1;
}
