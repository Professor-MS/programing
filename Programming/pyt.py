from turtle import *

# Set background color
bgcolor("gray")

# Set drawing color
color("red")

# Start filling the shape
begin_fill()

# Set pen size
pensize(6)

# Draw the heart shape
left(50)
forward(133)
circle(50,200)
right(140)
circle(50,200)
forward(133)

# End filling the shape
end_fill()

# Move the turtle to write the text
penup()
goto(0, -100)
pendown()

# Write the text
color("white")
write("Love from Professor", align="center", font=("Arial", 20, "bold"))

# Hide the turtle
hideturtle()

# Keep the window open
done()