#ifndef RunningAverageInt_h
#define RunningAverageInt_h

#include "Arduino.h"

class RunningAverageInt
{
  public:
    RunningAverageInt(int numValues);
    void add(int val);
    int get();
    void fill(int val);
  private:
    int _numValues;
    int _index;
    long _total;
    int *_values;
};

#endif