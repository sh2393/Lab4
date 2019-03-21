import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(13, GPIO.OUT)

f = 60
p=GPIO.PWM(13, f)
p.start(50)
n = raw_input()
p.stop()
GPIO.cleanup()

