#include <bits/stdc++.h>
using namespace std;

class FarmAnimal
{
  public:
    FarmAnimal()
    {
    }
    virtual void sound()
    {
    }
};

class Sapi : public FarmAnimal
{
  private:
    string name;

  public:
    Sapi()
    {
    }
    Sapi(string _name)
    {
        name = _name;
    }
    void sound()
    {
        cout << "Moo" << endl;
    }
    void printName()
    {
        cout << name << endl;
    }
};

int main()
{
  FarmAnimal A;
  A = new Sapi();
  return 0;
}