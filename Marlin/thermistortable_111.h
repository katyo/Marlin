/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// R25 = 100 kOhm, beta25 = 3950 K, 10 kOhm pull-up, QU-BD silicone bed QWG-104F-3950 thermistor
const short temptable_111[][2] PROGMEM = {
  { OV(   1),  938 },
  { OV(  17),  300 },
  { OV(  19),  295 },
  { OV(  20),  290 },
  { OV(  21),  285 },
  { OV(  22),  280 },
  { OV(  24),  275 },
  { OV(  25),  270 },
  { OV(  27),  265 },
  { OV(  29),  260 },
  { OV(  31),  255 },
  { OV(  33),  250 },
  { OV(  36),  245 },
  { OV(  38),  240 },
  { OV(  41),  235 },
  { OV(  44),  230 },
  { OV(  48),  225 },
  { OV(  52),  220 },
  { OV(  56),  215 },
  { OV(  60),  210 },
  { OV(  65),  205 },
  { OV(  71),  200 },
  { OV(  77),  195 },
  { OV(  84),  190 },
  { OV(  91),  185 },
  { OV(  99),  180 },
  { OV( 108),  175 },
  { OV( 119),  170 },
  { OV( 130),  165 },
  { OV( 142),  160 },
  { OV( 155),  155 },
  { OV( 170),  150 },
  { OV( 187),  145 },
  { OV( 205),  140 },
  { OV( 225),  135 },
  { OV( 246),  130 },
  { OV( 270),  125 },
  { OV( 296),  120 },
  { OV( 324),  115 },
  { OV( 354),  110 },
  { OV( 386),  105 },
  { OV( 420),  100 },
  { OV( 456),   95 },
  { OV( 494),   90 },
  { OV( 533),   85 },
  { OV( 572),   80 },
  { OV( 612),   75 },
  { OV( 652),   70 },
  { OV( 692),   65 },
  { OV( 730),   60 },
  { OV( 766),   55 },
  { OV( 800),   50 },
  { OV( 832),   45 },
  { OV( 861),   40 },
  { OV( 887),   35 },
  { OV( 910),   30 },
  { OV( 930),   25 },
  { OV( 947),   20 },
  { OV( 962),   15 },
  { OV( 975),   10 },
  { OV( 985),    5 },
  { OV( 993),    0 },
  { OV(1021),  -27 }
};
