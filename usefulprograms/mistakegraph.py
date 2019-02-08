#! /usr/bin/python3

from tkinter import *
tk = Tk()
canvas = Canvas(tk, width=500, height=500, bg="aqua")
canvas = Canvas(tk, width=1100, height=800, bg="aqua")
canvas.pack()

canvas.create_line(250, 50, 250, 680, width=5)
canvas.create_line(250, 680, 1050, 680, width=5)
canvas.mainloop()
