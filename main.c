/**
 * @file
 * @brief Основной модуль
 */

#include "area.h"
#include <stdio.h>

/**
 * Разница между прощадью прямоугольника заданного размера и
 * максимального вписанного в него круга
 *
 * @param width Ширина прямоугольника
 * @param height Высота прямоугольника
 * @return Разница площадей прямоугольника и вписанного круга
 */
double area_difference(double width, double height) {
  double min = width < height ? width : height;
  double circle = circle_area(min / 2.); // Радиус в два раза меньше
  double rectangle = rectangle_area(width, height);
  return rectangle - circle;
}

/**
 * Описание того, что делает функция main
 *
 * @return Код возврата
 */
int main() {
  printf("%lf\n", area_difference(10, 20));
  return 0;
}
