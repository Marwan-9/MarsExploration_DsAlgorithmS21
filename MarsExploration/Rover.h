#pragma once
class Rover
{
protected:
	int CheckupDuration;
	int rSpeed;
public:
	Rover(int r_CheckupDuration = 0, int r_rSpeed = 0);
	int getCheckupDuration();
	void setCheckupDuration(int D);
	
	int getrSpeed() ;
	void setrSpeed(int S) ;
	
	
	~Rover() ;
};
