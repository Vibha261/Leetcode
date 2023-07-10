class ParkingSystem {
private:
    int bigCar;
    int mediumCar;
    int smallCar;
public:
    ParkingSystem(int big, int medium, int small) {
        bigCar=big;
        mediumCar=medium;
        smallCar=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(bigCar!=0){
                bigCar-=1;
                return true;
            }
            else
            {
                return false;
            }
        }
        if(carType==2)
        {
            if(mediumCar!=0){
                mediumCar-=1;
                return true;
            }
            else
            {
                return false;
            }
        }
        if(carType==3)
        {
            if(smallCar!=0){
                smallCar-=1;
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */