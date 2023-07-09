import pyautogui
import time
time.sleep(4)
count=1
while count<=500:
    pyautogui.typewrite(str(count)+".All the best for your upcoming exams" )
    pyautogui.press("enter")
    count=count+1
  