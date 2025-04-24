# Mid-Point-Circle-Algorithm
### Description 
The Midpoint Circle Drawing Algorithm is a computer graphics algorithm used to draw a circle efficiently on a raster display. It works by determining the next pixel to plot based on a decision parameter that eliminates the need for floating-point arithmetic or trigonometric calculations.
The algorithm exploits the symmetry of a circle. Since a circle is symmetrical in eight octants, the algorithm calculates points for just one-eighth of the circle and reflects them across the other seven octants. This drastically reduces the number of calculations needed.
The process starts at the top of the circle (0, r) and proceeds clockwise or counterclockwise through one octant. At each step, it decides whether the next point should move directly right (east) or diagonally down and right (southeast). This decision is made using a decision parameter, which is updated at each step based on simple integer arithmetic.
The algorithm continues until the x-coordinate exceeds the y-coordinate, completing one octant. The full circle is then rendered by mirroring the computed points across the circle’s center.
### Algorithm 
Step 1: Initialization
                          1.  Set x =0
                          2.   Set y = r
                          3.   Initialize the decision parameter: d = 1 - r
                          4. Create an empty list to store points
 Step 2: Plot Initial Octant Points
     5. Plot the initial 8 symmetric points around the center using (x, y)
 Step 3: Loop Until x > y
     6. While x < y, repeat:
            Increment x by 1
       If d < 0:
           New decision parameter: d = d + 2*x + 1
      Else:
                                                                                                                                                                       
          Decrement y by 1
         Update decision parameter: d = d + 2*(x - y) + 1
  Plot the 8 symmetric points for current (x, y)
  Step 4: End
     7.  Continue until x >= y
     8.  Return or draw the collected points
