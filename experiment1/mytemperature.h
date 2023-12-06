#include <iostream>
using namespace std;
const int binary = 32; // 转换进制常数
double celsius_to_fah(double cell)
{
  float fah;
  fah = cell * 1.8 + binary;
  return fah;
}
double fahrenheit_to_cels(double fah)
{
  float cell;
  cell = (fah - binary) / 1.8;
  return cell;
}
