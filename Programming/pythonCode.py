import turtle

# Set up the screen
win = turtle.Screen()
win.bgcolor("white")

# Create a new turtle object
heart = turtle.Turtle()

# Draw the heart
heart.fillcolor("red")
heart.begin_fill()
heart.left(50)
heart.forward(133)
heart.circle(50,200)
heart.right(50)
heart.setheading(60)
heart.circle(50,200)
heart.forward(133)
heart.end_fill()

# Hide the turtle
heart.hideturtle()

# Keep the window open
turtle.done()
