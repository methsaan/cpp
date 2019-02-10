#! /usr/bin/python3

from tkinter import *
tk = Tk()

fo = open("mistakeTracker", "r")

canvas = Canvas(tk, width=500, height=500, bg="white")
canvas = Canvas(tk, width=1100, height=800, bg="white")
canvas.pack()
canvas.create_line(250, 50, 250, 680, width=10)
canvas.create_line(250, 680, 1050, 680, width=10)
mistakes = []
for x in range(10):
    mistakes.append(int(fo.readline()[-3:-1]))
print(mistakes)
fo.close()
canvas.mainloop()
