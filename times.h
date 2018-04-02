#ifndef TIMES_H
#define TIMES_H


class Times
{
    int hours_,minutes_,seconds_;
public:
    Times();
    Times(int hour , int minutes=0,int secs=0);
    
    void setHour(int hour);
    int Hours() const;
    int Hourspm() const;
    void setMins(int mins);
    int Minutes() const;
    void setSecs(int secs);
    int Seconds() const;
    Times *operator +=(Times *time1);
    Times operator -=(Times *time1);
};

#endif // TIMES_H
