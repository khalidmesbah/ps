def get_weekday(cur: int, left: int) -> int:
    print((cur + left) % 7, (cur+left % 7) % 7)
    return (cur + left) % 7


get_weekday(7, 72)
get_weekday(3, 1)
get_weekday(3, 1)
get_weekday(6, 1)
get_weekday(7, 1)
get_weekday(1, 0)
get_weekday(4, 7)

""" 
Return which day of the week it will be days_ahead days
from current_weekday.
current_weekday is the current day of the week and is in
the range 1-7, indicating whether today is Sunday (1),
Monday (2),, Saturday (7).
days_ahead is the number of days after today.
"""
