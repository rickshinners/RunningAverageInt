#include "RunningAverageInt.h"

RunningAverageInt::RunningAverageInt(int numValues)
{
    _numValues = numValues;
    _index = 0;
    _total = 0;
    _values = new int[numValues];
    for (int i = 0; i < numValues; i++) {
        _values[i] = 0;
    }
}

void RunningAverageInt::add(int val)
{
    _total -= _values[_index];
    _values[_index] = val;
    _total += _values[_index];
    _index++;
    if (_index == _numValues) {
        _index = 0;
    }
}

int RunningAverageInt::get()
{
    return _total / _numValues;
}

void RunningAverageInt::fill(int val)
{
    for (int i = 0; i < _numValues; i++) {
        _values[i] = val;
    }
    _total = val * _numValues;
}
