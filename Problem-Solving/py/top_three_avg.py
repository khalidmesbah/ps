def f(a, b, c): return (a+b+c)/3


def ff(a, b, c, d):
    x1 = f(a, b, c)
    x2 = f(a, b, d)
    x3 = f(c, d, a)
    x4 = f(c, d, b)
    return max(x1, x2, x3, x4)


def average_top_3_grades(grade1, grade2, grade3, grade4):
    total = grade1 + grade2 + grade3 + grade4
    minimum = min(grade1, grade2, grade3, grade4)
    total = total - minimum
    return total / 3


print(average_top_3_grades(50, 60, 70, 80)) # 70.0

# هتجمع ال4 درجات وتحطهم في total
# هتجيب اصغر درجة وتحطها في minimum
# هتطرح اصغر درجة من مجموع الدرجات يبقي كده جبت اعلي 3 درجات
# هتقسمهم علي مجموعهم