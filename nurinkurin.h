#pragma once

#define ____ KC_NO

#include "quantum.h"

#define LAYOUT_default( \
                K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012,   \
                K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111,         \
                K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,   \
                K300, K301,             K304, K305,             K308,       K310,       K312    \
) { \
              { K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012 }, \
              { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, ____ }, \
              { K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212 }, \
              { K300, K301, ____, ____, K304, K305, ____, ____, K308, ____, K310, ____, K312 }, \
}
