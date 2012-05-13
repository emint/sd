/*
 * ShaderVariable.h
 *
 *  Created on: May 12, 2012
 *      Author: emint
 */

#ifndef SHADERVARIABLE_H_
#define SHADERVARIABLE_H_

#include <string>

using namespace std;

class ShaderVariable {
  public:
    enum ScopeTypes {
      Uniform,
      Attribute,
      None
    };

    enum VarTypes {
      Vec2,
      Vec3,
      Sampler,
      Float,
      Int,
      Unknown
    };

    ShaderVariable(string name, ScopeTypes scope, VarTypes type);
    ShaderVariable();
    virtual ~ShaderVariable();

    //Returns a string representation of this variable
    string toString();

  private:
    string name;
    ScopeTypes scope;
    VarTypes type;

    //String conversions
    string getTypeAsString();
    string getScopeAsString();
};

#endif /* SHADERVARIABLE_H_ */