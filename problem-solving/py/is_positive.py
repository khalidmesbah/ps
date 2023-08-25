def is_positive(x: float) -> bool:
    if x < 0 or x == 0:
        return False
    return True


print(is_positive(5))
print(is_positive(125))
print(is_positive(-2))
print(is_positive(0))
