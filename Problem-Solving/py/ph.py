def ph_scale(ph: float):
    if ph < 7.0:
        print(ph, "is Acidic.")
    elif ph == 7.0:
        print(ph, "is neutral.")
    else:
        print(ph, "ic Basic.")


ph_scale(2.0)
ph_scale(6)
ph_scale(7.0)
ph_scale(13)
""" 
2.0 is Acidic.
6 is Acidic.
7.0 is neutral.
13 ic Basic. """