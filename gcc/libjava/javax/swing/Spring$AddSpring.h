
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_Spring$AddSpring__
#define __javax_swing_Spring$AddSpring__

#pragma interface

#include <javax/swing/Spring.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class Spring;
        class Spring$AddSpring;
    }
  }
}

class javax::swing::Spring$AddSpring : public ::javax::swing::Spring
{

public:
  ::java::lang::String * toString();
public: // actually protected
  Spring$AddSpring(::javax::swing::Spring *, ::javax::swing::Spring *);
public:
  jint getMaximumValue();
  jint getMinimumValue();
  jint getPreferredValue();
  jint getValue();
  void setValue(jint);
private:
  ::javax::swing::Spring * __attribute__((aligned(__alignof__( ::javax::swing::Spring)))) s1;
  ::javax::swing::Spring * s2;
  jint value;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_Spring$AddSpring__