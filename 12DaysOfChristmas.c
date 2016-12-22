#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* concat(const char* s1, const char* s2);

char* getDay(int index);

char* getGifts(int index);

int main() {
  for (size_t i = 1; i <= 12; i++) {
    char* day = getDay(i);
    char* gifts = getGifts(i);
    printf("On the %s day of christmas my true love sent to me: \n %s\n" , day, gifts);
  }
  return 0;
}

char* concat(const char* s1, const char* s2) {
  char* result = malloc(strlen(s1) + strlen(s2) + 1);
  strcpy(result, s1);
  strcat(result, s2);
  return result;
}

char* getDay(int index) {
  switch (index) {
    case 1: return "first";
    case 2: return "second";
    case 3: return "third";
    case 4: return "fourth";
    case 5: return "fifth";
    case 6: return "sixth";
    case 7: return "seventh";
    case 8: return "eighth";
    case 9: return "ninth";
    case 10: return "tenth";
    case 11: return "eleventh";
    case 12: return "twelfth";
    default: return "";
  }
}

char* getGifts(int index) {
  char* gifts = "";
  switch (index) {
    case 12: gifts = concat(gifts, "Twelve Drummers Drumming\n");
    case 11: gifts = concat(gifts, "Eleven Pipers Piping\n");
    case 10: gifts = concat(gifts, "Ten Lords a Leaping\n");
    case 9: gifts = concat(gifts, "Nine Ladies Dancing\n");
    case 8: gifts = concat(gifts, "Eight Maids a Milking\n");
    case 7: gifts = concat(gifts, "Seven Swans a Swimming\n");
    case 6: gifts = concat(gifts, "Six Goose a Laying\n");
    case 5: gifts = concat(gifts, "Five Gold Rings\n");
    case 4: gifts = concat(gifts, "Four Calling Birds\n");
    case 3: gifts = concat(gifts, "Three French Hens\n");
    case 2: gifts = concat(gifts, "Two Turtle Doves\n");
    case 1:
      if (index > 1) {
        gifts = concat(gifts, "and ");
      }
      gifts = concat(gifts, "a Partridge in a Pear Tree\n");
  }
  return gifts;
}
