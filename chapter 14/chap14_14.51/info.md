Exercise 14.51: Show the conversion sequences (if any) needed to call each
version of calc and explain why the best viable function is selected.


void calc(int);

void calc(LongDouble);

double dval;

calc(static_cast<long double>(dval)); // which calc? uses (long double) otherwise it uses (int).