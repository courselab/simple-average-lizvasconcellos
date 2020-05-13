/* main.c - Calculate the average of three numbers.

   Copyright (c) 2020, Liz Vasconcellos, liz.vasconcellos@usp.br

   This file is part of Simple Average

   Simple Average is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>

float average(float a, float b, float c)
{
    float x;
    x = (a + b + c)/3;
    return x;
}

int main()
{
  float v1, v2, v3;
  float result;

  v1 = 10;
  v2 = 20;
  v3 = 60;

  result = average (v1, v2, v3);

  printf ("%2.2f", result);

  return 0 ;
}
