#ifndef CELSIUS_H_INCLUDED
#define CELSIUS_H_INCLUDED

class Celsius{
    private:
    float value;
    public:
        Celsius();

        void setValue();
        float getValue();

        void farToCel();
        void kelToCel();


};

#endif // CELSIUS_H_INCLUDED
