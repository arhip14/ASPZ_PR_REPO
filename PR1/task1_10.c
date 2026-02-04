
#include <stdio.h>

enum Calendar {
    GREGORIAN = 1,
    JULIAN = 2
};

int main() {
    int day, month, year;
    int days = 0;
    int calendar_choice;
    int leap = 0;
    
    printf("Enter Day Month Year: ");
        scanf("%d %d %d", &day, &month, &year);

        printf("Choose Calendar (1 - Gregorian, 2 - Julian): ");
        scanf("%d", &calendar_choice);
    if (calendar_choice == GREGORIAN) {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                leap = 1;
            }
        } else if (calendar_choice == JULIAN) {
            if (year % 4 == 0) {
                leap = 1;
            }
        }

    if (month == 1 || month == 3 || month == 5 ||
            month == 7 || month == 8 || month == 10 || month == 12) {
            days = 31; 
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            days = 30;
        } else if (month == 2) { 
            days = leap ? 29 : 28;
        } else {
            printf("Invalid month!\n");
            return 1;
        }
    day++;
        if (day > days) {
            day = 1;
            month++;
        }
        if (month > 12) {
            month = 1;
            year++;
        }
        printf("Tomorrow: %02d.%02d.%d\n", day, month, year);

        return 0;    
}
