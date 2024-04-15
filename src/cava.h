#include <iostream>
#include <string>

class cava
{
public:
  cava();
  //~cava();

  std::string name;
  std::string date_of_birth;

  // Commands

  /// Find nearest homan and give it super happy hugs.
  void attack();

  /// Enter crate, lay down, relax.
  void azkaban();

  /// Become a real Trønder!
  void bart();

  /// A hug.
  void hug();

  /// Weave between your legs.
  void slalom();

  /// Head down, ass up!
  void twerk();

  /// Weave between poles.
  void weeeee();

  /// Walk in an eigh figure between your legs.
  void åtte();

  // Base commands

  void go_to(const char *dest);
  void jump();
  void relax();

  // Behaviours

  void ass_up();
  void lay_down();
};
