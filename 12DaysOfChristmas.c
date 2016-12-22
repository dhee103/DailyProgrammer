#include<stdio.h>

int main() {
  for (size_t i = 1; i <= 12; i++) {
    char* day[] = {"first", "second", "third", "fourth", "fifth", "sixth",
                  "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"};
    printf("On the %s day of christmas my true love sent to me:\n" , day[i-1]) ;
    switch (i) {
      case 12: puts("Twelve Drummers Drumming");
      case 11: puts("Eleven Pipers Piping");
      case 10: puts("Ten Lords a Leaping");
      case 9:  puts("Nine Ladies Dancing");
      case 8:  puts("Eight Maids a Milking");
      case 7:  puts("Seven Swans a Swimming");
      case 6:  puts("Six Goose a Laying");
      case 5:  puts("Five Gold Rings");
      case 4:  puts("Four Calling Birds");
      case 3:  puts("Three French Hens");
      case 2:  puts("Two Turtle Doves");
      case 1:
        if (i > 1) {
          printf("and ");
        }
        puts("a Partridge in a Pear Tree\n");
    }
  }
  return 0;
}
