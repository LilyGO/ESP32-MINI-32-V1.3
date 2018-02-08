
#ifndef SWITCH_H
#define SWITCH_H

class Switch
{
public:
  Switch(byte _pin, byte PinMode=INPUT_PULLUP, bool polarity=LOW, int debounceDelay=50, int longPressDelay=400, int doubleClickDelay=250);
  bool poll(); // Returns 1 if switched
  bool switched(); // will be refreshed by poll()
  bool on();
  bool pushed(); // will be refreshed by poll()
  bool released(); // will be refreshed by poll()
  bool longPress(); // will be refreshed by poll()
  bool doubleClick(); // will be refreshed by poll()

  unsigned long _switchedTime, pushedTime;

protected:
  const byte pin;
  const int debounceDelay, longPressDelay, doubleClickDelay;
  const bool polarity;
  bool level, _switched, _longPress, longPressLatch, _doubleClick;
};

#endif
