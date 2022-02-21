#include <cs50.h>
#include <stdio.h>


void mario_triangle(int n);
int main(void)
{
    int n;
    do{
    // ask user for input
      n = get_int("Height: ");
    }
    // handle if user input is > 8 or < 1
    while(n < 1 || n > 8);
    mario_triangle(n);

}



void mario_triangle(n){
// Spaces for first triangle
  for(int row = 0; row < n; row ++){
    for(int space = 0; space < (n - row); space++){
      printf(" ");
    }
    // first triangle
    for(int colunm = 0; colunm <(row + 1); colunm++ ){

      printf("#");
    }
    // space between triangles
    printf(" ");
    // second triangle
    for(int colunm = 0; colunm <(row + 1); colunm++ ){
      printf("#");
    }
    // brake line after every loop
    printf("\n");
  }
}

////////////// INSTRUCTIONS /////////////////////

  // Draw two half squares facing each other
    // draw one half a square
    // to draw one half a square, first we need to draw a square /done/
    // find a way a way to convert that half a sqaure into a triangle
      //We need a for loop that goes goes up, until n(1-8)
      //We found the equation, we add one to row  to make number go up every loop

      // We need spaces for the first triangle
        // in the first row we need three spaces before the <<#>>, and decrease it from there
        // So we need to invert our previous equation to (n-row)

//   // Loop that goes down as it goes up
// for(int i = 1; i<=4; i++){
//   int n = (4 - i) ;
//   printf("%i \n", n);