#include "data.h"

void data::set_distance(double dist)
{
  m_distance = dist;
}
void data::set_feature_vector(std::vector<uint8_t>* vect)
{
  m_feature_vector = vect;
}
void data::append_to_feature_vector(uint8_t val)
{
  m_feature_vector->push_back(val);
}
void data::set_label(uint8_t val)
{
  m_label = val;
}
void data::set_enumerated_label(uint8_t val)
{
  m_enumerated_label = val;
}

void data::print_vector()
{
  printf("[ ");
  for(uint8_t val : *m_feature_vector)
  {
    printf("%u ", val);
  }
  printf("]\n");
}

double data::get_distance()
{
  return m_distance;
}

int data::get_feature_vector_size()
{
  return m_feature_vector->size();
}
uint8_t data::get_label()
{
  return m_label;
}
uint8_t data::get_enumerated_label()
{
  return m_enumerated_label;
}

std::vector<uint8_t> * data::get_feature_vector()
{
  return m_feature_vector;
}