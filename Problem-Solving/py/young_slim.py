age = int(input("type your age: "))
bmi = float(input("type your bmi: "))

young = age < 45 
""" لو العمر اقل من 45 
يبقي
young = True
غير كده يبقي
young = False """
slim = bmi < 22.0
""" 
لو مؤشر كتلة الجسم اقل من 22 يبقي نحيف
slim = True 
غير كده 
slim = False """
risk = ""

# solution 1
""" if young:
    if slim:
        risk = "low"
    else:
        risk = "medium"
else:
    if slim:
        risk = "medium"
    else:
        risk = "high"
 """
# solution 2
if young and slim:
    risk = "low"
elif young and not slim:
    risk = "medium"
elif not young and slim:
    risk = "medium"
elif not young and not slim:
    risk = "high"
print(risk)

""" 
type your age: 4
type your bmi: 2
low

 """