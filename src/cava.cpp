#include "cava.h"

cava::cava() : name("Cava"), date_of_birth("May 8th 2022")
{
  std::cout << "Name: " << this->name << '\n';
  std::cout << "Date of birth: " << this->date_of_birth << '\n';
}

void cava::attack()
{
  this->jump();
  this->hug();
}

void cava::azkaban()
{
  this->go_to("crate");
  this->lay_down();
  this->relax();
}

void cava::bart() {}

void cava::hug() {}

void cava::twerk()
{
  this->lay_down();
  this->ass_up();
}

void cava::weeeee() {}

// ...

void cava::go_to(const char *dest) { std::cout << "Go to: " << dest << '\n'; }

void cava::jump() {}

void cava::relax()
{
  // Don't know what this means
}

// ...

void cava::ass_up() {}

void cava::lay_down() {}
