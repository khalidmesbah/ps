def get_weekday(cur, left):
    return (cur + left % 7) % 7


def days_difference(day1: int, day2: int) -> int:
    return day2 - day1


def get_birthday_weekday(current_weekday: int, current_day: int, birthday_day: int) -> int:
    days_diff = days_difference(current_day, birthday_day)
    return get_weekday(current_weekday, days_diff)


"""Return the day of the week it will be on birthday_day,
given that the day of the week is current_weekday and the
day of the year is current_day.
current_weekday is the current day of the week and is in
the range 1-7, indicating whether today is Sunday (1),
Monday (2),, Saturday (7).
current_day and birthday_day are both in the range 1-365.
"""
print(get_birthday_weekday(5, 3, 4))
print(get_birthday_weekday(5, 3, 116))
print(get_birthday_weekday(6, 116, 3))
